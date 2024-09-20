/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Standardwertliterale6
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_real.h"
#include "forte_ulint.h"
#include "forte_char.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Standardwertliterale6)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6();

    CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6(const CIEC_ARRAY_COMMON<CIEC_REAL> &pafloat_dec, const CIEC_ULINT &pafloat_dec_element_counter, const CIEC_ARRAY_COMMON<CIEC_CHAR> &pachar_hex, const CIEC_ULINT &pachar_hex_element_counter);

    CIEC_ARRAY_FIXED<CIEC_REAL, 0, 2> var_float_dec;
    CIEC_ULINT var_float_dec_element_counter;
    CIEC_ARRAY_FIXED<CIEC_CHAR, 0, 2> var_char_hex;
    CIEC_ULINT var_char_hex_element_counter;

    size_t getStructSize() const override {
      return 4;
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


