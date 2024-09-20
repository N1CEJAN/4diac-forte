/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Standardwertliterale4
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Standardwertliterale4_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Standardwertliterale4_dtp_gen.cpp"
#endif

#include "forte_sint.h"
#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Standardwertliterale4, g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale4);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4::scmElementNames[] = {g_nStringIdint_hex0, g_nStringIdint_hex0_element_counter, g_nStringIdint_hex1, g_nStringIdint_hex1_element_counter};

CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4::CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4() :
    CIEC_STRUCT(),
    var_int_hex0(CIEC_ARRAY_FIXED<CIEC_SINT, 0, 2>{1_SINT, 2_SINT, 0_SINT}),
    var_int_hex0_element_counter(2_ULINT),
    var_int_hex1(CIEC_ARRAY_FIXED<CIEC_SINT, 0, 2>{1_SINT, 2_SINT, 0_SINT}),
    var_int_hex1_element_counter(2_ULINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4::CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4(const CIEC_ARRAY_COMMON<CIEC_SINT> &paint_hex0, const CIEC_ULINT &paint_hex0_element_counter, const CIEC_ARRAY_COMMON<CIEC_SINT> &paint_hex1, const CIEC_ULINT &paint_hex1_element_counter) :
    CIEC_STRUCT(),
    var_int_hex0(paint_hex0),
    var_int_hex0_element_counter(paint_hex0_element_counter),
    var_int_hex1(paint_hex1),
    var_int_hex1_element_counter(paint_hex1_element_counter) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale4;
}

void CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale4 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_int_hex0;
    case 1: return &var_int_hex0_element_counter;
    case 2: return &var_int_hex1;
    case 3: return &var_int_hex1_element_counter;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale4::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_int_hex0;
    case 1: return &var_int_hex0_element_counter;
    case 2: return &var_int_hex1;
    case 3: return &var_int_hex1_element_counter;
  }
  return nullptr;
}

