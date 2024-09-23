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
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Ros2Arrayspezifikationen1/Ros2Arrayspezifikationen1.h"

#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2Arrayspezifikationen1PubSub_gen.cpp"
#endif

std::string conversion_tests::Ros2Arrayspezifikationen1PubSub::registerType(DomainParticipant* paParticipant) {

  this->m_type.register_type(paParticipant);
  return this->m_type.get_type_name();
}

bool conversion_tests::Ros2Arrayspezifikationen1PubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen1;
}

bool conversion_tests::Ros2Arrayspezifikationen1PubSub::publish(CIEC_STRUCT* data) {
  const auto ciec = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen1 *>(data);
  msg::Ros2Arrayspezifikationen1 dds = ciec2dds(*ciec);
  return this->write(&dds);
}

std::optional<std::unique_ptr<CIEC_STRUCT>> conversion_tests::Ros2Arrayspezifikationen1PubSub::receive() {
    conversion_tests::msg::Ros2Arrayspezifikationen1 dds;
    bool taken;
    this->take(&taken, &dds);
    if (!taken) return std::nullopt;

    auto ciec = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen1>(dds2ciec(dds));
    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciec);

    return std::make_optional(std::move(ptr));
}

conversion_tests::msg::Ros2Arrayspezifikationen1 conversion_tests::Ros2Arrayspezifikationen1PubSub::ciec2dds(
    const CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen1 &ciec) {
  msg::Ros2Arrayspezifikationen1 dds;

  // static_array
  msg::int8__2 static_array = {};
  for (size_t i = 0; i < 2; i++)
    static_array[i] = static_cast<int8_t>(ciec.var_static_array[i]);
  dds.static_array(static_array);

  // dynamic_array
  auto ciec_dynamic_array = ciec.var_dynamic_array;
  auto ciec_dynamic_array_size = static_cast<uint64_t>(ciec.var_dynamic_array_element_counter);
  auto dynamic_array = std::vector<int8_t>(ciec_dynamic_array_size);
  for (size_t i = 0; i < ciec_dynamic_array_size; i++) {
    dynamic_array[i] = static_cast<int8_t>(ciec.var_dynamic_array[i]);
  }
  dds.dynamic_array(dynamic_array);


  // bound_dynamic_array
  auto ciec_bound_dynamic_array = ciec.var_bound_dynamic_array;
  auto ciec_bound_dynamic_array_size = static_cast<uint64_t>(ciec.var_bound_dynamic_array_element_counter);
  auto bound_dynamic_array = std::vector<int8_t>(ciec_bound_dynamic_array_size);
  for (size_t i = 0; i < ciec_bound_dynamic_array_size; i++) {
    bound_dynamic_array[i] = static_cast<int8_t>(ciec.var_bound_dynamic_array[i]);
  }
  dds.bound_dynamic_array(bound_dynamic_array);

  return dds;
}

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen1 conversion_tests::Ros2Arrayspezifikationen1PubSub::dds2ciec(
    const msg::Ros2Arrayspezifikationen1 &dds) {
  CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen1 ciec;

  // static_array
  CIEC_ARRAY_FIXED<CIEC_SINT, 0, 1> static_array = {};
  auto old_static_array = dds.static_array();
  auto static_array_size = old_static_array.size();
  for (size_t i = 0; i < static_array_size; i++)
      static_array[i] = CIEC_SINT(old_static_array[i]);
  ciec.var_static_array = static_array;

  // dynamic_array
  auto dds_dynamic_array = dds.dynamic_array();
  auto dds_dynamic_array_size = dds_dynamic_array.size();
  auto ciec_dynamic_array = CIEC_ARRAY_FIXED<CIEC_SINT, 0, 2>();
  int8_t counter = 0;
  for (int8_t element : dds_dynamic_array) {
    ciec_dynamic_array[counter] = CIEC_SINT(element);
    counter++;
    if (counter > 2) {
      break;
    }
  }
  ciec.var_dynamic_array = ciec_dynamic_array;
  ciec.var_dynamic_array_element_counter = CIEC_ULINT(dds_dynamic_array_size);

  // bound_dynamic_array
  auto dds_bound_dynamic_array = dds.bound_dynamic_array();
  auto dds_bound_dynamic_array_size = dds_bound_dynamic_array.size();
  auto ciec_bound_dynamic_array = CIEC_ARRAY_FIXED<CIEC_SINT, 0, 1>();
  counter = 0;
  for (int8_t element : dds_bound_dynamic_array) {
    ciec_bound_dynamic_array[counter] = CIEC_SINT(element);
    counter++;
    if (counter > 1) {
      break;
    }
  }
  ciec.var_bound_dynamic_array = ciec_bound_dynamic_array;
  ciec.var_bound_dynamic_array_element_counter = CIEC_ULINT(dds_bound_dynamic_array_size);

  return ciec;
}

