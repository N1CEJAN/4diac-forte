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

#ifndef _COM_DDS_TYPES_TURTLESIM_SRV_SPAWN_RESPONSE_PUBSUB_H_
#define _COM_DDS_TYPES_TURTLESIM_SRV_SPAWN_RESPONSE_PUBSUB_H_

#include "ddspubsub.h"

#include "SpawnPubSubTypes.h"
using namespace turtlesim::srv;

namespace turtlesim {

class SpawnResponsePubSub : public CDDSPubSub {
public:
  SpawnResponsePubSub(std::string topicName, EPubSubRole role)
      : CDDSPubSub(topicName, role), type(new Spawn_ResponsePubSubType()) {}

  std::string registerType(DomainParticipant *participant) override;
  bool validateType(const CStringDictionary::TStringId typeId) override;
  bool publish(CIEC_STRUCT *data) override;
  std::optional<std::unique_ptr<CIEC_STRUCT>> receive() override;

private:
  TypeSupport type;
};

} // namespace turtlesim

#endif