/*******************************************************************************
 * Copyright (c) 2024 OFFIS e.V.
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    Malte Grave - initial implementation
 ********************************************************************************/

#include <memory>
#include <conversion_tests/msg/ROS2_conversiontests_msg_Ros2PrimitiveDatentypen_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Ros2PrimitiveDatentypenPubSub.h"
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Ros2PrimitiveDatentypen/Ros2PrimitiveDatentypen.h"

#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2PrimitiveDatentypenPubSub_gen.cpp"
#endif

std::string conversion_tests::Ros2PrimitiveDatentypenPubSub::registerType(DomainParticipant* paParticipant) {

  this->m_type.register_type(paParticipant);
  return this->m_type.get_type_name();
}

bool conversion_tests::Ros2PrimitiveDatentypenPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_conversiontests_msg_Ros2PrimitiveDatentypen;
}

bool conversion_tests::Ros2PrimitiveDatentypenPubSub::publish(CIEC_STRUCT* data) {
  const auto ciec = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen *>(data);

  msg::Ros2PrimitiveDatentypen dds;
  dds.a_bool(static_cast<bool>(ciec->var_a_bool));
  dds.a_byte(static_cast<TForteByte>(ciec->var_a_byte));
  dds.a_uint8(static_cast<TForteUInt8>(ciec->var_a_uint8));
  dds.a_uint16(static_cast<TForteUInt16>(ciec->var_a_uint16));
  dds.a_uint32(static_cast<TForteUInt32>(ciec->var_a_uint32));
  dds.a_uint64(static_cast<TForteUInt64>(ciec->var_a_uint64));
  dds.a_int8(static_cast<TForteInt8>(ciec->var_a_int8));
  dds.a_int16(static_cast<TForteInt16>(ciec->var_a_int16));
  dds.a_int32(static_cast<TForteInt32>(ciec->var_a_int32));
  dds.a_int64(static_cast<TForteInt64>(ciec->var_a_int64));
  dds.a_float32(static_cast<TForteFloat>(ciec->var_a_float32));
  dds.a_float64(static_cast<TForteDFloat>(ciec->var_a_float64));
  dds.a_char(static_cast<TForteChar>(ciec->var_a_char));
  dds.a_string(ciec->var_a_string.getStorage());
  dds.a_bound_string(ciec->var_a_bound_string.getStorage());
  dds.a_wstring(general_purpose::msg::convertCIEC_WSTRING2Wstring(ciec->var_a_wstring));
  dds.a_bound_wstring(general_purpose::msg::convertCIEC_WSTRING2Wstring(ciec->var_a_bound_wstring));

  return this->write(&dds);
}

std::optional<std::unique_ptr<CIEC_STRUCT>> conversion_tests::Ros2PrimitiveDatentypenPubSub::receive() {
    conversion_tests::msg::Ros2PrimitiveDatentypen ros2primitives;
    bool taken;
    this->take(&taken, &ros2primitives);
    if (!taken) return std::nullopt;

    auto ciecStruct = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen>();
    ciecStruct->var_a_bool = CIEC_BOOL(ros2primitives.a_bool());
    ciecStruct->var_a_byte = CIEC_BYTE(ros2primitives.a_byte());
    ciecStruct->var_a_uint8 = CIEC_USINT(ros2primitives.a_uint8());
    ciecStruct->var_a_uint16 = CIEC_UINT(ros2primitives.a_uint16());
    ciecStruct->var_a_uint32 = CIEC_UDINT(ros2primitives.a_uint32());
    ciecStruct->var_a_uint64 = CIEC_ULINT(ros2primitives.a_uint64());
    ciecStruct->var_a_int8 = CIEC_SINT(ros2primitives.a_int8());
    ciecStruct->var_a_int16 = CIEC_INT(ros2primitives.a_int16());
    ciecStruct->var_a_int32 = CIEC_DINT(ros2primitives.a_int32());
    ciecStruct->var_a_int64 = CIEC_LINT(ros2primitives.a_int64());
    ciecStruct->var_a_float32 = CIEC_REAL(ros2primitives.a_float32());
    ciecStruct->var_a_float64 = CIEC_LREAL(ros2primitives.a_float64());
    ciecStruct->var_a_char = CIEC_CHAR(ros2primitives.a_char());
    ciecStruct->var_a_string = CIEC_STRING(ros2primitives.a_string());
    ciecStruct->var_a_bound_string = CIEC_STRING_FIXED<2>(ros2primitives.a_bound_string().to_string());
    ciecStruct->var_a_wstring = general_purpose::msg::convertWstring2CIEC_WSTRING(ros2primitives.a_wstring());
    ciecStruct->var_a_bound_wstring = general_purpose::msg::convertWstring2CIEC_WSTRING(ros2primitives.a_bound_wstring());

    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

    return std::make_optional(std::move(ptr));
}
