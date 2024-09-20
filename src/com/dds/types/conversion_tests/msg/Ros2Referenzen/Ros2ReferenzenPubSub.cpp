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
#include <conversion_tests/msg/ROS2_conversiontests_msg_Ros2Referenzen_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Ros2ReferenzenPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2ReferenzenPubSub_gen.cpp"
#endif
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Ros2PrimitiveDatentypen/Ros2PrimitiveDatentypenPubSub.h"
#include "types/conversion_tests/msg/Ros2Referenzen/Ros2Referenzen.h"

std::string conversion_tests::Ros2ReferenzenPubSub::registerType(DomainParticipant *paParticipant) {
    this->m_type.register_type(paParticipant);
    return this->m_type.get_type_name();
}

bool conversion_tests::Ros2ReferenzenPubSub::validateType(const CStringDictionary::TStringId typeId) {
    return typeId == g_nStringIdROS2_conversiontests_msg_Ros2Referenzen;
}

bool conversion_tests::Ros2ReferenzenPubSub::publish(CIEC_STRUCT *data) {
    const auto casted = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2Referenzen *>(data);

    msg::Ros2Referenzen ros2referenzen;

    // absolute_reference
    ros2referenzen.absolute_reference(Ros2PrimitiveDatentypenPubSub::ciec2dds(casted->var_absolute_reference));

    // relative_reference
    ros2referenzen.relative_reference(Ros2PrimitiveDatentypenPubSub::ciec2dds(casted->var_relative_reference));

    return this->write(&ros2referenzen);
}

std::optional<std::unique_ptr<CIEC_STRUCT> > conversion_tests::Ros2ReferenzenPubSub::receive() {
    msg::Ros2Referenzen ros2referenzen;
    bool taken;
    this->take(&taken, &ros2referenzen);
    if (!taken) return std::nullopt;

    auto ciecStruct = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2Referenzen>();

    // absolute_reference
    ciecStruct->var_absolute_reference = Ros2PrimitiveDatentypenPubSub::dds2ciec(ros2referenzen.absolute_reference());

    // relative_reference
    ciecStruct->var_relative_reference = Ros2PrimitiveDatentypenPubSub::dds2ciec(ros2referenzen.relative_reference());

    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

    return std::make_optional(std::move(ptr));
}
