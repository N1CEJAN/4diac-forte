/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Iec61499Referenzen
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "Iec61499PrimitiveDatentypen_dtp.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_Iec61499Referenzen final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(Iec61499Referenzen)

  public:
    CIEC_Iec61499Referenzen();

    CIEC_Iec61499Referenzen(const CIEC_Iec61499PrimitiveDatentypen &pareference);

    CIEC_Iec61499PrimitiveDatentypen var_reference;

    size_t getStructSize() const override {
      return 1;
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


