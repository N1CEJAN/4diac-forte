/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Iec61499Standardwertliterale2
 *** Description:
 *** Version:
 *************************************************************************/

#include "Iec61499Standardwertliterale2_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Iec61499Standardwertliterale2_dtp_gen.cpp"
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

DEFINE_FIRMWARE_DATATYPE(Iec61499Standardwertliterale2, g_nStringIdIec61499Standardwertliterale2);

const CStringDictionary::TStringId CIEC_Iec61499Standardwertliterale2::scmElementNames[] = {g_nStringIddec_sint_array, g_nStringIdbin_sint_array, g_nStringIdoct_sint_array, g_nStringIdhex_sint_array, g_nStringIdint_bool_array, g_nStringIdstring_bool_array, g_nStringIdchar_hex_array, g_nStringIdspecial_string_array, g_nStringIdspace_string_array, g_nStringIda_real_array};

CIEC_Iec61499Standardwertliterale2::CIEC_Iec61499Standardwertliterale2() :
    CIEC_STRUCT(),
    var_dec_sint_array(CIEC_ARRAY_FIXED<CIEC_SINT, -1, 0>{1_SINT, 2_SINT}),
    var_bin_sint_array(CIEC_ARRAY_FIXED<CIEC_SINT, -1, 0>{0_SINT, 1_SINT}),
    var_oct_sint_array(CIEC_ARRAY_FIXED<CIEC_SINT, -1, 0>{1_SINT, 2_SINT}),
    var_hex_sint_array(CIEC_ARRAY_FIXED<CIEC_SINT, -1, 0>{1_SINT, 2_SINT}),
    var_int_bool_array(CIEC_ARRAY_FIXED<CIEC_BOOL, -1, 0>{0_BOOL, 1_BOOL}),
    var_string_bool_array(CIEC_ARRAY_FIXED<CIEC_BOOL, -1, 0>{false_BOOL, true_BOOL}),
    var_char_hex_array(CIEC_ARRAY_FIXED<CIEC_CHAR, -1, 0>{0x41_CHAR, 0x42_CHAR}),
    var_special_string_array(CIEC_ARRAY_FIXED<CIEC_STRING, -1, 0>{" aA1&"_STRING, " aA2&"_STRING}),
    var_space_string_array(CIEC_ARRAY_FIXED<CIEC_STRING, -1, 0>{" "_STRING, " "_STRING}),
    var_a_real_array(CIEC_ARRAY_FIXED<CIEC_REAL, -1, 0>{0.1_REAL, 0.2_REAL}) {
}

CIEC_Iec61499Standardwertliterale2::CIEC_Iec61499Standardwertliterale2(const CIEC_ARRAY_COMMON<CIEC_SINT> &padec_sint_array, const CIEC_ARRAY_COMMON<CIEC_SINT> &pabin_sint_array, const CIEC_ARRAY_COMMON<CIEC_SINT> &paoct_sint_array, const CIEC_ARRAY_COMMON<CIEC_SINT> &pahex_sint_array, const CIEC_ARRAY_COMMON<CIEC_BOOL> &paint_bool_array, const CIEC_ARRAY_COMMON<CIEC_BOOL> &pastring_bool_array, const CIEC_ARRAY_COMMON<CIEC_CHAR> &pachar_hex_array, const CIEC_ARRAY_COMMON<CIEC_STRING> &paspecial_string_array, const CIEC_ARRAY_COMMON<CIEC_STRING> &paspace_string_array, const CIEC_ARRAY_COMMON<CIEC_REAL> &paa_real_array) :
    CIEC_STRUCT(),
    var_dec_sint_array(padec_sint_array),
    var_bin_sint_array(pabin_sint_array),
    var_oct_sint_array(paoct_sint_array),
    var_hex_sint_array(pahex_sint_array),
    var_int_bool_array(paint_bool_array),
    var_string_bool_array(pastring_bool_array),
    var_char_hex_array(pachar_hex_array),
    var_special_string_array(paspecial_string_array),
    var_space_string_array(paspace_string_array),
    var_a_real_array(paa_real_array) {
}

CStringDictionary::TStringId CIEC_Iec61499Standardwertliterale2::getStructTypeNameID() const {
  return g_nStringIdIec61499Standardwertliterale2;
}

void CIEC_Iec61499Standardwertliterale2::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdIec61499Standardwertliterale2 == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_Iec61499Standardwertliterale2 &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_Iec61499Standardwertliterale2::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_dec_sint_array;
    case 1: return &var_bin_sint_array;
    case 2: return &var_oct_sint_array;
    case 3: return &var_hex_sint_array;
    case 4: return &var_int_bool_array;
    case 5: return &var_string_bool_array;
    case 6: return &var_char_hex_array;
    case 7: return &var_special_string_array;
    case 8: return &var_space_string_array;
    case 9: return &var_a_real_array;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_Iec61499Standardwertliterale2::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_dec_sint_array;
    case 1: return &var_bin_sint_array;
    case 2: return &var_oct_sint_array;
    case 3: return &var_hex_sint_array;
    case 4: return &var_int_bool_array;
    case 5: return &var_string_bool_array;
    case 6: return &var_char_hex_array;
    case 7: return &var_special_string_array;
    case 8: return &var_space_string_array;
    case 9: return &var_a_real_array;
  }
  return nullptr;
}

