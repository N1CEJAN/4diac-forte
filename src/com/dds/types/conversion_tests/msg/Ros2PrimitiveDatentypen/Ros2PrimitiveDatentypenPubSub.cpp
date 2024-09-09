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
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Ros2PrimitiveDatentypenPubSub_gen.cpp"
#endif
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Ros2PrimitiveDatentypen/Ros2PrimitiveDatentypen.h"

std::string conversion_tests::Ros2PrimitiveDatentypenPubSub::registerType(DomainParticipant *paParticipant) {
    this->m_type.register_type(paParticipant);
    return this->m_type.get_type_name();
}

bool conversion_tests::Ros2PrimitiveDatentypenPubSub::validateType(const CStringDictionary::TStringId typeId) {
    return typeId == g_nStringIdROS2_conversiontests_msg_Ros2PrimitiveDatentypen;
}

bool conversion_tests::Ros2PrimitiveDatentypenPubSub::publish(CIEC_STRUCT *data) {
    const auto casted = dynamic_cast<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen *>(data);

    msg::Ros2PrimitiveDatentypen ros2primitives;
    ros2primitives.a_bool(static_cast<bool>(casted->var_a_bool));
    ros2primitives.a_byte(static_cast<TForteByte>(casted->var_a_byte));
    ros2primitives.a_float32(static_cast<TForteFloat>(casted->var_a_float32));
    ros2primitives.a_float64(static_cast<TForteDFloat>(casted->var_a_float64));
    ros2primitives.an_int8(static_cast<TForteInt8>(casted->var_an_int8));
    ros2primitives.an_int16(static_cast<TForteInt16>(casted->var_an_int16));
    ros2primitives.an_int32(static_cast<TForteInt32>(casted->var_an_int32));
    ros2primitives.an_int64(static_cast<TForteInt64>(casted->var_an_int64));
    ros2primitives.a_uint8(static_cast<TForteUInt8>(casted->var_a_uint8));
    ros2primitives.a_uint16(static_cast<TForteUInt16>(casted->var_a_uint16));
    ros2primitives.a_uint32(static_cast<TForteUInt32>(casted->var_a_uint32));
    ros2primitives.a_uint64(static_cast<TForteUInt64>(casted->var_a_uint64));
    ros2primitives.a_char(static_cast<TForteChar>(casted->var_a_char));
    ros2primitives.a_string(casted->var_a_string.getStorage());
    ros2primitives.a_wstring(general_purpose::msg::convertCIEC_WSTRING2Wstring(casted->var_a_wstring));

    return this->write(&ros2primitives);
}

std::optional<std::unique_ptr<CIEC_STRUCT> > conversion_tests::Ros2PrimitiveDatentypenPubSub::receive() {
    conversion_tests::msg::Ros2PrimitiveDatentypen ros2primitives;
    bool taken;
    this->take(&taken, &ros2primitives);
    if (!taken) return std::nullopt;

    DEVLOG_DEBUG(
        "[DDS PubSub] Raw data: a_bool=%d, a_byte=%u, an_int8=%d, an_int16=%d, an_int32=%d, an_int64=%lld, a_uint8=%u, a_uint16=%u, a_uint32=%u, a_uint64=%llu, a_float32=%.2f, a_float64=%.2f, a_char=%c, a_string=%s, a_wstring=%s\n",
        ros2primitives.a_bool(),
        ros2primitives.a_byte(),
        ros2primitives.an_int8(),
        ros2primitives.an_int16(),
        ros2primitives.an_int32(),
        ros2primitives.an_int64(),
        ros2primitives.a_uint8(),
        ros2primitives.a_uint16(),
        ros2primitives.a_uint32(),
        ros2primitives.a_uint64(),
        ros2primitives.a_float32(),
        ros2primitives.a_float64(),
        ros2primitives.a_char(),
        ros2primitives.a_string().c_str(),
        general_purpose::msg::wstring2String(ros2primitives.a_wstring()).c_str()
    );

    auto ciecStruct = std::make_unique<CIEC_ROS2_conversiontests_msg_Ros2PrimitiveDatentypen>();
    ciecStruct->var_a_bool = CIEC_BOOL(ros2primitives.a_bool());
    ciecStruct->var_a_byte = CIEC_BYTE(ros2primitives.a_byte());
    ciecStruct->var_an_int8 = CIEC_SINT(ros2primitives.an_int8());
    ciecStruct->var_an_int16 = CIEC_INT(ros2primitives.an_int16());
    ciecStruct->var_an_int32 = CIEC_DINT(ros2primitives.an_int32());
    ciecStruct->var_an_int64 = CIEC_LINT(ros2primitives.an_int64());
    ciecStruct->var_a_uint8 = CIEC_USINT(ros2primitives.a_uint8());
    ciecStruct->var_a_uint16 = CIEC_UINT(ros2primitives.a_uint16());
    ciecStruct->var_a_uint32 = CIEC_UDINT(ros2primitives.a_uint32());
    ciecStruct->var_a_uint64 = CIEC_ULINT(ros2primitives.a_uint64());
    ciecStruct->var_a_float32 = CIEC_REAL(ros2primitives.a_float32());
    ciecStruct->var_a_float64 = CIEC_LREAL(ros2primitives.a_float64());
    ciecStruct->var_a_char = CIEC_CHAR(ros2primitives.a_char());
    ciecStruct->var_a_string = CIEC_STRING(ros2primitives.a_string());
    ciecStruct->var_a_wstring = general_purpose::msg::convertWstring2CIEC_WSTRING(ros2primitives.a_wstring());

    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciecStruct);

    return std::make_optional(std::move(ptr));
}
