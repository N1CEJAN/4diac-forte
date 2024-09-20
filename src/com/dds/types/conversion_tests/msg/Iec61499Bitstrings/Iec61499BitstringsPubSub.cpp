/*******************************************************************************
 * Copyright (c) 2024 OFFIS e.V.
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    Malte Grave - initial implementation
 ********************************************************************************/

#include <memory>
#include <conversion_tests/msg/Iec61499Bitstrings_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Iec61499BitstringsPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Iec61499BitstringsPubSub_gen.cpp"
#endif
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Iec61499Bitstrings/Iec61499Bitstrings.h"

std::string conversion_tests::Iec61499BitstringsPubSub::registerType(DomainParticipant *paParticipant) {
    this->m_type.register_type(paParticipant);
    return this->m_type.get_type_name();
}

bool conversion_tests::Iec61499BitstringsPubSub::validateType(const CStringDictionary::TStringId typeId) {
    return typeId == g_nStringIdIec61499Bitstrings;
}

bool conversion_tests::Iec61499BitstringsPubSub::publish(CIEC_STRUCT *data) {
    const auto ciecStruct = dynamic_cast<CIEC_Iec61499Bitstrings *>(data);

    msg::Iec61499Bitstrings ddsStruct;
    ddsStruct.a_byte(static_cast<TForteByte>(ciecStruct->var_a_byte));
    ddsStruct.a_word_word(static_cast<TForteWord>(ciecStruct->var_a_word));
    ddsStruct.a_dword_dword(static_cast<TForteDWord>(ciecStruct->var_a_dword));
    ddsStruct.a_lword_lword(static_cast<TForteLWord>(ciecStruct->var_a_lword));

    return this->write(&ddsStruct);
}

std::optional<std::unique_ptr<CIEC_STRUCT> > conversion_tests::Iec61499BitstringsPubSub::receive() {
    conversion_tests::msg::Iec61499Bitstrings ddsStruct;
    bool taken;
    this->take(&taken, &ddsStruct);
    if (!taken) return std::nullopt;

    auto ciecStruct = std::make_unique<CIEC_Iec61499Bitstrings>();
    ciecStruct->var_a_byte = CIEC_BYTE(ddsStruct.a_byte());
    ciecStruct->var_a_word = CIEC_WORD(ddsStruct.a_word_word());
    ciecStruct->var_a_dword = CIEC_DWORD(ddsStruct.a_dword_dword());
    ciecStruct->var_a_lword = CIEC_LWORD(ddsStruct.a_lword_lword());
    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

    return std::make_optional(std::move(ptr));
}
