/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2PrimitiveDatentypen
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_bool.h"
#include "forte_byte.h"
#include "forte_sint.h"
#include "forte_int.h"
#include "forte_dint.h"
#include "forte_lint.h"
#include "forte_usint.h"
#include "forte_uint.h"
#include "forte_udint.h"
#include "forte_ulint.h"
#include "forte_real.h"
#include "forte_lreal.h"
#include "forte_char.h"
#include "forte_string.h"
#include "forte_wstring.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2PrimitiveDatentypen)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen();

    CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen(const CIEC_BOOL &paa_bool, const CIEC_BYTE &paa_byte, const CIEC_SINT &paan_int8, const CIEC_INT &paan_int16, const CIEC_DINT &paan_int32, const CIEC_LINT &paan_int64, const CIEC_USINT &paa_uint8, const CIEC_UINT &paa_uint16, const CIEC_UDINT &paa_uint32, const CIEC_ULINT &paa_uint64, const CIEC_REAL &paa_float32, const CIEC_LREAL &paa_float64, const CIEC_CHAR &paa_char, const CIEC_STRING &paa_string, const CIEC_STRING &paa_bound_string, const CIEC_ULINT &paa_bound_string_string_bound, const CIEC_WSTRING &paa_wstring, const CIEC_WSTRING &paa_bound_wstring, const CIEC_ULINT &paa_bound_wstring_string_bound);

    CIEC_BOOL var_a_bool;
    CIEC_BYTE var_a_byte;
    CIEC_SINT var_an_int8;
    CIEC_INT var_an_int16;
    CIEC_DINT var_an_int32;
    CIEC_LINT var_an_int64;
    CIEC_USINT var_a_uint8;
    CIEC_UINT var_a_uint16;
    CIEC_UDINT var_a_uint32;
    CIEC_ULINT var_a_uint64;
    CIEC_REAL var_a_float32;
    CIEC_LREAL var_a_float64;
    CIEC_CHAR var_a_char;
    CIEC_STRING var_a_string;
    CIEC_STRING var_a_bound_string;
    CIEC_ULINT var_a_bound_string_string_bound;
    CIEC_WSTRING var_a_wstring;
    CIEC_WSTRING var_a_bound_wstring;
    CIEC_ULINT var_a_bound_wstring_string_bound;

    size_t getStructSize() const override {
      return 19;
    }

    const CStringDictionary::TStringId* elementNames() const override {
      return scmElementNames;
    }

    CStringDictionary::TStringId getStructTypeNameID() const override;

    void setValue(const CIEC_ANY &paValue) override;

    CIEC_ANY *getMember(size_t) override;
    const CIEC_ANY *getMember(size_t) const override;

  private:
    static const CStringDictionary::TStringId scmElementNames[];

};


