/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2DynamischesArray1
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2DynamischesArray1_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2DynamischesArray1_dtp_gen.cpp"
#endif

#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2DynamischesArray1, g_nStringIdROS2_conversiontests_msg_Ros2DynamischesArray1);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray1::scmElementNames[] = {g_nStringIddynamic_array};

CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray1::CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray1() :
    CIEC_STRUCT(),
    var_dynamic_array(0, 0)
{
}

CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray1::CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray1(const CIEC_ARRAY_COMMON<CIEC_SINT> &padynamic_array) :
    CIEC_STRUCT(),
    var_dynamic_array(padynamic_array) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray1::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2DynamischesArray1;
}

void CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray1::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2DynamischesArray1 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray1 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray1::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_dynamic_array;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray1::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_dynamic_array;
  }
  return nullptr;
}

