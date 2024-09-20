/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Standardwertliterale6
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2Standardwertliterale6_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2Standardwertliterale6_dtp_gen.cpp"
#endif

#include "forte_real.h"
#include "forte_ulint.h"
#include "forte_char.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Standardwertliterale6, g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale6);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6::scmElementNames[] = {g_nStringIdfloat_dec, g_nStringIdfloat_dec_element_counter, g_nStringIdchar_hex, g_nStringIdchar_hex_element_counter};

CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6::CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6() :
    CIEC_STRUCT(),
    var_float_dec(CIEC_ARRAY_FIXED<CIEC_REAL, 0, 2>{0.1_REAL, 0.2_REAL, 0.0_REAL}),
    var_float_dec_element_counter(2_ULINT),
    var_char_hex(CIEC_ARRAY_FIXED<CIEC_CHAR, 0, 2>{0x41_CHAR, 0x42_CHAR, 0x00_CHAR}),
    var_char_hex_element_counter(2_ULINT) {
}

CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6::CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6(const CIEC_ARRAY_COMMON<CIEC_REAL> &pafloat_dec, const CIEC_ULINT &pafloat_dec_element_counter, const CIEC_ARRAY_COMMON<CIEC_CHAR> &pachar_hex, const CIEC_ULINT &pachar_hex_element_counter) :
    CIEC_STRUCT(),
    var_float_dec(pafloat_dec),
    var_float_dec_element_counter(pafloat_dec_element_counter),
    var_char_hex(pachar_hex),
    var_char_hex_element_counter(pachar_hex_element_counter) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale6;
}

void CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2Standardwertliterale6 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_float_dec;
    case 1: return &var_float_dec_element_counter;
    case 2: return &var_char_hex;
    case 3: return &var_char_hex_element_counter;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2Standardwertliterale6::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_float_dec;
    case 1: return &var_float_dec_element_counter;
    case 2: return &var_char_hex;
    case 3: return &var_char_hex_element_counter;
  }
  return nullptr;
}

