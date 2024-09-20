/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen3
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_usint.h"
#include "forte_ulint.h"
#include "forte_uint.h"
#include "forte_udint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen3)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3();

    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3(const CIEC_ARRAY_COMMON<CIEC_USINT> &pauint8_array, const CIEC_ULINT &pauint8_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_UINT> &pauint16_array, const CIEC_ULINT &pauint16_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_UDINT> &pauint32_array, const CIEC_ULINT &pauint32_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_ULINT> &pauint64_array, const CIEC_ULINT &pauint64_array_element_counter);

    CIEC_ARRAY_FIXED<CIEC_USINT, 0, 99> var_uint8_array;
    CIEC_ULINT var_uint8_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_UINT, 0, 99> var_uint16_array;
    CIEC_ULINT var_uint16_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_UDINT, 0, 99> var_uint32_array;
    CIEC_ULINT var_uint32_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_ULINT, 0, 99> var_uint64_array;
    CIEC_ULINT var_uint64_array_element_counter;

    size_t getStructSize() const override {
      return 8;
    }

    const CStringDictionary::TStringId* elementNames() const override {
      return scmElementNames;
    }

    CStringDictionary::TStringId getStructTypeNameID() const override;

    void setValue(const CIEC_ANY &paValue) override;

    CIEC_ANY *getMember(size_t) override;
    const CIEC_ANY *getMember(size_t) const override;

  private:
    static const CStringDictionary::TStringId scmElementNames[];

};


