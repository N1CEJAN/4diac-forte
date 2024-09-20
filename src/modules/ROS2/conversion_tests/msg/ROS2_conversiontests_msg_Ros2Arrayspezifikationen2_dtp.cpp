/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen2
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen2_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen2_dtp_gen.cpp"
#endif

#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen2, g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen2);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::scmElementNames[] = {g_nStringIdbool_array, g_nStringIdbool_array_element_counter, g_nStringIdbyte_array, g_nStringIdbyte_array_element_counter, g_nStringIdfloat32_array, g_nStringIdfloat32_array_element_counter, g_nStringIdfloat64_array, g_nStringIdfloat64_array_element_counter};

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2() :
    CIEC_STRUCT(),
    var_bool_array_element_counter(0_ULINT),
    var_byte_array_element_counter(0_ULINT),
    var_float32_array_element_counter(0_ULINT),
    var_float64_array_element_counter(0_ULINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2(const CIEC_ARRAY_COMMON<CIEC_BOOL> &pabool_array, const CIEC_ULINT &pabool_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_BYTE> &pabyte_array, const CIEC_ULINT &pabyte_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_REAL> &pafloat32_array, const CIEC_ULINT &pafloat32_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_LREAL> &pafloat64_array, const CIEC_ULINT &pafloat64_array_element_counter) :
    CIEC_STRUCT(),
    var_bool_array(pabool_array),
    var_bool_array_element_counter(pabool_array_element_counter),
    var_byte_array(pabyte_array),
    var_byte_array_element_counter(pabyte_array_element_counter),
    var_float32_array(pafloat32_array),
    var_float32_array_element_counter(pafloat32_array_element_counter),
    var_float64_array(pafloat64_array),
    var_float64_array_element_counter(pafloat64_array_element_counter) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen2;
}

void CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen2 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_bool_array;
    case 1: return &var_bool_array_element_counter;
    case 2: return &var_byte_array;
    case 3: return &var_byte_array_element_counter;
    case 4: return &var_float32_array;
    case 5: return &var_float32_array_element_counter;
    case 6: return &var_float64_array;
    case 7: return &var_float64_array_element_counter;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_bool_array;
    case 1: return &var_bool_array_element_counter;
    case 2: return &var_byte_array;
    case 3: return &var_byte_array_element_counter;
    case 4: return &var_float32_array;
    case 5: return &var_float32_array_element_counter;
    case 6: return &var_float64_array;
    case 7: return &var_float64_array_element_counter;
  }
  return nullptr;
}

