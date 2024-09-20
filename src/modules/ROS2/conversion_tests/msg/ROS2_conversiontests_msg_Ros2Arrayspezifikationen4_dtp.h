/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen4
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_sint.h"
#include "forte_ulint.h"
#include "forte_int.h"
#include "forte_dint.h"
#include "forte_lint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen4)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4();

    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4(const CIEC_ARRAY_COMMON<CIEC_SINT> &paint8_array, const CIEC_ULINT &paint8_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_INT> &paint16_array, const CIEC_ULINT &paint16_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_DINT> &paint32_array, const CIEC_ULINT &paint32_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_LINT> &paint64_array, const CIEC_ULINT &paint64_array_element_counter);

    CIEC_ARRAY_FIXED<CIEC_SINT, 0, 99> var_int8_array;
    CIEC_ULINT var_int8_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_INT, 0, 99> var_int16_array;
    CIEC_ULINT var_int16_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_DINT, 0, 99> var_int32_array;
    CIEC_ULINT var_int32_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_LINT, 0, 99> var_int64_array;
    CIEC_ULINT var_int64_array_element_counter;

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


