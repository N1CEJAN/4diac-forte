/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Iec61499Standardwertliterale1
 *** Description:
 *** Version:
 *************************************************************************/

#include "Iec61499Standardwertliterale1_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Iec61499Standardwertliterale1_dtp_gen.cpp"
#endif

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

DEFINE_FIRMWARE_DATATYPE(Iec61499Standardwertliterale1, g_nStringIdIec61499Standardwertliterale1);

const CStringDictionary::TStringId CIEC_Iec61499Standardwertliterale1::scmElementNames[] = {g_nStringIddec_sint1, g_nStringIddec_sint2, g_nStringIdbin_sint1, g_nStringIdbin_sint2, g_nStringIdoct_sint, g_nStringIdhex_sint, g_nStringIdint_bool, g_nStringIdstring_bool, g_nStringIdchar_hex, g_nStringIdempty_string, g_nStringIdspecial_string, g_nStringIdspace_string, g_nStringIda_real};

CIEC_Iec61499Standardwertliterale1::CIEC_Iec61499Standardwertliterale1() :
    CIEC_STRUCT(),
    var_dec_sint1(-1_SINT),
    var_dec_sint2(-1_SINT),
    var_bin_sint1(1_SINT),
    var_bin_sint2(1_SINT),
    var_oct_sint(127_SINT),
    var_hex_sint(127_SINT),
    var_int_bool(1_BOOL),
    var_string_bool(true_BOOL),
    var_char_hex(0x41_CHAR),
    var_empty_string(""_STRING),
    var_special_string(" aA1&$"_STRING),
    var_space_string(" "_STRING),
    var_a_real(1.1_REAL) {
}

CIEC_Iec61499Standardwertliterale1::CIEC_Iec61499Standardwertliterale1(const CIEC_SINT &padec_sint1, const CIEC_SINT &padec_sint2, const CIEC_SINT &pabin_sint1, const CIEC_SINT &pabin_sint2, const CIEC_SINT &paoct_sint, const CIEC_SINT &pahex_sint, const CIEC_BOOL &paint_bool, const CIEC_BOOL &pastring_bool, const CIEC_CHAR &pachar_hex, const CIEC_STRING &paempty_string, const CIEC_STRING &paspecial_string, const CIEC_STRING &paspace_string, const CIEC_REAL &paa_real) :
    CIEC_STRUCT(),
    var_dec_sint1(padec_sint1),
    var_dec_sint2(padec_sint2),
    var_bin_sint1(pabin_sint1),
    var_bin_sint2(pabin_sint2),
    var_oct_sint(paoct_sint),
    var_hex_sint(pahex_sint),
    var_int_bool(paint_bool),
    var_string_bool(pastring_bool),
    var_char_hex(pachar_hex),
    var_empty_string(paempty_string),
    var_special_string(paspecial_string),
    var_space_string(paspace_string),
    var_a_real(paa_real) {
}

CStringDictionary::TStringId CIEC_Iec61499Standardwertliterale1::getStructTypeNameID() const {
  return g_nStringIdIec61499Standardwertliterale1;
}

void CIEC_Iec61499Standardwertliterale1::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdIec61499Standardwertliterale1 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_Iec61499Standardwertliterale1 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_Iec61499Standardwertliterale1::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_dec_sint1;
    case 1: return &var_dec_sint2;
    case 2: return &var_bin_sint1;
    case 3: return &var_bin_sint2;
    case 4: return &var_oct_sint;
    case 5: return &var_hex_sint;
    case 6: return &var_int_bool;
    case 7: return &var_string_bool;
    case 8: return &var_char_hex;
    case 9: return &var_empty_string;
    case 10: return &var_special_string;
    case 11: return &var_space_string;
    case 12: return &var_a_real;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_Iec61499Standardwertliterale1::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_dec_sint1;
    case 1: return &var_dec_sint2;
    case 2: return &var_bin_sint1;
    case 3: return &var_bin_sint2;
    case 4: return &var_oct_sint;
    case 5: return &var_hex_sint;
    case 6: return &var_int_bool;
    case 7: return &var_string_bool;
    case 8: return &var_char_hex;
    case 9: return &var_empty_string;
    case 10: return &var_special_string;
    case 11: return &var_space_string;
    case 12: return &var_a_real;
  }
  return nullptr;
}

