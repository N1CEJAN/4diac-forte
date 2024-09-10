/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen_dtp_gen.cpp"
#endif

#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen, g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen::scmElementNames[] = {g_nStringIdstatic_array, g_nStringIddynamic_array, g_nStringIdbound_dynamic_array};

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen() :
    CIEC_STRUCT(),
    var_dynamic_array(0, 0),
    var_bound_dynamic_array(0, 0)
{
}

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen(const CIEC_ARRAY_COMMON<CIEC_BOOL> &pastatic_array, const CIEC_ARRAY_COMMON<CIEC_BOOL> &padynamic_array, const CIEC_ARRAY_COMMON<CIEC_STRING> &pabound_dynamic_array) :
    CIEC_STRUCT(),
    var_static_array(pastatic_array),
    var_dynamic_array(padynamic_array),
    var_bound_dynamic_array(pabound_dynamic_array) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen;
}

void CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_static_array;
    case 1: return &var_dynamic_array;
    case 2: return &var_bound_dynamic_array;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_static_array;
    case 1: return &var_dynamic_array;
    case 2: return &var_bound_dynamic_array;
  }
  return nullptr;
}

