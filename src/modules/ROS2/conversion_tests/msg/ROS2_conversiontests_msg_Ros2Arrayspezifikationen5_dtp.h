/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen5
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_char.h"
#include "forte_ulint.h"
#include "forte_string.h"
#include "forte_wstring.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen5)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5();

    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5(const CIEC_ARRAY_COMMON<CIEC_CHAR> &pachar_array, const CIEC_ULINT &pachar_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_STRING> &pastring_array, const CIEC_ULINT &pastring_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_WSTRING> &pawstring_array, const CIEC_ULINT &pawstring_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_STRING> &pabound_string_array, const CIEC_ULINT &pabound_string_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_WSTRING> &pabound_wstring_array, const CIEC_ULINT &pabound_wstring_array_element_counter);

    CIEC_ARRAY_FIXED<CIEC_CHAR, 0, 99> var_char_array;
    CIEC_ULINT var_char_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_STRING, 0, 99> var_string_array;
    CIEC_ULINT var_string_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_WSTRING, 0, 99> var_wstring_array;
    CIEC_ULINT var_wstring_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_STRING, 0, 99> var_bound_string_array;
    CIEC_ULINT var_bound_string_array_element_counter;
    CIEC_ARRAY_FIXED<CIEC_WSTRING, 0, 99> var_bound_wstring_array;
    CIEC_ULINT var_bound_wstring_array_element_counter;

    size_t getStructSize() const override {
      return 10;
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


