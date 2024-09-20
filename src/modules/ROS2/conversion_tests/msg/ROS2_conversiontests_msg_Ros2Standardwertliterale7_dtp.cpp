/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Standardwertliterale7
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Standardwertliterale7_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Standardwertliterale7_dtp_gen.cpp"
#endif

#include "forte_string.h"
#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Standardwertliterale7, g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale7);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale7::scmElementNames[] = {g_nStringIdstring1, g_nStringIdstring1_element_counter, g_nStringIdstring2, g_nStringIdstring2_element_counter};

CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale7::CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale7() :
    CIEC_STRUCT(),
    var_string1(CIEC_ARRAY_FIXED<CIEC_STRING, 0, 2>{" aA1%"_STRING, " aA2%"_STRING, ""_STRING}),
    var_string1_element_counter(2_ULINT),
    var_string2(CIEC_ARRAY_FIXED<CIEC_STRING, 0, 2>{" aA1%"_STRING, " aA2%"_STRING, ""_STRING}),
    var_string2_element_counter(2_ULINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale7::CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale7(const CIEC_ARRAY_COMMON<CIEC_STRING> &pastring1, const CIEC_ULINT &pastring1_element_counter, const CIEC_ARRAY_COMMON<CIEC_STRING> &pastring2, const CIEC_ULINT &pastring2_element_counter) :
    CIEC_STRUCT(),
    var_string1(pastring1),
    var_string1_element_counter(pastring1_element_counter),
    var_string2(pastring2),
    var_string2_element_counter(pastring2_element_counter) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale7::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale7;
}

void CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale7::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale7 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale7 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale7::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_string1;
    case 1: return &var_string1_element_counter;
    case 2: return &var_string2;
    case 3: return &var_string2_element_counter;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale7::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_string1;
    case 1: return &var_string1_element_counter;
    case 2: return &var_string2;
    case 3: return &var_string2_element_counter;
  }
  return nullptr;
}

