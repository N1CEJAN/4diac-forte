/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen4
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen4_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen4_dtp_gen.cpp"
#endif

#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen4, g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen4);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4::scmElementNames[] = {g_nStringIdint8_array, g_nStringIdint8_array_element_counter, g_nStringIdint16_array, g_nStringIdint16_array_element_counter, g_nStringIdint32_array, g_nStringIdint32_array_element_counter, g_nStringIdint64_array, g_nStringIdint64_array_element_counter};

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4() :
    CIEC_STRUCT(),
    var_int8_array_element_counter(0_ULINT),
    var_int16_array_element_counter(0_ULINT),
    var_int32_array_element_counter(0_ULINT),
    var_int64_array_element_counter(0_ULINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4(const CIEC_ARRAY_COMMON<CIEC_SINT> &paint8_array, const CIEC_ULINT &paint8_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_INT> &paint16_array, const CIEC_ULINT &paint16_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_DINT> &paint32_array, const CIEC_ULINT &paint32_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_LINT> &paint64_array, const CIEC_ULINT &paint64_array_element_counter) :
    CIEC_STRUCT(),
    var_int8_array(paint8_array),
    var_int8_array_element_counter(paint8_array_element_counter),
    var_int16_array(paint16_array),
    var_int16_array_element_counter(paint16_array_element_counter),
    var_int32_array(paint32_array),
    var_int32_array_element_counter(paint32_array_element_counter),
    var_int64_array(paint64_array),
    var_int64_array_element_counter(paint64_array_element_counter) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen4;
}

void CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen4 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_int8_array;
    case 1: return &var_int8_array_element_counter;
    case 2: return &var_int16_array;
    case 3: return &var_int16_array_element_counter;
    case 4: return &var_int32_array;
    case 5: return &var_int32_array_element_counter;
    case 6: return &var_int64_array;
    case 7: return &var_int64_array_element_counter;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen4::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_int8_array;
    case 1: return &var_int8_array_element_counter;
    case 2: return &var_int16_array;
    case 3: return &var_int16_array_element_counter;
    case 4: return &var_int32_array;
    case 5: return &var_int32_array_element_counter;
    case 6: return &var_int64_array;
    case 7: return &var_int64_array_element_counter;
  }
  return nullptr;
}

