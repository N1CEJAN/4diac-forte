/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen3
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen3_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen3_dtp_gen.cpp"
#endif

#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen3, g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen3);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3::scmElementNames[] = {g_nStringIduint8_array, g_nStringIduint8_array_element_counter, g_nStringIduint16_array, g_nStringIduint16_array_element_counter, g_nStringIduint32_array, g_nStringIduint32_array_element_counter, g_nStringIduint64_array, g_nStringIduint64_array_element_counter};

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3() :
    CIEC_STRUCT(),
    var_uint8_array_element_counter(0_ULINT),
    var_uint16_array_element_counter(0_ULINT),
    var_uint32_array_element_counter(0_ULINT),
    var_uint64_array_element_counter(0_ULINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3(const CIEC_ARRAY_COMMON<CIEC_USINT> &pauint8_array, const CIEC_ULINT &pauint8_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_UINT> &pauint16_array, const CIEC_ULINT &pauint16_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_UDINT> &pauint32_array, const CIEC_ULINT &pauint32_array_element_counter, const CIEC_ARRAY_COMMON<CIEC_ULINT> &pauint64_array, const CIEC_ULINT &pauint64_array_element_counter) :
    CIEC_STRUCT(),
    var_uint8_array(pauint8_array),
    var_uint8_array_element_counter(pauint8_array_element_counter),
    var_uint16_array(pauint16_array),
    var_uint16_array_element_counter(pauint16_array_element_counter),
    var_uint32_array(pauint32_array),
    var_uint32_array_element_counter(pauint32_array_element_counter),
    var_uint64_array(pauint64_array),
    var_uint64_array_element_counter(pauint64_array_element_counter) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen3;
}

void CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen3 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_uint8_array;
    case 1: return &var_uint8_array_element_counter;
    case 2: return &var_uint16_array;
    case 3: return &var_uint16_array_element_counter;
    case 4: return &var_uint32_array;
    case 5: return &var_uint32_array_element_counter;
    case 6: return &var_uint64_array;
    case 7: return &var_uint64_array_element_counter;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen3::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_uint8_array;
    case 1: return &var_uint8_array_element_counter;
    case 2: return &var_uint16_array;
    case 3: return &var_uint16_array_element_counter;
    case 4: return &var_uint32_array;
    case 5: return &var_uint32_array_element_counter;
    case 6: return &var_uint64_array;
    case 7: return &var_uint64_array_element_counter;
  }
  return nullptr;
}

