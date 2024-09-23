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

#ifndef _COM_DDS_TYPES_CONVERSION_TESTS_MSG_IEC61499PRIMITIVEDATENTYPEN_PUBLISHER_H_
#define _COM_DDS_TYPES_CONVERSION_TESTS_MSG_IEC61499PRIMITIVEDATENTYPEN_PUBLISHER_H_

#include "ddspubsub.h"
#include "Iec61499PrimitiveDatentypenPubSubTypes.h"

#include <memory>

#include "conversion_tests/msg/Iec61499PrimitiveDatentypen_dtp.h"


namespace conversion_tests {

class Iec61499PrimitiveDatentypenPubSub : public CDDSPubSub {
  public:
    Iec61499PrimitiveDatentypenPubSub(std::string topicName, EPubSubRole role) :
      CDDSPubSub(topicName, role),
      m_type(new conversion_tests::msg::Iec61499PrimitiveDatentypenPubSubType()) {}

    std::string registerType(DomainParticipant* paParticipant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    std::optional<std::unique_ptr<CIEC_STRUCT>> receive() override;

    static msg::Iec61499PrimitiveDatentypen ciec2dds(const CIEC_Iec61499PrimitiveDatentypen &ciec);
    static CIEC_Iec61499PrimitiveDatentypen dds2ciec(const msg::Iec61499PrimitiveDatentypen &dds);

  private:
    TypeSupport m_type;
};

}

#endif
