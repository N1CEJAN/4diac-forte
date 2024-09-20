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
#include <conversion_tests/msg/ROS2_conversiontests_msg_Ros2Arrayspezifikationen_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Ros2ArrayspezifikationenPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2ArrayspezifikationenPubSub_gen.cpp"
#endif
#include "forte_struct.h"
#include "types/conversion_tests/msg/Ros2Arrayspezifikationen/Ros2Arrayspezifikationen.h"

std::string conversion_tests::Ros2ArrayspezifikationenPubSub::registerType(DomainParticipant *paParticipant) {
    this->m_type.register_type(paParticipant);
    return this->m_type.get_type_name();
}

bool conversion_tests::Ros2ArrayspezifikationenPubSub::validateType(const CStringDictionary::TStringId typeId) {
    return typeId == g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen;
}

bool conversion_tests::Ros2ArrayspezifikationenPubSub::publish(CIEC_STRUCT *data) {
    const auto casted = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen *>(data);
    msg::Ros2Arrayspezifikationen ros2arrayspezifikationen;

    // static_array
    DEVLOG_DEBUG("[DDS PubSub publish] static_array\n");
    msg::boolean__2 static_array = {};
    for (size_t i = 0; i < 2; i++)
        static_array[i] = casted->var_static_array[i];
    ros2arrayspezifikationen.static_array(static_array);

    // dynamic_array
    DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 0\n");
    std::vector<bool> dynamic_array = {};
    DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 1\n");
    auto dynamic_array_size = casted->var_dynamic_array.size();
    DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 2\n");
    for (size_t i = 0; i < dynamic_array_size; i++) {
        DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 3\n");
        auto x = casted->var_dynamic_array[i];
        DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 4\n");
        dynamic_array.push_back(x);
    }
    DEVLOG_DEBUG("[DDS PubSub publish] dynamic_array 5\n");
    ros2arrayspezifikationen.dynamic_array(dynamic_array);

    // bound_dynamic_array
    DEVLOG_DEBUG("[DDS PubSub publish] bound_dynamic_array 0\n");
    std::vector<eprosima::fastrtps::fixed_string<2> > bound_dynamic_array = {};
    DEVLOG_DEBUG("[DDS PubSub publish] bound_dynamic_array 1\n");
    auto bound_dynamic_array_size = casted->var_bound_dynamic_array.size();
    DEVLOG_DEBUG("[DDS PubSub publish] bound_dynamic_array 2\n");
    for (size_t i = 0; i < bound_dynamic_array_size; i++) {
        DEVLOG_DEBUG("[DDS PubSub publish] bound_dynamic_array 3\n");
        auto string = static_cast<std::string>(casted->var_bound_dynamic_array[i]);
        DEVLOG_DEBUG("[DDS PubSub publish] bound_dynamic_array 4\n");
        auto fixed_string = eprosima::fastrtps::fixed_string<2>(string);;
        DEVLOG_DEBUG("[DDS PubSub publish] bound_dynamic_array 5\n");
        bound_dynamic_array.push_back(fixed_string);
    }
    DEVLOG_DEBUG("[DDS PubSub publish] bound_dynamic_array 6\n");
    ros2arrayspezifikationen.bound_dynamic_array(bound_dynamic_array);

    return this->write(&ros2arrayspezifikationen);
}

std::optional<std::unique_ptr<CIEC_STRUCT> > conversion_tests::Ros2ArrayspezifikationenPubSub::receive() {
    msg::Ros2Arrayspezifikationen ros2arrayspezifikationen;
    bool taken;
    this->take(&taken, &ros2arrayspezifikationen);
    if (!taken) return std::nullopt;

    auto ciecStruct = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen>();
    // static_array
    CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 1> static_array = {};
    auto old_static_array = ros2arrayspezifikationen.static_array();
    auto static_array_size = old_static_array.size();
    for (size_t i = 0; i < static_array_size; i++)
        static_array[i] = CIEC_BOOL(old_static_array[i]);
    ciecStruct->var_static_array = static_array;

    // dynamic_array
    DEVLOG_DEBUG("[DDS PubSub subscribe] dynamic_array 0\n");
    auto dds_dynamic_array = ros2arrayspezifikationen.dynamic_array();
    DEVLOG_DEBUG("[DDS PubSub subscribe] dynamic_array 1\n");
    auto dds_dynamic_array_size = dds_dynamic_array.size();
    DEVLOG_DEBUG("[DDS PubSub subscribe] dynamic_array 2\n");
    CIEC_ARRAY_VARIABLE<CIEC_BOOL> ciec_dynamic_array = {};
    DEVLOG_DEBUG("[DDS PubSub subscribe] dynamic_array 3\n");
    for (size_t i = 0; i < dds_dynamic_array_size; i++) {
        DEVLOG_DEBUG("[DDS PubSub subscribe] dynamic_array 4\n");
        ciec_dynamic_array[i] = CIEC_BOOL(dds_dynamic_array[i]);
    }
    DEVLOG_DEBUG("[DDS PubSub subscribe] dynamic_array 5\n");
    ciecStruct->var_dynamic_array = ciec_dynamic_array;

    // bound_dynamic_array
    DEVLOG_DEBUG("[DDS PubSub subscribe] bound_dynamic_array 0\n");
    auto dds_bound_dynamic_array = ros2arrayspezifikationen.bound_dynamic_array();
    DEVLOG_DEBUG("[DDS PubSub subscribe] bound_dynamic_array 1\n");
    auto dds_bound_dynamic_array_size = dds_dynamic_array.size();
    DEVLOG_DEBUG("[DDS PubSub subscribe] bound_dynamic_array 2\n");
    auto ciec_bound_dynamic_array = CIEC_ARRAY_VARIABLE<CIEC_STRING>(0, dds_bound_dynamic_array.size());
    DEVLOG_DEBUG("[DDS PubSub subscribe] bound_dynamic_array 3\n");
    for (size_t i = 0; i < dds_bound_dynamic_array_size; i++) {
        DEVLOG_DEBUG("[DDS PubSub subscribe] bound_dynamic_array 4\n");
        ciec_bound_dynamic_array[i] = CIEC_STRING(dds_bound_dynamic_array[i].to_string());
    }
    DEVLOG_DEBUG("[DDS PubSub subscribe] bound_dynamic_array 5\n");
    ciecStruct->var_bound_dynamic_array = ciec_bound_dynamic_array;

    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

    return std::make_optional(std::move(ptr));
}
