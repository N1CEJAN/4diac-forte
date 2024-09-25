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

#ifndef _COM_DDS_TYPES_CONVERSION_TESTS_MSG_ROS2KONSTANTEN_PUBLISHER_H_
#define _COM_DDS_TYPES_CONVERSION_TESTS_MSG_ROS2KONSTANTEN_PUBLISHER_H_

#include "ddspubsub.h"
#include "Ros2KonstantenPubSubTypes.h"

#include <memory>

#include "conversion_tests/msg/ROS2_conversiontests_msg_Ros2Konstanten_dtp.h"


namespace conversion_tests {

class Ros2KonstantenPubSub : public CDDSPubSub {
  public:
    Ros2KonstantenPubSub(std::string topicName, EPubSubRole role) :
      CDDSPubSub(topicName, role),
      m_type(new conversion_tests::msg::Ros2KonstantenPubSubType()) {}

    std::string registerType(DomainParticipant* paParticipant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    std::optional<std::unique_ptr<CIEC_STRUCT>> receive() override;

    static msg::Ros2Konstanten ciec2dds(const CIEC_ROS2_conversiontests_msg_Ros2Konstanten &ciec);
    static CIEC_ROS2_conversiontests_msg_Ros2Konstanten dds2ciec(const msg::Ros2Konstanten &dds);

  private:
    TypeSupport m_type;
};

}

#endif
