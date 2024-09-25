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
#include <conversion_tests/msg/ROS2_conversiontests_msg_Ros2Konstanten_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Ros2KonstantenPubSub.h"
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Ros2Konstanten/Ros2Konstanten.h"

#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2KonstantenPubSub_gen.cpp"
#endif

std::string conversion_tests::Ros2KonstantenPubSub::registerType(DomainParticipant* paParticipant) {

  this->m_type.register_type(paParticipant);
  return this->m_type.get_type_name();
}

bool conversion_tests::Ros2KonstantenPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_conversiontests_msg_Ros2Konstanten;
}

bool conversion_tests::Ros2KonstantenPubSub::publish(CIEC_STRUCT* data) {
  const auto ciec = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2Konstanten *>(data);
  msg::Ros2Konstanten dds = ciec2dds(*ciec);
  return this->write(&dds);
}

std::optional<std::unique_ptr<CIEC_STRUCT>> conversion_tests::Ros2KonstantenPubSub::receive() {
    conversion_tests::msg::Ros2Konstanten dds;
    bool taken;
    this->take(&taken, &dds);
    if (!taken) return std::nullopt;

    auto ciec = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2Konstanten>(dds2ciec(dds));
    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciec);

    return std::make_optional(std::move(ptr));
}

conversion_tests::msg::Ros2Konstanten conversion_tests::Ros2KonstantenPubSub::ciec2dds(
    const CIEC_ROS2_conversiontests_msg_Ros2Konstanten &ciec) {
  msg::Ros2Konstanten dds;
  return dds;
}

CIEC_ROS2_conversiontests_msg_Ros2Konstanten conversion_tests::Ros2KonstantenPubSub::dds2ciec(
    const msg::Ros2Konstanten &dds) {
  CIEC_ROS2_conversiontests_msg_Ros2Konstanten ciec;
  ciec.var_CONSTANT = CIEC_STRING(msg::Ros2Konstanten_Constants::CONSTANT);
  return ciec;
}

