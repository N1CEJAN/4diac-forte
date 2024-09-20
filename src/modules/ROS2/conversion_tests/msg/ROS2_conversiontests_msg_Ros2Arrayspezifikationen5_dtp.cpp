/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen5
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen5_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen5_dtp_gen.cpp"
#endif

#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen5, g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen5);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5::scmElementNames[] = {g_nStringIdchar_array, g_nStringIdchar_array_element_counter, g_nStringIdstring_array, g_nStringIdstring_array_element_counter, g_nStringIdwstring_array, g_nStringIdwstring_array_element_counter, g_nStringIdbound_string_array, g_nStringIdbound_string_array_element_counter, g_nStringIdbound_wstring_array, g_nStringIdbound_wstring_array_element_counter};

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5() :
    CIEC_STRUCT(),
    var_char_array_element_counter(0_ULINT),
    var_string_array_element_counter(0_ULINT),
    var_wstring_array_element_counter(0_ULINT),
    var_bound_string_array_element_counter(0_ULINT),
    var_bound_wstring_array_element_counter(0_ULINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5(const CIEC_ARRAY_COMMON<CIEC_CHAR> &pachar_array, const CIEC_ULINT &pachar_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_STRING> &pastring_array, const CIEC_ULINT &pastring_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_WSTRING> &pawstring_array, const CIEC_ULINT &pawstring_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_STRING> &pabound_string_array, const CIEC_ULINT &pabound_string_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_WSTRING> &pabound_wstring_array, const CIEC_ULINT &pabound_wstring_array_element_counter) :
    CIEC_STRUCT(),
    var_char_array(pachar_array),
    var_char_array_element_counter(pachar_array_element_counter),
    var_string_array(pastring_array),
    var_string_array_element_counter(pastring_array_element_counter),
    var_wstring_array(pawstring_array),
    var_wstring_array_element_counter(pawstring_array_element_counter),
    var_bound_string_array(pabound_string_array),
    var_bound_string_array_element_counter(pabound_string_array_element_counter),
    var_bound_wstring_array(pabound_wstring_array),
    var_bound_wstring_array_element_counter(pabound_wstring_array_element_counter) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen5;
}

void CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen5 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_char_array;
    case 1: return &var_char_array_element_counter;
    case 2: return &var_string_array;
    case 3: return &var_string_array_element_counter;
    case 4: return &var_wstring_array;
    case 5: return &var_wstring_array_element_counter;
    case 6: return &var_bound_string_array;
    case 7: return &var_bound_string_array_element_counter;
    case 8: return &var_bound_wstring_array;
    case 9: return &var_bound_wstring_array_element_counter;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen5::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_char_array;
    case 1: return &var_char_array_element_counter;
    case 2: return &var_string_array;
    case 3: return &var_string_array_element_counter;
    case 4: return &var_wstring_array;
    case 5: return &var_wstring_array_element_counter;
    case 6: return &var_bound_string_array;
    case 7: return &var_bound_string_array_element_counter;
    case 8: return &var_bound_wstring_array;
    case 9: return &var_bound_wstring_array_element_counter;
  }
  return nullptr;
}

