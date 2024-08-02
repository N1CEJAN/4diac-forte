/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversion_tests__msg__Ros2Primitives
 *** Description:
 *** Version:
 ***     1.0: 2024-07-13/jan -  -
 *************************************************************************/

#include "ROS2_conversion_tests__msg__Ros2Primitives_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversion_tests__msg__Ros2Primitives_dtp_gen.cpp"
#endif

#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversion_tests__msg__Ros2Primitives, g_nStringIdROS2_conversion_tests__msg__Ros2Primitives);

const CStringDictionary::TStringId CIEC_ROS2_conversion_tests__msg__Ros2Primitives::scmElementNames[] = {g_nStringIda_bool, g_nStringIda_byte, g_nStringIda_float32, g_nStringIda_float64, g_nStringIdan_int8, g_nStringIdan_int16, g_nStringIdan_int32, g_nStringIdan_int64, g_nStringIda_uint8, g_nStringIda_uint16, g_nStringIda_uint32, g_nStringIda_uint64, g_nStringIda_char, g_nStringIda_string, g_nStringIda_wstring};

CIEC_ROS2_conversion_tests__msg__Ros2Primitives::CIEC_ROS2_conversion_tests__msg__Ros2Primitives() :
    CIEC_STRUCT() {
}

CIEC_ROS2_conversion_tests__msg__Ros2Primitives::CIEC_ROS2_conversion_tests__msg__Ros2Primitives(const CIEC_BOOL &paa_bool, const CIEC_BYTE &paa_byte, const CIEC_REAL &paa_float32, const CIEC_LREAL &paa_float64, const CIEC_SINT &paan_int8, const CIEC_INT &paan_int16, const CIEC_DINT &paan_int32, const CIEC_LINT &paan_int64, const CIEC_USINT &paa_uint8, const CIEC_UINT &paa_uint16, const CIEC_UDINT &paa_uint32, const CIEC_ULINT &paa_uint64, const CIEC_CHAR &paa_char, const CIEC_STRING &paa_string, const CIEC_WSTRING &paa_wstring) :
    CIEC_STRUCT(),
    var_a_bool(paa_bool),
    var_a_byte(paa_byte),
    var_a_float32(paa_float32),
    var_a_float64(paa_float64),
    var_an_int8(paan_int8),
    var_an_int16(paan_int16),
    var_an_int32(paan_int32),
    var_an_int64(paan_int64),
    var_a_uint8(paa_uint8),
    var_a_uint16(paa_uint16),
    var_a_uint32(paa_uint32),
    var_a_uint64(paa_uint64),
    var_a_char(paa_char),
    var_a_string(paa_string),
    var_a_wstring(paa_wstring) {
}

CStringDictionary::TStringId CIEC_ROS2_conversion_tests__msg__Ros2Primitives::getStructTypeNameID() const {
  return g_nStringIdROS2_conversion_tests__msg__Ros2Primitives;
}

void CIEC_ROS2_conversion_tests__msg__Ros2Primitives::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversion_tests__msg__Ros2Primitives == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversion_tests__msg__Ros2Primitives &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversion_tests__msg__Ros2Primitives::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_a_bool;
    case 1: return &var_a_byte;
    case 2: return &var_a_float32;
    case 3: return &var_a_float64;
    case 4: return &var_an_int8;
    case 5: return &var_an_int16;
    case 6: return &var_an_int32;
    case 7: return &var_an_int64;
    case 8: return &var_a_uint8;
    case 9: return &var_a_uint16;
    case 10: return &var_a_uint32;
    case 11: return &var_a_uint64;
    case 12: return &var_a_char;
    case 13: return &var_a_string;
    case 14: return &var_a_wstring;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversion_tests__msg__Ros2Primitives::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_a_bool;
    case 1: return &var_a_byte;
    case 2: return &var_a_float32;
    case 3: return &var_a_float64;
    case 4: return &var_an_int8;
    case 5: return &var_an_int16;
    case 6: return &var_an_int32;
    case 7: return &var_an_int64;
    case 8: return &var_a_uint8;
    case 9: return &var_a_uint16;
    case 10: return &var_a_uint32;
    case 11: return &var_a_uint64;
    case 12: return &var_a_char;
    case 13: return &var_a_string;
    case 14: return &var_a_wstring;
  }
  return nullptr;
}

