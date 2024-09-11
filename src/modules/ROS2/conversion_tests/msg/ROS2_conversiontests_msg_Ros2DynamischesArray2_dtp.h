/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2DynamischesArray2
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_sint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray2 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2DynamischesArray2)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray2();

    CIEC_ROS2_conversiontests_msg_Ros2DynamischesArray2(const CIEC_ARRAY_COMMON<CIEC_SINT> &padynamic_array, const CIEC_SINT &padynamic_array_count);

    CIEC_ARRAY_FIXED<CIEC_SINT, 0, 3> var_dynamic_array;
    CIEC_SINT var_dynamic_array_count;

    size_t getStructSize() const override {
      return 2;
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


