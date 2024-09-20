/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen6
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen6_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Arrayspezifikationen6_dtp_gen.cpp"
#endif

#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen6, g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen6);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6::scmElementNames[] = {g_nStringIdabsolute_reference, g_nStringIdabsolute_reference_element_counter, g_nStringIdrelative_reference, g_nStringIdrelative_reference_element_counter};

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6() :
    CIEC_STRUCT(),
    var_absolute_reference_element_counter(0_ULINT),
    var_relative_reference_element_counter(0_ULINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6::CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6(const CIEC_ARRAY_COMMON<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen> &paabsolute_reference, const CIEC_ULINT &paabsolute_reference_element_counter, const CIEC_ARRAY_COMMON<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen> &parelative_reference, const CIEC_ULINT &parelative_reference_element_counter) :
    CIEC_STRUCT(),
    var_absolute_reference(paabsolute_reference),
    var_absolute_reference_element_counter(paabsolute_reference_element_counter),
    var_relative_reference(parelative_reference),
    var_relative_reference_element_counter(parelative_reference_element_counter) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen6;
}

void CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Arrayspezifikationen6 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_absolute_reference;
    case 1: return &var_absolute_reference_element_counter;
    case 2: return &var_relative_reference;
    case 3: return &var_relative_reference_element_counter;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_absolute_reference;
    case 1: return &var_absolute_reference_element_counter;
    case 2: return &var_relative_reference;
    case 3: return &var_relative_reference_element_counter;
  }
  return nullptr;
}

