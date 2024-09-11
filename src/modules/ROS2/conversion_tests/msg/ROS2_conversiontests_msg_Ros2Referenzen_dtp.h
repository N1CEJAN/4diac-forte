/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2Referenzen
 *** Description:
 *** Version:
 *************************************************************************/

#pragma once

#include "forte_struct.h"

#include "ROS2_conversiontests_msg_Ros2PrimitiverDatentyp_dtp.h"
#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"


class CIEC_ROS2_conversiontests_msg_Ros2Referenzen final : public CIEC_STRUCT {
  DECLARE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2Referenzen)

  public:
    CIEC_ROS2_conversiontests_msg_Ros2Referenzen();

    CIEC_ROS2_conversiontests_msg_Ros2Referenzen(const CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp &paabsolute_reference, const CIEC_ARRAY_COMMON<CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp> &paarray_of_absolute_references, const CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp &parelative_reference, const CIEC_ARRAY_COMMON<CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp> &paarray_of_relative_references);

    CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp var_absolute_reference;
    CIEC_ARRAY_FIXED<CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp, 0, 2> var_array_of_absolute_references;
    CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp var_relative_reference;
    CIEC_ARRAY_FIXED<CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp, 0, 2> var_array_of_relative_references;

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


