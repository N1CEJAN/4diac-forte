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

#include "forte_bool.h"
#include "forte_lint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen2, g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen2);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::scmElementNames[] = {g_nStringIdstatic_array, g_nStringIddynamic_array, g_nStringIddynamic_array_count};

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2() :
    CIEC_STRUCT(),
    var_static_array(CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 3>{true_BOOL, true_BOOL, false_BOOL, false_BOOL}),
    var_dynamic_array(CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 3>{true_BOOL, true_BOOL, false_BOOL, false_BOOL}),
    var_dynamic_array_count(1_LINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2(const CIEC_ARRAY_COMMON<CIEC_BOOL> &pastatic_array, const CIEC_ARRAY_COMMON<CIEC_BOOL> &padynamic_array, const CIEC_LINT &padynamic_array_count) :
    CIEC_STRUCT(),
    var_static_array(pastatic_array),
    var_dynamic_array(padynamic_array),
    var_dynamic_array_count(padynamic_array_count) {
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
    case 0: return &var_static_array;
    case 1: return &var_dynamic_array;
    case 2: return &var_dynamic_array_count;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_static_array;
    case 1: return &var_dynamic_array;
    case 2: return &var_dynamic_array_count;
  }
  return nullptr;
}

