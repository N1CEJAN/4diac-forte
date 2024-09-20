/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen2
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_bool.h"
#include "forte_lint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen2)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2();

    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen2(const CIEC_ARRAY_COMMON<CIEC_BOOL> &pastatic_array, const CIEC_ARRAY_COMMON<CIEC_BOOL> &padynamic_array, const CIEC_LINT &padynamic_array_count);

    CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 3> var_static_array;
    CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 3> var_dynamic_array;
    CIEC_LINT var_dynamic_array_count;

    size_t getStructSize() const override {
      return 3;
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


