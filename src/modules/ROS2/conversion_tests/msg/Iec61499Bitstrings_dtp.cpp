/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Iec61499Bitstrings
 *** Description: A Template for a Data Type
 *** Version:
 ***     1.0: 2024-09-11/jan -  -
 *************************************************************************/

#include "Iec61499Bitstrings_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Iec61499Bitstrings_dtp_gen.cpp"
#endif

#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(Iec61499Bitstrings, g_nStringIdIec61499Bitstrings);

const CStringDictionary::TStringId CIEC_Iec61499Bitstrings::scmElementNames[] = {g_nStringIda_byte, g_nStringIda_word, g_nStringIda_dword, g_nStringIda_lword};

CIEC_Iec61499Bitstrings::CIEC_Iec61499Bitstrings() :
    CIEC_STRUCT() {
}

CIEC_Iec61499Bitstrings::CIEC_Iec61499Bitstrings(const CIEC_BYTE &paa_byte, const CIEC_WORD &paa_word, const CIEC_DWORD &paa_dword, const CIEC_LWORD &paa_lword) :
    CIEC_STRUCT(),
    var_a_byte(paa_byte),
    var_a_word(paa_word),
    var_a_dword(paa_dword),
    var_a_lword(paa_lword) {
}

CStringDictionary::TStringId CIEC_Iec61499Bitstrings::getStructTypeNameID() const {
  return g_nStringIdIec61499Bitstrings;
}

void CIEC_Iec61499Bitstrings::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdIec61499Bitstrings == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_Iec61499Bitstrings &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_Iec61499Bitstrings::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_a_byte;
    case 1: return &var_a_word;
    case 2: return &var_a_dword;
    case 3: return &var_a_lword;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_Iec61499Bitstrings::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_a_byte;
    case 1: return &var_a_word;
    case 2: return &var_a_dword;
    case 3: return &var_a_lword;
  }
  return nullptr;
}

