/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen2
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_bool.h"
#include "forte_ulint.h"
#include "forte_byte.h"
#include "forte_real.h"
#include "forte_lreal.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen2)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2();

    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2(const CIEC_ARRAY_COMMON<CIEC_BOOL> &pabool_array, const CIEC_ULINT &pabool_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_BYTE> &pabyte_array, const CIEC_ULINT &pabyte_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_REAL> &pafloat32_array, const CIEC_ULINT &pafloat32_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_LREAL> &pafloat64_array, const CIEC_ULINT &pafloat64_array_element_counter);

    CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 99> var_bool_array;
    CIEC_ULINT var_bool_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_BYTE, 0, 99> var_byte_array;
    CIEC_ULINT var_byte_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_REAL, 0, 99> var_float32_array;
    CIEC_ULINT var_float32_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_LREAL, 0, 99> var_float64_array;
    CIEC_ULINT var_float64_array_element_counter;

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


