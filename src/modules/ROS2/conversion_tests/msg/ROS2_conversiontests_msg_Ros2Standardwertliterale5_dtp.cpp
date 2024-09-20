/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Standardwertliterale5
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Standardwertliterale5_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Standardwertliterale5_dtp_gen.cpp"
#endif

#include "forte_sint.h"
#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Standardwertliterale5, g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale5);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale5::scmElementNames[] = {g_nStringIdint_oct, g_nStringIdint_oct_element_counter, g_nStringIdint_bin, g_nStringIdint_bin_element_counter};

CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale5::CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale5() :
    CIEC_STRUCT(),
    var_int_oct(CIEC_ARRAY_FIXED<CIEC_SINT, 0, 2>{1_SINT, 2_SINT, 0_SINT}),
    var_int_oct_element_counter(2_ULINT),
    var_int_bin(CIEC_ARRAY_FIXED<CIEC_SINT, 0, 2>{0_SINT, 1_SINT, 0_SINT}),
    var_int_bin_element_counter(2_ULINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale5::CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale5(const CIEC_ARRAY_COMMON<CIEC_SINT> &paint_oct, const CIEC_ULINT &paint_oct_element_counter, const CIEC_ARRAY_COMMON<CIEC_SINT> &paint_bin, const CIEC_ULINT &paint_bin_element_counter) :
    CIEC_STRUCT(),
    var_int_oct(paint_oct),
    var_int_oct_element_counter(paint_oct_element_counter),
    var_int_bin(paint_bin),
    var_int_bin_element_counter(paint_bin_element_counter) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale5::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale5;
}

void CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale5::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale5 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale5 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale5::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_int_oct;
    case 1: return &var_int_oct_element_counter;
    case 2: return &var_int_bin;
    case 3: return &var_int_bin_element_counter;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale5::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_int_oct;
    case 1: return &var_int_oct_element_counter;
    case 2: return &var_int_bin;
    case 3: return &var_int_bin_element_counter;
  }
  return nullptr;
}

