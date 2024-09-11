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
#include "types/conversion_tests/msg/Ros2PrimitiverDatentyp/Ros2PrimitiverDatentyp.h"
#include "types/conversion_tests/msg/Ros2PrimitiverDatentyp/Ros2PrimitiverDatentypPubSub.h"
#include "types/conversion_tests/msg/Ros2PrimitiverDatentyp/Ros2PrimitiverDatentypPubSubTypes.h"
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
    ros2referenzen.absolute_reference(Ros2PrimitiverDatentypPubSub::ciec2dds(casted->var_relative_reference));

    // array_of_absolute_reference
    std::vector<msg::Ros2PrimitiverDatentyp> array_of_absolute_references;
    for (int i = 0; i < 3; ++i) {
        auto element = Ros2PrimitiverDatentypPubSub::ciec2dds(casted->var_array_of_absolute_references[i]);
        array_of_absolute_references.push_back(element);
    }
    ros2referenzen.array_of_absolute_references(array_of_absolute_references);

    // relative_reference
    ros2referenzen.relative_reference(Ros2PrimitiverDatentypPubSub::ciec2dds(casted->var_relative_reference));

    // array_of_relative_references
    std::vector<msg::Ros2PrimitiverDatentyp> array_of_relative_references;
    for (int i = 0; i < 3; ++i) {
        auto element = Ros2PrimitiverDatentypPubSub::ciec2dds(casted->var_array_of_relative_references[i]);
        array_of_relative_references.push_back(element);
    }
    ros2referenzen.array_of_relative_references(array_of_relative_references);

    return this->write(&ros2referenzen);
}

std::optional<std::unique_ptr<CIEC_STRUCT> > conversion_tests::Ros2ReferenzenPubSub::receive() {
    msg::Ros2Referenzen ros2referenzen;
    bool taken;
    this->take(&taken, &ros2referenzen);
    if (!taken) return std::nullopt;

    auto ciecStruct = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2Referenzen>();

    // absolute_reference
    ciecStruct->var_absolute_reference = Ros2PrimitiverDatentypPubSub::dds2ciec(ros2referenzen.absolute_reference());
    // array_of_absolute_references
    for (size_t i = 0; i < 3; ++i) {
        ciecStruct->var_array_of_absolute_references[i] = Ros2PrimitiverDatentypPubSub::dds2ciec(
            ros2referenzen.array_of_absolute_references()[i]
        );
    }

    // relative_reference
    ciecStruct->var_relative_reference = Ros2PrimitiverDatentypPubSub::dds2ciec(ros2referenzen.relative_reference());
    // array_of_relative_references
    for (size_t i = 0; i < 3; ++i) {
        ciecStruct->var_array_of_relative_references[i] = Ros2PrimitiverDatentypPubSub::dds2ciec(
            ros2referenzen.array_of_relative_references()[i]
        );
    }

    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

    return std::make_optional(std::move(ptr));
}
