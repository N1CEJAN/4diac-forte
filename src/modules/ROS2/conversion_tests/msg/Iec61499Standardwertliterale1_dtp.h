/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Iec61499Standardwertliterale1
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


class CIEC_Iec61499Standardwertliterale1 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(Iec61499Standardwertliterale1)

  public:
    CIEC_Iec61499Standardwertliterale1();

    CIEC_Iec61499Standardwertliterale1(const CIEC_SINT &padec_sint1, const CIEC_SINT &padec_sint2, const CIEC_SINT &pabin_sint1, const CIEC_SINT &pabin_sint2, const CIEC_SINT &paoct_sint, const CIEC_SINT &pahex_sint, const CIEC_BOOL &paint_bool, const CIEC_BOOL &pastring_bool, const CIEC_CHAR &pachar_hex, const CIEC_STRING &paempty_string, const CIEC_STRING &paspecial_string, const CIEC_STRING &paspace_string, const CIEC_REAL &paa_real);

    CIEC_SINT var_dec_sint1;
    CIEC_SINT var_dec_sint2;
    CIEC_SINT var_bin_sint1;
    CIEC_SINT var_bin_sint2;
    CIEC_SINT var_oct_sint;
    CIEC_SINT var_hex_sint;
    CIEC_BOOL var_int_bool;
    CIEC_BOOL var_string_bool;
    CIEC_CHAR var_char_hex;
    CIEC_STRING var_empty_string;
    CIEC_STRING var_special_string;
    CIEC_STRING var_space_string;
    CIEC_REAL var_a_real;

    size_t getStructSize() const override {
      return 13;
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


