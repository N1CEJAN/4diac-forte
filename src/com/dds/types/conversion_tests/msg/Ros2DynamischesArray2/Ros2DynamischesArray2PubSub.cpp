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
#include <conversion_tests/msg/ROS2_conversiontests_msg_Ros2DynamischesArray2_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Ros2DynamischesArray2PubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2DynamischesArray2PubSub_gen.cpp"
#endif
#include <boost/format.hpp>

#include "forte_struct.h"
#include "types/conversion_tests/msg/Ros2DynamischesArray2/Ros2DynamischesArray2.h"

std::string conversion_tests::Ros2DynamischesArray2PubSub::registerType(DomainParticipant *paParticipant) {
    this->m_type.register_type(paParticipant);
    return this->m_type.get_type_name();
}

bool conversion_tests::Ros2DynamischesArray2PubSub::validateType(const CStringDictionary::TStringId typeId) {
    return typeId == g_nStringIdROS2_conversiontests_msg_Ros2DynamischesArray2;
}

bool conversion_tests::Ros2DynamischesArray2PubSub::publish(CIEC_STRUCT *data) {
    const auto casted = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray2 *>(data);
    msg::Ros2DynamischesArray2 ros2arrayspezifikationen;

    // dynamic_array
     auto ciec_dynamic_array = casted->var_dynamic_array;
//    auto ciec_dynamic_array = CIEC_ARRAY_VARIABLE({CIEC_SINT(1),CIEC_SINT(2),CIEC_SINT(3)});
    auto ciec_dynamic_array_size = static_cast<int8_t>(casted->var_dynamic_array_count);
    auto dynamic_array = std::vector<int8_t>(ciec_dynamic_array_size);
    for (size_t i = 0; i < ciec_dynamic_array_size; i++) {
        dynamic_array[i] = static_cast<int8_t>(casted->var_dynamic_array[i]);
    }
    ros2arrayspezifikationen.dynamic_array(dynamic_array);

    return this->write(&ros2arrayspezifikationen);
}

std::optional<std::unique_ptr<CIEC_STRUCT> > conversion_tests::Ros2DynamischesArray2PubSub::receive() {
    msg::Ros2DynamischesArray2 ros2arrayspezifikationen;
    bool taken;
    this->take(&taken, &ros2arrayspezifikationen);
    if (!taken) return std::nullopt;

    auto ciecStruct = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray2>();

    // dynamic_array
    auto dds_dynamic_array = ros2arrayspezifikationen.dynamic_array();
    auto dds_dynamic_array_size = dds_dynamic_array.size();
    auto dynamic_array = CIEC_ARRAY_FIXED<CIEC_SINT, 0, 3>();

    int8_t counter = 0;
    for (int8_t element : dds_dynamic_array) {
        dynamic_array[counter] = CIEC_SINT(element);
        counter++;
        if (counter > 3) {
            break;
        }
    }
    ciecStruct->var_dynamic_array = dynamic_array;
    ciecStruct->var_dynamic_array_count = CIEC_SINT(dds_dynamic_array_size);

    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);
    return std::make_optional(std::move(ptr));
}
