/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ROS2_conversiontests_msg_Ros2PrimitiverDatentyp
 *** Description:
 *** Version:
 *************************************************************************/

#include "ROS2_conversiontests_msg_Ros2PrimitiverDatentyp_dtp.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ROS2_conversiontests_msg_Ros2PrimitiverDatentyp_dtp_gen.cpp"
#endif

#include "iec61131_functions.h"
#include "forte_array_common.h"
#include "forte_array.h"
#include "forte_array_fixed.h"
#include "forte_array_variable.h"

DEFINE_FIRMWARE_DATATYPE(ROS2_conversiontests_msg_Ros2PrimitiverDatentyp, g_nStringIdROS2_conversiontests_msg_Ros2PrimitiverDatentyp);

const CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp::scmElementNames[] = {g_nStringIda_bool};

CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp::CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp() :
    CIEC_STRUCT() {
}

CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp::CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp(const CIEC_BOOL &paa_bool) :
    CIEC_STRUCT(),
    var_a_bool(paa_bool) {
}

CStringDictionary::TStringId CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp::getStructTypeNameID() const {
  return g_nStringIdROS2_conversiontests_msg_Ros2PrimitiverDatentyp;
}

void CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp::setValue(const CIEC_ANY &paValue) {
  if (paValue.getDataTypeID() == e_STRUCT) {
    auto &otherStruct = static_cast<const CIEC_STRUCT &>(paValue);
    if (g_nStringIdROS2_conversiontests_msg_Ros2PrimitiverDatentyp == otherStruct.getStructTypeNameID()) {
      operator=(static_cast<const CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp &>(paValue));
    }
  }
}

CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp::getMember(const size_t paIndex) {
  switch(paIndex) {
    case 0: return &var_a_bool;
  }
  return nullptr;
}

const CIEC_ANY *CIEC_ROS2_conversiontests_msg_Ros2PrimitiverDatentyp::getMember(const size_t paIndex) const {
  switch(paIndex) {
    case 0: return &var_a_bool;
  }
  return nullptr;
}

