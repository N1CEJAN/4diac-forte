/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Iec61499Standardwertliterale2
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_sint.h"
#include "forte_bool.h"
#include "forte_char.h"
#include "forte_string.h"
#include "forte_real.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_Iec61499Standardwertliterale2 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(Iec61499Standardwertliterale2)

  public:
    CIEC_Iec61499Standardwertliterale2();

    CIEC_Iec61499Standardwertliterale2(const CIEC_ARRAY_COMMON<CIEC_SINT> &padec_sint_array, const CIEC_ARRAY_COMMON<CIEC_SINT> &pabin_sint_array, const CIEC_ARRAY_COMMON<CIEC_SINT> &paoct_sint_array, const CIEC_ARRAY_COMMON<CIEC_SINT> &pahex_sint_array, const CIEC_ARRAY_COMMON<CIEC_BOOL> &paint_bool_array, const CIEC_ARRAY_COMMON<CIEC_BOOL> &pastring_bool_array, const CIEC_ARRAY_COMMON<CIEC_CHAR> &pachar_hex_array, const CIEC_ARRAY_COMMON<CIEC_STRING> &paspecial_string_array, const CIEC_ARRAY_COMMON<CIEC_STRING> &paspace_string_array, const CIEC_ARRAY_COMMON<CIEC_REAL> &paa_real_array);

    CIEC_ARRAY_FIXED<CIEC_SINT, -1, 0> var_dec_sint_array;
    CIEC_ARRAY_FIXED<CIEC_SINT, -1, 0> var_bin_sint_array;
    CIEC_ARRAY_FIXED<CIEC_SINT, -1, 0> var_oct_sint_array;
    CIEC_ARRAY_FIXED<CIEC_SINT, -1, 0> var_hex_sint_array;
    CIEC_ARRAY_FIXED<CIEC_BOOL, -1, 0> var_int_bool_array;
    CIEC_ARRAY_FIXED<CIEC_BOOL, -1, 0> var_string_bool_array;
    CIEC_ARRAY_FIXED<CIEC_CHAR, -1, 0> var_char_hex_array;
    CIEC_ARRAY_FIXED<CIEC_STRING, -1, 0> var_special_string_array;
    CIEC_ARRAY_FIXED<CIEC_STRING, -1, 0> var_space_string_array;
    CIEC_ARRAY_FIXED<CIEC_REAL, -1, 0> var_a_real_array;

    size_t getStructSize() const override {
      return 10;
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


