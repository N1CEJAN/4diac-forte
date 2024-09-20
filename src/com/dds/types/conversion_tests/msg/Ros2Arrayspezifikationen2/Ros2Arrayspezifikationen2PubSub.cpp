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
#include <conversion_tests/msg/ROS2_conversiontests_msg_Ros2Arrayspezifikationen2_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Ros2Arrayspezifikationen2PubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2Arrayspezifikationen2PubSub_gen.cpp"
#endif
#include "forte_struct.h"
#include "types/conversion_tests/msg/Ros2Arrayspezifikationen2/Ros2Arrayspezifikationen2.h"

std::string conversion_tests::Ros2Arrayspezifikationen2PubSub::registerType(DomainParticipant *paParticipant) {
    this->m_type.register_type(paParticipant);
    return this->m_type.get_type_name();
}

bool conversion_tests::Ros2Arrayspezifikationen2PubSub::validateType(const CStringDictionary::TStringId typeId) {
    return typeId == g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen2;
}

bool conversion_tests::Ros2Arrayspezifikationen2PubSub::publish(CIEC_STRUCT *data) {
    const auto casted = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2 *>(data);
    msg::Ros2Arrayspezifikationen2 ros2arrayspezifikationen;

    // static_array
    DEVLOG_DEBUG("[DDS PubSub publish] static_array\n");
    msg::boolean__4 static_array = {};
    for (intmax_t i = 0; i < 100; i++)
        static_array[i] = casted->var_static_array[i];
    ros2arrayspezifikationen.static_array(static_array);

    // dynamic_array
    DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 0\n");
    const auto count = static_cast<intmax_t>(casted->var_dynamic_array_count);
    DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 1\n");
    std::vector<bool> dynamic_array = {};
    DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 2\n");
    for (intmax_t i = 0; i < count; i++) {
        DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 3 \n");
        dynamic_array.push_back(casted->var_dynamic_array[i]);
    }
    DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 4 \n");
    DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array size: %zu\n", dynamic_array.size());
    ros2arrayspezifikationen.dynamic_array(dynamic_array);

    DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 5 \n");
    return this->write(&ros2arrayspezifikationen);
}

std::optional<std::unique_ptr<CIEC_STRUCT> > conversion_tests::Ros2Arrayspezifikationen2PubSub::receive() {
    DEVLOG_DEBUG("[DDS PubSub subscribe] 0 receive start\n");
    msg::Ros2Arrayspezifikationen2 ros2arrayspezifikationen;
    DEVLOG_DEBUG("[DDS PubSub subscribe] 1 dds declaration\n");
    bool taken;
    DEVLOG_DEBUG("[DDS PubSub subscribe] 2 before take\n");
    this->take(&taken, &ros2arrayspezifikationen);
    if (!taken) return std::nullopt;

    DEVLOG_DEBUG("[DDS PubSub subscribe] 3 ciec declaration\n");
    auto ciecStruct = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2>();
    // static_array
    DEVLOG_DEBUG("[DDS PubSub subscribe] 4 static_array decl\n");
    CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 3> static_array = {};
    auto dds_static_array = ros2arrayspezifikationen.static_array();
    auto dds_static_array_size = dds_static_array.size();
    for (intmax_t i = 0; i < dds_static_array_size; i++) {
        DEVLOG_DEBUG("[DDS PubSub subscribe] 5 static_array decl %d\n", i);
        static_array[i] = CIEC_BOOL(dds_static_array[i]);
    }
    ciecStruct->var_static_array = static_array;

    // dynamic_array
    CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 3> dynamic_array = {};
    auto dds_dynamic_array = ros2arrayspezifikationen.dynamic_array();
    auto dds_dynamic_array_size = dds_dynamic_array.size();
    for (intmax_t i = 0; i < dds_dynamic_array_size; i++)
        dynamic_array[i] = CIEC_BOOL(dds_dynamic_array[i]);
    ciecStruct->var_dynamic_array = dynamic_array;
    ciecStruct->var_dynamic_array_count = CIEC_LINT(dds_dynamic_array_size);

    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

    return std::make_optional(std::move(ptr));
}
