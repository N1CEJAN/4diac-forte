/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Standardwertliterale4
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_sint.h"
#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Standardwertliterale4)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4();

    CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4(const CIEC_ARRAY_COMMON<CIEC_SINT> &paint_hex0, const CIEC_ULINT &paint_hex0_element_counter, const CIEC_ARRAY_COMMON<CIEC_SINT> &paint_hex1, const CIEC_ULINT &paint_hex1_element_counter);

    CIEC_ARRAY_FIXED<CIEC_SINT, 0, 2> var_int_hex0;
    CIEC_ULINT var_int_hex0_element_counter;
    CIEC_ARRAY_FIXED<CIEC_SINT, 0, 2> var_int_hex1;
    CIEC_ULINT var_int_hex1_element_counter;

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


