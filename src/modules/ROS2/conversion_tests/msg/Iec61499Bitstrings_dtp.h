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

#pragma once

#include "forte_struct.h"

#include "forte_byte.h"
#include "forte_word.h"
#include "forte_dword.h"
#include "forte_lword.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_Iec61499Bitstrings final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(Iec61499Bitstrings)

  public:
    CIEC_Iec61499Bitstrings();

    CIEC_Iec61499Bitstrings(const CIEC_BYTE &paa_byte, const CIEC_WORD &paa_word, const CIEC_DWORD &paa_dword, const CIEC_LWORD &paa_lword);

    CIEC_BYTE var_a_byte;
    CIEC_WORD var_a_word;
    CIEC_DWORD var_a_dword;
    CIEC_LWORD var_a_lword;

    size_t getStructSize() const override {
      return 4;
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


