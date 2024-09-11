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

#ifndef _COM_DDS_TYPES_CONVERSION_TESTS_MSG_ROS2DYNAMISCHESARRAY2_PUBLISHER_H_
#define _COM_DDS_TYPES_CONVERSION_TESTS_MSG_ROS2DYNAMISCHESARRAY2_PUBLISHER_H_

#include "ddspubsub.h"
#include "Ros2DynamischesArray2PubSubTypes.h"

#include <memory>


namespace conversion_tests {

class Ros2DynamischesArray2PubSub : public CDDSPubSub {
  public:
    Ros2DynamischesArray2PubSub(std::string topicName, EPubSubRole role) :
      CDDSPubSub(topicName, role),
      m_type(new msg::Ros2DynamischesArray2PubSubType()) {}

    std::string registerType(DomainParticipant* paParticipant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    std::optional<std::unique_ptr<CIEC_STRUCT>> receive() override;

  private:
    TypeSupport m_type;
};

}

#endif
