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
#include <conversion_tests/msg/ROS2_conversiontests_msg_Ros2Arrayspezifikationen6_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Ros2Arrayspezifikationen6PubSub.h"
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Ros2Arrayspezifikationen6/Ros2Arrayspezifikationen6.h"
#include "types/conversion_tests/msg/Ros2PrimitiveDatentypen/Ros2PrimitiveDatentypen.h"
#include "types/conversion_tests/msg/Ros2PrimitiveDatentypen/Ros2PrimitiveDatentypenPubSub.h"
#include "types/conversion_tests/msg/Ros2PrimitiveDatentypen/Ros2PrimitiveDatentypenPubSubTypes.h"

#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2Arrayspezifikationen6PubSub_gen.cpp"
#endif

std::string conversion_tests::Ros2Arrayspezifikationen6PubSub::registerType(DomainParticipant* paParticipant) {

  this->m_type.register_type(paParticipant);
  return this->m_type.get_type_name();
}

bool conversion_tests::Ros2Arrayspezifikationen6PubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen6;
}

bool conversion_tests::Ros2Arrayspezifikationen6PubSub::publish(CIEC_STRUCT* data) {
  const auto ciec = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6 *>(data);

  ciec->var_absolute_reference[0].var_a_bool = CIEC_BOOL(true);
  ciec->var_relative_reference[0].var_a_bool = CIEC_BOOL(true);
  char sendDebug1[1024] = {};
  ciec->var_absolute_reference.toString(sendDebug1, sizeof(sendDebug1));
  DEVLOG_DEBUG("!!!!!!!programmatische anpassung von absolute_reference: %s \n", sendDebug1);
  sendDebug1[1024] = {};
  ciec->var_relative_reference.toString(sendDebug1, sizeof(sendDebug1));
  DEVLOG_DEBUG("!!!!!!!programmatische anpassung von relative_reference: %s \n", sendDebug1);

  msg::Ros2Arrayspezifikationen6 dds = ciec2dds(*ciec);
  return this->write(&dds);
}

std::optional<std::unique_ptr<CIEC_STRUCT>> conversion_tests::Ros2Arrayspezifikationen6PubSub::receive() {
    conversion_tests::msg::Ros2Arrayspezifikationen6 dds;
    bool taken;
    this->take(&taken, &dds);
    if (!taken) return std::nullopt;

    auto ciec = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6>(dds2ciec(dds));
    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciec);

    return std::make_optional(std::move(ptr));
}

conversion_tests::msg::Ros2Arrayspezifikationen6 conversion_tests::Ros2Arrayspezifikationen6PubSub::ciec2dds(
    const CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6 &ciec) {
  msg::Ros2Arrayspezifikationen6 dds;

  // absolute_references
  auto ciec_absolute_references = ciec.var_absolute_reference;
  auto ciec_absolute_references_size = static_cast<uint64_t>(ciec.var_absolute_reference_element_counter);
  std::vector<msg::Ros2PrimitiveDatentypen> absolute_references;
  for (size_t i = 0; i < ciec_absolute_references_size; ++i) {
    absolute_references.push_back(Ros2PrimitiveDatentypenPubSub::ciec2dds(ciec.var_absolute_reference[i]));
  }
  dds.absolute_reference(absolute_references);

  // relative_references
  auto ciec_relative_references = ciec.var_relative_reference;
  auto ciec_relative_references_size = static_cast<uint64_t>(ciec.var_relative_reference_element_counter);
  std::vector<msg::Ros2PrimitiveDatentypen> relative_references;
  for (size_t i = 0; i < ciec_relative_references_size; ++i) {
    relative_references.push_back(Ros2PrimitiveDatentypenPubSub::ciec2dds(ciec.var_relative_reference[i]));
  }
  dds.relative_reference(relative_references);

  return dds;
}

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6 conversion_tests::Ros2Arrayspezifikationen6PubSub::dds2ciec(
    const msg::Ros2Arrayspezifikationen6 &dds) {
  CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6 ciec;

  // absolute_reference
  auto dds_absolute_reference = dds.absolute_reference();
  auto dds_absolute_reference_size = dds_absolute_reference.size();
  auto ciec_absolute_reference = CIEC_ARRAY_FIXED<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen, 0, 2>();
  int8_t counter = 0;
  for (msg::Ros2PrimitiveDatentypen element : dds_absolute_reference) {
    ciec_absolute_reference[counter] = Ros2PrimitiveDatentypenPubSub::dds2ciec(element);
    counter++;
    if (counter > 2) {
      break;
    }
  }
  ciec.var_absolute_reference = ciec_absolute_reference;
  ciec.var_absolute_reference_element_counter = CIEC_ULINT(dds_absolute_reference_size);
  char sendDebug1[1024] = {};
  ciec.var_absolute_reference.toString(sendDebug1, sizeof(sendDebug1));
  DEVLOG_DEBUG("var_absolute_reference: %s \n", sendDebug1);
  DEVLOG_DEBUG("var_relative_reference_element_counter: %ld \n", static_cast<uint64_t>(ciec.var_absolute_reference_element_counter));

  auto dds_relative_reference = dds.relative_reference();
  auto dds_relative_reference_size = dds_relative_reference.size();
  auto ciec_relative_reference = CIEC_ARRAY_FIXED<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen, 0, 2>();
  counter = 0;
  for (msg::Ros2PrimitiveDatentypen element : dds_relative_reference) {
    ciec_relative_reference[counter] = Ros2PrimitiveDatentypenPubSub::dds2ciec(element);
    counter++;
    if (counter > 2) {
      break;
    }
  }
  ciec.var_relative_reference = ciec_relative_reference;
  ciec.var_relative_reference_element_counter = CIEC_ULINT(dds_relative_reference_size);
  sendDebug1[1024] = {};
  ciec.var_relative_reference.toString(sendDebug1, sizeof(sendDebug1));
  DEVLOG_DEBUG("var_relative_reference: %s \n", sendDebug1);
  DEVLOG_DEBUG("var_relative_reference_element_counter: %ld \n", static_cast<uint64_t>(ciec.var_relative_reference_element_counter));

  return ciec;
}

