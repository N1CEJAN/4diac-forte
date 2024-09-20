/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Arrayspezifikationen6
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "ROS2_conversiontests_msg_Ros2PrimitiveDatentypen_dtp.h"
#include "forte_ulint.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6 final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Arrayspezifikationen6)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6();

    CIEC_ROS2_conversiontests_msg_Ros2Arrayspezifikationen6(const CIEC_ARRAY_COMMON<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen> &paabsolute_reference, const CIEC_ULINT &paabsolute_reference_element_counter, const CIEC_ARRAY_COMMON<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen> &parelative_reference, const CIEC_ULINT &parelative_reference_element_counter);

    CIEC_ARRAY_FIXED<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen, 0, 99> var_absolute_reference;
    CIEC_ULINT var_absolute_reference_element_counter;
    CIEC_ARRAY_FIXED<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen, 0, 99> var_relative_reference;
    CIEC_ULINT var_relative_reference_element_counter;

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


