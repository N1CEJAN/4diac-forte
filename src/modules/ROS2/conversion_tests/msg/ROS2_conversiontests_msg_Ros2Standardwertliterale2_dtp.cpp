/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Standardwertliterale2
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Standardwertliterale2_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Standardwertliterale2_dtp_gen.cpp"
#endif

#include "forte_bool.h"
#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Standardwertliterale2, g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale2);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale2::scmElementNames[] = {g_nStringIdbool_string, g_nStringIdbool_string_element_counter, g_nStringIdbool_int, g_nStringIdbool_int_element_counter};

CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale2::CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale2() :
    CIEC_STRUCT(),
    var_bool_string(CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 2>{false_BOOL, true_BOOL, false_BOOL}),
    var_bool_string_element_counter(2_ULINT),
    var_bool_int(CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 2>{0_BOOL, 1_BOOL, 0_BOOL}),
    var_bool_int_element_counter(2_ULINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale2::CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale2(const CIEC_ARRAY_COMMON<CIEC_BOOL> &pabool_string, const CIEC_ULINT &pabool_string_element_counter, const CIEC_ARRAY_COMMON<CIEC_BOOL> &pabool_int, const CIEC_ULINT &pabool_int_element_counter) :
    CIEC_STRUCT(),
    var_bool_string(pabool_string),
    var_bool_string_element_counter(pabool_string_element_counter),
    var_bool_int(pabool_int),
    var_bool_int_element_counter(pabool_int_element_counter) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale2::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale2;
}

void CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale2::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale2 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale2 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale2::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_bool_string;
    case 1: return &var_bool_string_element_counter;
    case 2: return &var_bool_int;
    case 3: return &var_bool_int_element_counter;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale2::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_bool_string;
    case 1: return &var_bool_string_element_counter;
    case 2: return &var_bool_int;
    case 3: return &var_bool_int_element_counter;
  }
  return nullptr;
}

