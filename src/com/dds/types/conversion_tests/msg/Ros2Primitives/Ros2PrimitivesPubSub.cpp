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
#include <conversion_tests/msg/ROS2_conversion_tests__msg__Ros2Primitives_dtp.h>
#include <string>

#include "Ros2PrimitivesPubSub.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2PrimitivesPubSub_gen.cpp"
#endif
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Ros2Primitives/Ros2Primitives.h"

std::string conversion_tests::Ros2PrimitivesPubSub::registerType(DomainParticipant* paParticipant) {

  this->m_type.register_type(paParticipant);
  return this->m_type.get_type_name();
}

bool conversion_tests::Ros2PrimitivesPubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdROS2_conversion_tests__msg__Ros2Primitives;
}

bool conversion_tests::Ros2PrimitivesPubSub::publish(CIEC_STRUCT* data) {
  const auto casted = static_cast<CIEC_ROS2_conversion_tests__msg__Ros2Primitives*> (data);

  const bool a_bool = casted->var_a_bool;
  const TForteByte a_byte = (TForteByte) casted->var_a_byte;
  const TForteFloat a_float32 = (TForteFloat) casted->var_a_float32;
  const TForteDFloat a_float64 = (TForteDFloat) casted->var_a_float64;
  const TForteInt8 an_int8 = (TForteInt8) casted->var_an_int8;
  const TForteInt16 an_int16 = (TForteInt16) casted->var_an_int16;
  const TForteInt32 an_int32 = (TForteInt32) casted->var_an_int32;
  const TForteInt64 an_int64 = (TForteInt64) casted->var_an_int64;
  const TForteUInt8 a_uint8 = (TForteUInt8) casted->var_a_uint8;
  const TForteUInt16 a_uint16 = (TForteUInt16) casted->var_a_uint16;
  const TForteUInt32 a_uint32 = (TForteUInt32) casted->var_a_uint32;
  const TForteUInt64 a_uint64 = (TForteUInt64) casted->var_a_uint64;
  const TForteChar a_char = (TForteChar) casted->var_a_char;
  const std::string a_string = casted->var_a_string.getStorage();
  // const std::wstring a_wstring = casted->var_a_wstring;

  DEVLOG_DEBUG(("[DDS Publisher/std_msgs/String] Sent ros2primitives.\n").c_str());

  conversion_tests::msg::Ros2Primitives ros2primitives;
  ros2primitives.a_bool(a_bool);
  ros2primitives.a_byte(a_byte);
  ros2primitives.a_float32(a_float32);
  ros2primitives.a_float64(a_float64);
  ros2primitives.an_int8(an_int8);
  ros2primitives.an_int16(an_int16);
  ros2primitives.an_int32(an_int32);
  ros2primitives.an_int64(an_int64);
  ros2primitives.a_uint8(a_uint8);
  ros2primitives.a_uint16(a_uint16);
  ros2primitives.a_uint32(a_uint32);
  ros2primitives.a_uint64(a_uint64);
  ros2primitives.a_char(a_char);
  ros2primitives.a_string(a_string);
  // ros2primitives.a_wstring(a_wstring);

  return this->write(&ros2primitives);
}

std::optional<std::unique_ptr<CIEC_STRUCT>> conversion_tests::Ros2PrimitivesPubSub::receive() {
  conversion_tests::msg::Ros2Primitives ros2primitives;
  bool taken;
  this->take(&taken, &ros2primitives);
  if (!taken) return std::nullopt;

  auto ciecStruct = std::make_unique<CIEC_ROS2_conversion_tests__msg__Ros2Primitives>();
  ciecStruct->var_a_bool = CIEC_BOOL(ros2primitives.a_bool());
  ciecStruct->var_a_byte = CIEC_BYTE(ros2primitives.a_byte());
  ciecStruct->var_a_float32 = CIEC_REAL(ros2primitives.a_float32());
  ciecStruct->var_a_float64 = CIEC_LREAL(ros2primitives.a_float64());
  ciecStruct->var_an_int8 = CIEC_SINT(ros2primitives.an_int8());
  ciecStruct->var_an_int16 = CIEC_INT(ros2primitives.an_int16());
  ciecStruct->var_an_int32 = CIEC_DINT(ros2primitives.an_int32());
  ciecStruct->var_an_int64 = CIEC_LINT(ros2primitives.an_int64());
  ciecStruct->var_a_uint8 = CIEC_USINT(ros2primitives.a_uint8());
  ciecStruct->var_a_uint16 = CIEC_UINT(ros2primitives.a_uint16());
  ciecStruct->var_a_uint32 = CIEC_UDINT(ros2primitives.a_uint32());
  ciecStruct->var_a_uint64 = CIEC_ULINT(ros2primitives.a_uint64());
  ciecStruct->var_a_char = CIEC_CHAR(ros2primitives.a_char());
  ciecStruct->var_a_string = CIEC_STRING(ros2primitives.a_string());
  // ciecStruct->var_a_wstring = CIEC_WSTRING(ros2primitives.a_wstring());

  std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

  return std::make_optional(std::move(ptr));
}
