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
#include <conversion_tests/msg/ROS2_conversiontests_msg_Ros2Arrayspezifikationen1_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Ros2Arrayspezifikationen1PubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2Arrayspezifikationen1PubSub_gen.cpp"
#endif
#include "forte_struct.h"
#include "types/conversion_tests/msg/Ros2Arrayspezifikationen1/Ros2Arrayspezifikationen1.h"

std::string conversion_tests::Ros2Arrayspezifikationen1PubSub::registerType(DomainParticipant *paParticipant) {
    this->m_type.register_type(paParticipant);
    return this->m_type.get_type_name();
}

bool conversion_tests::Ros2Arrayspezifikationen1PubSub::validateType(const CStringDictionary::TStringId typeId) {
    return typeId == g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen1;
}

bool conversion_tests::Ros2Arrayspezifikationen1PubSub::publish(CIEC_STRUCT *data) {
    const auto casted = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen1 *>(data);
    msg::Ros2Arrayspezifikationen1 ros2arrayspezifikationen;

    // static_array
    msg::int8__2 static_array = {};
    for (intmax_t i = 0; i < casted->var_static_array.size(); i++)
        static_array[i] = static_cast<int8_t>(casted->var_static_array[i]);
    ros2arrayspezifikationen.static_array(static_array);

    // dynamic_array
    const auto dynamic_array_count = static_cast<uint64_t>(casted->var_dynamic_array_element_counter);
    std::vector<int8_t> dynamic_array = {};
    for (intmax_t i = 0; i < dynamic_array_count; i++) {
        dynamic_array.push_back(static_cast<int8_t>(casted->var_dynamic_array[i]));
    }
    ros2arrayspezifikationen.dynamic_array(dynamic_array);

    // bound_dynamic_array
    const auto bound_dynamic_array_count = static_cast<uint64_t>(casted->var_bound_dynamic_array_element_counter);
    std::vector<int8_t> bound_dynamic_array = {};
    for (intmax_t i = 0; i < bound_dynamic_array_count; i++) {
        dynamic_array.push_back(static_cast<int8_t>(casted->var_bound_dynamic_array[i]));
    }
    ros2arrayspezifikationen.bound_dynamic_array(bound_dynamic_array);

    return this->write(&ros2arrayspezifikationen);
}

std::optional<std::unique_ptr<CIEC_STRUCT> > conversion_tests::Ros2Arrayspezifikationen1PubSub::receive() {
    msg::Ros2Arrayspezifikationen1 ros2arrayspezifikationen;
    bool taken;
    this->take(&taken, &ros2arrayspezifikationen);
    if (!taken) return std::nullopt;

    auto ciecStruct = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen1>();
    // static_array
    CIEC_ARRAY_FIXED<CIEC_SINT, 0, 1> static_array = {};
    auto dds_static_array = ros2arrayspezifikationen.static_array();
    auto dds_static_array_size = dds_static_array.size();
    for (intmax_t i = 0; i < dds_static_array_size; i++) {
        static_array[i] = CIEC_SINT(dds_static_array[i]);
    }
    ciecStruct->var_static_array = static_array;

    // dynamic_array
    CIEC_ARRAY_FIXED<CIEC_SINT, 0, 99> dynamic_array = {};
    auto dds_dynamic_array = ros2arrayspezifikationen.dynamic_array();
    auto dds_dynamic_array_size = dds_dynamic_array.size();
    for (intmax_t i = 0; i < dds_dynamic_array_size; i++)
        dynamic_array[i] = CIEC_SINT(dds_dynamic_array[i]);
    ciecStruct->var_dynamic_array = dynamic_array;
    ciecStruct->var_dynamic_array_element_counter = CIEC_ULINT(dds_dynamic_array_size);

    // bound_dynamic_array
    CIEC_ARRAY_FIXED<CIEC_SINT, 0, 99> bound_dynamic_array = {};
    auto dds_bound_dynamic_array = ros2arrayspezifikationen.bound_dynamic_array();
    auto dds_bound_dynamic_array_size = dds_bound_dynamic_array.size();
    for (intmax_t i = 0; i < dds_dynamic_array_size; i++)
        bound_dynamic_array[i] = CIEC_SINT(dds_dynamic_array[i]);
    ciecStruct->var_bound_dynamic_array = bound_dynamic_array;
    ciecStruct->var_bound_dynamic_array_element_counter = CIEC_ULINT(dds_bound_dynamic_array_size);

    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

    return std::make_optional(std::move(ptr));
}
