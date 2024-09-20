/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Iec61499Referenzen
 *** Description:
 *** Version:
 *************************************************************************/

#include "Iec61499Referenzen_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Iec61499Referenzen_dtp_gen.cpp"
#endif

#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(Iec61499Referenzen, g_nStringIdIec61499Referenzen);

const CStringDictionary::TStringId CIEC_Iec61499Referenzen::scmElementNames[] = {g_nStringIdreference};

CIEC_Iec61499Referenzen::CIEC_Iec61499Referenzen() :
    CIEC_STRUCT() {
}

CIEC_Iec61499Referenzen::CIEC_Iec61499Referenzen(const CIEC_Iec61499PrimitiveDatentypen &pareference) :
    CIEC_STRUCT(),
    var_reference(pareference) {
}

CStringDictionary::TStringId CIEC_Iec61499Referenzen::getStructTypeNameID() const {
  return g_nStringIdIec61499Referenzen;
}

void CIEC_Iec61499Referenzen::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdIec61499Referenzen == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_Iec61499Referenzen &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_Iec61499Referenzen::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_reference;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_Iec61499Referenzen::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_reference;
  }
  return nullptr;
}

