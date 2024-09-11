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
#include <conversion_tests/msg/ROS2_conversiontests_msg_Ros2PrimitiverDatentyp_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Ros2PrimitiverDatentypPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2PrimitiverDatentypPubSub_gen.cpp"
#endif
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Ros2PrimitiverDatentyp/Ros2PrimitiverDatentyp.h"

std::string conversion_tests::Ros2PrimitiverDatentypPubSub::registerType(DomainParticipant *paParticipant) {
    this->m_type.register_type(paParticipant);
    return this->m_type.get_type_name();
}

bool conversion_tests::Ros2PrimitiverDatentypPubSub::validateType(const CStringDictionary::TStringId typeId) {
    return typeId == g_nStringIdROS2_conversiontests_msg_Ros2PrimitiverDatentyp;
}

bool conversion_tests::Ros2PrimitiverDatentypPubSub::publish(CIEC_STRUCT *data) {
    const auto casted = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp *>(data);
    msg::Ros2PrimitiverDatentyp ros2primitives = ciec2dds(*casted);
    return this->write(&ros2primitives);
}

std::optional<std::unique_ptr<CIEC_STRUCT> > conversion_tests::Ros2PrimitiverDatentypPubSub::receive() {
    msg::Ros2PrimitiverDatentyp ros2primitives;
    bool taken;
    this->take(&taken, &ros2primitives);
    if (!taken) return std::nullopt;

    auto ciecStruct = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp>(dds2ciec(ros2primitives));
    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

    return std::make_optional(std::move(ptr));
}

conversion_tests::msg::Ros2PrimitiverDatentyp conversion_tests::Ros2PrimitiverDatentypPubSub::ciec2dds(
    const CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp &ciec) {
    msg::Ros2PrimitiverDatentyp dds;
    dds.a_bool(ciec.var_a_bool);
    return dds;
}

CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp conversion_tests::Ros2PrimitiverDatentypPubSub::dds2ciec(
    const msg::Ros2PrimitiverDatentyp &dds) {
    CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp ciec;
    ciec.var_a_bool = CIEC_BOOL(dds.a_bool());
    return ciec;
}
