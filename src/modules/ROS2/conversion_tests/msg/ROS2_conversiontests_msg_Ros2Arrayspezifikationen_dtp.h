/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "forte_bool.h"
#include "forte_string.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen();

    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen(const CIEC_ARRAY_COMMON<CIEC_BOOL> &pastatic_array, const CIEC_ARRAY_COMMON<CIEC_BOOL> &padynamic_array, const CIEC_ARRAY_COMMON<CIEC_STRING> &pabound_dynamic_array);

    CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 1> var_static_array;
    CIEC_ARRAY_VARIABLE<CIEC_BOOL> var_dynamic_array;
    CIEC_ARRAY_VARIABLE<CIEC_STRING> var_bound_dynamic_array;

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


