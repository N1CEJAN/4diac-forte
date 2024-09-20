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
#include <conversion_tests/msg/Iec61499PrimitiveDatentypen_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Iec61499PrimitiveDatentypenPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Iec61499PrimitiveDatentypenPubSub_gen.cpp"
#endif
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Iec61499PrimitiveDatentypen/Iec61499PrimitiveDatentypen.h"

std::string conversion_tests::Iec61499PrimitiveDatentypenPubSub::registerType(DomainParticipant *paParticipant) {
    this->m_type.register_type(paParticipant);
    return this->m_type.get_type_name();
}

bool conversion_tests::Iec61499PrimitiveDatentypenPubSub::validateType(const CStringDictionary::TStringId typeId) {
    return typeId == g_nStringIdIec61499PrimitiveDatentypen;
}

bool conversion_tests::Iec61499PrimitiveDatentypenPubSub::publish(CIEC_STRUCT *data) {
    const auto casted = dynamic_cast<CIEC_Iec61499PrimitiveDatentypen *>(data);
    msg::Iec61499PrimitiveDatentypen ddsStruct = ciec2dds(*casted);
    return this->write(&ddsStruct);
}

std::optional<std::unique_ptr<CIEC_STRUCT> > conversion_tests::Iec61499PrimitiveDatentypenPubSub::receive() {
    conversion_tests::msg::Iec61499PrimitiveDatentypen ddsStruct;
    bool taken;
    this->take(&taken, &ddsStruct);
    if (!taken) return std::nullopt;

    auto ciecStruct = std::make_unique<CIEC_Iec61499PrimitiveDatentypen>(dds2ciec(ddsStruct));
    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

    return std::make_optional(std::move(ptr));
}

conversion_tests::msg::Iec61499PrimitiveDatentypen conversion_tests::Iec61499PrimitiveDatentypenPubSub::ciec2dds(
    const CIEC_Iec61499PrimitiveDatentypen &ciec) {
    msg::Iec61499PrimitiveDatentypen dds;
    dds.a_bool(static_cast<bool>(ciec.var_a_bool));
    dds.a_byte(static_cast<TForteByte>(ciec.var_a_byte));
    dds.a_word(static_cast<TForteWord>(ciec.var_a_word));
    dds.a_dword(static_cast<TForteDWord>(ciec.var_a_dword));
    dds.a_lword(static_cast<TForteLWord>(ciec.var_a_lword));
    dds.a_sint(static_cast<TForteInt8>(ciec.var_a_sint));
    dds.a_int(static_cast<TForteInt16>(ciec.var_a_int));
    dds.a_dint(static_cast<TForteInt32>(ciec.var_a_dint));
    dds.a_lint(static_cast<TForteInt64>(ciec.var_a_lint));
    dds.a_usint(static_cast<TForteUInt8>(ciec.var_a_usint));
    dds.a_uint(static_cast<TForteUInt16>(ciec.var_a_uint));
    dds.a_udint(static_cast<TForteUInt32>(ciec.var_a_udint));
    dds.a_ulint(static_cast<TForteUInt64>(ciec.var_a_ulint));
    dds.a_real(static_cast<TForteFloat>(ciec.var_a_real));
    dds.a_lreal(static_cast<TForteDFloat>(ciec.var_a_lreal));
    dds.a_char(static_cast<TForteChar>(ciec.var_a_char));
    dds.a_string(ciec.var_a_string.getStorage());
    dds.a_wstring(general_purpose::msg::convertCIEC_WSTRING2Wstring(ciec.var_a_wstring));
    return dds;
}

CIEC_Iec61499PrimitiveDatentypen conversion_tests::Iec61499PrimitiveDatentypenPubSub::dds2ciec(
    const msg::Iec61499PrimitiveDatentypen &dds) {
    CIEC_Iec61499PrimitiveDatentypen ciec;
    ciec.var_a_bool = CIEC_BOOL(dds.a_bool());
    ciec.var_a_byte = CIEC_BYTE(dds.a_byte());
    ciec.var_a_word = CIEC_BYTE(dds.a_byte());
    ciec.var_a_dword = CIEC_BYTE(dds.a_byte());
    ciec.var_a_lword = CIEC_BYTE(dds.a_byte());
    ciec.var_a_sint = CIEC_SINT(dds.a_sint());
    ciec.var_a_int = CIEC_INT(dds.a_int());
    ciec.var_a_dint = CIEC_DINT(dds.a_dint());
    ciec.var_a_lint = CIEC_LINT(dds.a_lint());
    ciec.var_a_usint = CIEC_USINT(dds.a_usint());
    ciec.var_a_uint = CIEC_UINT(dds.a_uint());
    ciec.var_a_udint = CIEC_UDINT(dds.a_udint());
    ciec.var_a_ulint = CIEC_ULINT(dds.a_ulint());
    ciec.var_a_real = CIEC_REAL(dds.a_real());
    ciec.var_a_lreal = CIEC_LREAL(dds.a_lreal());
    ciec.var_a_char = CIEC_CHAR(dds.a_char());
    ciec.var_a_string = CIEC_STRING(dds.a_string());
    ciec.var_a_wstring = general_purpose::msg::convertWstring2CIEC_WSTRING(dds.a_wstring());
    return ciec;
}

