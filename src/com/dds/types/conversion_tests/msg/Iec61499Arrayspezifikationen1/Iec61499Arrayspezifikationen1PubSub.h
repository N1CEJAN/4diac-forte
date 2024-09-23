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

#ifndef _COM_DDS_TYPES_CONVERSION_TESTS_MSG_IEC61499ARRAYSPEZIFIKATIONEN_PUBLISHER_H_
#define _COM_DDS_TYPES_CONVERSION_TESTS_MSG_IEC61499ARRAYSPEZIFIKATIONEN_PUBLISHER_H_

#include "ddspubsub.h"
#include "Iec61499Arrayspezifikationen1PubSubTypes.h"

#include <memory>

#include "conversion_tests/msg/Iec61499Arrayspezifikationen1_dtp.h"


namespace conversion_tests {

class Iec61499Arrayspezifikationen1PubSub : public CDDSPubSub {
  public:
    Iec61499Arrayspezifikationen1PubSub(std::string topicName, EPubSubRole role) :
      CDDSPubSub(topicName, role),
      m_type(new conversion_tests::msg::Iec61499Arrayspezifikationen1PubSubType()) {}

    std::string registerType(DomainParticipant* paParticipant) override;
    bool validateType(const CStringDictionary::TStringId typeId) override;
    bool publish(CIEC_STRUCT* data) override;
    std::optional<std::unique_ptr<CIEC_STRUCT>> receive() override;

    static msg::Iec61499Arrayspezifikationen1 ciec2dds(const CIEC_Iec61499Arrayspezifikationen1 &ciec);
    static CIEC_Iec61499Arrayspezifikationen1 dds2ciec(const msg::Iec61499Arrayspezifikationen1 &dds);

  private:
    TypeSupport m_type;
};

}

#endif
