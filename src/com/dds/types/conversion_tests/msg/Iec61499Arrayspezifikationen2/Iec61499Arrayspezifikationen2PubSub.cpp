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
#include <conversion_tests/msg/Iec61499Arrayspezifikationen2_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Iec61499Arrayspezifikationen2PubSub.h"
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Iec61499Arrayspezifikationen2/Iec61499Arrayspezifikationen2.h"

#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Iec61499Arrayspezifikationen2PubSub_gen.cpp"
#endif

std::string conversion_tests::Iec61499Arrayspezifikationen2PubSub::registerType(DomainParticipant* paParticipant) {

  this->m_type.register_type(paParticipant);
  return this->m_type.get_type_name();
}

bool conversion_tests::Iec61499Arrayspezifikationen2PubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdIec61499Arrayspezifikationen2;
}

bool conversion_tests::Iec61499Arrayspezifikationen2PubSub::publish(CIEC_STRUCT* data) {
  const auto ciec = dynamic_cast<CIEC_Iec61499Arrayspezifikationen2 *>(data);
  msg::Iec61499Arrayspezifikationen2 dds = ciec2dds(*ciec);
  return this->write(&dds);
}

std::optional<std::unique_ptr<CIEC_STRUCT>> conversion_tests::Iec61499Arrayspezifikationen2PubSub::receive() {
    conversion_tests::msg::Iec61499Arrayspezifikationen2 dds;
    bool taken;
    this->take(&taken, &dds);
    if (!taken) return std::nullopt;

    auto ciec = std::make_unique<CIEC_Iec61499Arrayspezifikationen2>(dds2ciec(dds));
    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciec);

    return std::make_optional(std::move(ptr));
}

conversion_tests::msg::Iec61499Arrayspezifikationen2 conversion_tests::Iec61499Arrayspezifikationen2PubSub::ciec2dds(
    const CIEC_Iec61499Arrayspezifikationen2 &ciec) {
  msg::Iec61499Arrayspezifikationen2 dds;

  msg::boolean__2 static_array_with_indexation1 = {};
  size_t counter = 0;
  for (CIEC_BOOL element : ciec.var_static_array_with_indexation1) {

    static_array_with_indexation1[counter] = static_cast<bool>(element);
    counter++;
  }
  dds.static_array_with_indexation1(static_array_with_indexation1);

  msg::octet__2 static_array_with_indexation2 = {};
  counter = 0;
  for (CIEC_BYTE element : ciec.var_static_array_with_indexation2) {
    static_array_with_indexation2[counter] = static_cast<TForteByte>(element);
    counter++;
  }
  dds.static_array_with_indexation2(static_array_with_indexation2);

  msg::uint16__2 static_array_with_indexation3 = {};
  counter = 0;
  for (CIEC_WORD element : ciec.var_static_array_with_indexation3) {
    static_array_with_indexation3[counter] = static_cast<TForteWord>(element);
    counter++;
  }
  dds.static_array_with_indexation3(static_array_with_indexation3);

  msg::uint32__2 static_array_with_indexation4 = {};
  counter = 0;
  for (CIEC_DWORD element : ciec.var_static_array_with_indexation4) {
    static_array_with_indexation4[counter] = static_cast<TForteDWord>(element);
    counter++;
  }
  dds.static_array_with_indexation4(static_array_with_indexation4);

  msg::uint64__2 static_array_with_indexation5 = {};
  counter = 0;
  for (CIEC_LWORD element : ciec.var_static_array_with_indexation5) {
    static_array_with_indexation5[counter] = static_cast<TForteLWord>(element);
    counter++;
  }
  dds.static_array_with_indexation5(static_array_with_indexation5);

  msg::int8__2 static_array_with_indexation6 = {};
  counter = 0;
  for (CIEC_SINT element : ciec.var_static_array_with_indexation6) {
    static_array_with_indexation6[counter] = static_cast<TForteInt8>(element);
    counter++;
  }
  dds.static_array_with_indexation6(static_array_with_indexation6);

  msg::int16__2 static_array_with_indexation7 = {};
  counter = 0;
  for (CIEC_INT element : ciec.var_static_array_with_indexation7) {
    static_array_with_indexation7[counter] = static_cast<TForteInt16>(element);
    counter++;
  }
  dds.static_array_with_indexation7(static_array_with_indexation7);

  msg::int32__2 static_array_with_indexation8 = {};
  counter = 0;
  for (CIEC_DINT element : ciec.var_static_array_with_indexation8) {
    static_array_with_indexation8[counter] = static_cast<TForteInt32>(element);
    counter++;
  }
  dds.static_array_with_indexation8(static_array_with_indexation8);

  msg::int64__2 static_array_with_indexation9 = {};
  counter = 0;
  for (CIEC_LINT element : ciec.var_static_array_with_indexation9) {
    static_array_with_indexation9[counter] = static_cast<TForteInt64>(element);
    counter++;
  }
  dds.static_array_with_indexation9(static_array_with_indexation9);

  msg::uint8__2 static_array_with_indexation10 = {};
  counter = 0;
  for (CIEC_USINT element : ciec.var_static_array_with_indexation10) {
    static_array_with_indexation10[counter] = static_cast<TForteUInt8>(element);
    counter++;
  }
  dds.static_array_with_indexation10(static_array_with_indexation10);

  msg::uint16__2 static_array_with_indexation11 = {};
  counter = 0;
  for (CIEC_UINT element : ciec.var_static_array_with_indexation11) {
    static_array_with_indexation11[counter] = static_cast<TForteUInt16>(element);
    counter++;
  }
  dds.static_array_with_indexation11(static_array_with_indexation11);

  msg::uint32__2 static_array_with_indexation12 = {};
  counter = 0;
  for (CIEC_UDINT element : ciec.var_static_array_with_indexation12) {
    static_array_with_indexation12[counter] = static_cast<TForteUInt32>(element);
    counter++;
  }
  dds.static_array_with_indexation12(static_array_with_indexation12);

  msg::uint64__2 static_array_with_indexation13 = {};
  counter = 0;
  for (CIEC_ULINT element : ciec.var_static_array_with_indexation13) {
    static_array_with_indexation13[counter] = static_cast<TForteUInt64>(element);
    counter++;
  }
  dds.static_array_with_indexation13(static_array_with_indexation13);

  msg::float__2 static_array_with_indexation14 = {};
  counter = 0;
  for (CIEC_REAL element : ciec.var_static_array_with_indexation14) {
    static_array_with_indexation14[counter] = static_cast<TForteFloat>(element);
    counter++;
  }
  dds.static_array_with_indexation14(static_array_with_indexation14);

  msg::double__2 static_array_with_indexation15 = {};
  counter = 0;
  for (CIEC_LREAL element : ciec.var_static_array_with_indexation15) {
    static_array_with_indexation15[counter] = static_cast<TForteDFloat>(element);
    counter++;
  }
  dds.static_array_with_indexation15(static_array_with_indexation15);

  msg::uint8__2 static_array_with_indexation16 = {};
  counter = 0;
  for (CIEC_CHAR element : ciec.var_static_array_with_indexation16) {
    static_array_with_indexation16[counter] = static_cast<TForteChar>(element);
    counter++;
  }
  dds.static_array_with_indexation16(static_array_with_indexation16);

  msg::string__2 static_array_with_indexation17 = {};
  counter = 0;
  for (CIEC_STRING element : ciec.var_static_array_with_indexation17) {
    static_array_with_indexation17[counter] = element.getStorage();
    counter++;
  }
  dds.static_array_with_indexation17(static_array_with_indexation17);

//  msg::wstring__2 static_array_with_indexation18 = {};
//  counter = 0;
//  for (CIEC_WSTRING element : ciec.var_static_array_with_indexation18) {
//    static_array_with_indexation18[counter] = element.toString();
//    counter++;
//  }
//  dds.static_array_with_indexation18(static_array_with_indexation18);

  return dds;
}

CIEC_Iec61499Arrayspezifikationen2 conversion_tests::Iec61499Arrayspezifikationen2PubSub::dds2ciec(
    const msg::Iec61499Arrayspezifikationen2 &dds) {
  CIEC_Iec61499Arrayspezifikationen2 ciec;

  CIEC_ARRAY_FIXED<CIEC_BOOL, -1, 0> static_array_with_indexation1 = {};
  intmax_t counter = 0;
  for (bool element : dds.static_array_with_indexation1()) {
    static_array_with_indexation1[counter-1] = CIEC_BOOL(element);
    counter++;
  }
  ciec.var_static_array_with_indexation1 = static_array_with_indexation1;
  auto indexation1LowerBound = ciec.var_static_array_with_indexation1.getLowerBound();
  auto indexation1UpperBound = ciec.var_static_array_with_indexation1.getUpperBound();
  char sendDebug[1024] = {};
  ciec.var_static_array_with_indexation1.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation1: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation1 Lower Bound: %ld\n", indexation1LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation2 Upper Bound: %ld\n", indexation1UpperBound);

  CIEC_ARRAY_FIXED<CIEC_BYTE, -1, 0> static_array_with_indexation2 = {};
  counter = 0;
  for (uint8_t element : dds.static_array_with_indexation2()) {
    static_array_with_indexation2[counter-1] = CIEC_BYTE(element);
    counter++;
  }
  ciec.var_static_array_with_indexation2 = static_array_with_indexation2;
  auto indexation2LowerBound = ciec.var_static_array_with_indexation2.getLowerBound();
  auto indexation2UpperBound = ciec.var_static_array_with_indexation2.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation2.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation2: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation2 Lower Bound: %ld\n", indexation2LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation2 Upper Bound: %ld\n", indexation2UpperBound);

  CIEC_ARRAY_FIXED<CIEC_WORD, -1, 0> static_array_with_indexation3 = {};
  counter = 0;
  for (uint16_t element : dds.static_array_with_indexation3()) {
    static_array_with_indexation3[counter-1] = CIEC_WORD(element);
    counter++;
  }
  ciec.var_static_array_with_indexation3 = static_array_with_indexation3;
  auto indexation3LowerBound = ciec.var_static_array_with_indexation3.getLowerBound();
  auto indexation3UpperBound = ciec.var_static_array_with_indexation3.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation3.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation3: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation3 Lower Bound: %ld\n", indexation3LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation3 Upper Bound: %ld\n", indexation3UpperBound);

  CIEC_ARRAY_FIXED<CIEC_DWORD, -1, 0> static_array_with_indexation4 = {};
  counter = 0;
  for (uint32_t element : dds.static_array_with_indexation4()) {
    static_array_with_indexation4[counter-1] = CIEC_DWORD(element);
    counter++;
  }
  ciec.var_static_array_with_indexation4 = static_array_with_indexation4;
  auto indexation4LowerBound = ciec.var_static_array_with_indexation4.getLowerBound();
  auto indexation4UpperBound = ciec.var_static_array_with_indexation4.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation4.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation4: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation4 Lower Bound: %ld\n", indexation4LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation4 Upper Bound: %ld\n", indexation4UpperBound);

  CIEC_ARRAY_FIXED<CIEC_LWORD, -1, 0> static_array_with_indexation5 = {};
  counter = 0;
  for (uint64_t element : dds.static_array_with_indexation5()) {
    static_array_with_indexation5[counter-1] = CIEC_LWORD(element);
    counter++;
  }
  ciec.var_static_array_with_indexation5 = static_array_with_indexation5;
  auto indexation5LowerBound = ciec.var_static_array_with_indexation5.getLowerBound();
  auto indexation5UpperBound = ciec.var_static_array_with_indexation5.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation5.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation5: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation5 Lower Bound: %ld\n", indexation5LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation5 Upper Bound: %ld\n", indexation5UpperBound);

  CIEC_ARRAY_FIXED<CIEC_SINT, -1, 0> static_array_with_indexation6 = {};
  counter = 0;
  for (int8_t element : dds.static_array_with_indexation6()) {
    static_array_with_indexation6[counter-1] = CIEC_SINT(element);
    counter++;
  }
  ciec.var_static_array_with_indexation6 = static_array_with_indexation6;
  auto indexation6LowerBound = ciec.var_static_array_with_indexation6.getLowerBound();
  auto indexation6UpperBound = ciec.var_static_array_with_indexation6.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation6.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation6: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation6 Lower Bound: %ld\n", indexation6LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation6 Upper Bound: %ld\n", indexation6UpperBound);

  CIEC_ARRAY_FIXED<CIEC_INT, -1, 0> static_array_with_indexation7 = {};
  counter = 0;
  for (int16_t element : dds.static_array_with_indexation7()) {
    static_array_with_indexation7[counter-1] = CIEC_INT(element);
    counter++;
  }
  ciec.var_static_array_with_indexation7 = static_array_with_indexation7;
  auto indexation7LowerBound = ciec.var_static_array_with_indexation7.getLowerBound();
  auto indexation7UpperBound = ciec.var_static_array_with_indexation7.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation7.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation7: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation7 Lower Bound: %ld\n", indexation7LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation7 Upper Bound: %ld\n", indexation7UpperBound);

  CIEC_ARRAY_FIXED<CIEC_DINT, -1, 0> static_array_with_indexation8 = {};
  counter = 0;
  for (int32_t element : dds.static_array_with_indexation8()) {
    static_array_with_indexation8[counter-1] = CIEC_DINT(element);
    counter++;
  }
  ciec.var_static_array_with_indexation8 = static_array_with_indexation8;
  auto indexation8LowerBound = ciec.var_static_array_with_indexation8.getLowerBound();
  auto indexation8UpperBound = ciec.var_static_array_with_indexation8.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation8.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation8: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation8 Lower Bound: %ld\n", indexation8LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation8 Upper Bound: %ld\n", indexation8UpperBound);

  CIEC_ARRAY_FIXED<CIEC_LINT, -1, 0> static_array_with_indexation9 = {};
  counter = 0;
  for (int64_t element : dds.static_array_with_indexation9()) {
    static_array_with_indexation9[counter-1] = CIEC_LINT(element);
    counter++;
  }
  ciec.var_static_array_with_indexation9 = static_array_with_indexation9;
  auto indexation9LowerBound = ciec.var_static_array_with_indexation9.getLowerBound();
  auto indexation9UpperBound = ciec.var_static_array_with_indexation9.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation9.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation9: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation9 Lower Bound: %ld\n", indexation9LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation9 Upper Bound: %ld\n", indexation9UpperBound);

  CIEC_ARRAY_FIXED<CIEC_USINT, -1, 0> static_array_with_indexation10 = {};
  counter = 0;
  for (uint8_t element : dds.static_array_with_indexation10()) {
    static_array_with_indexation10[counter-1] = CIEC_USINT(element);
    counter++;
  }
  ciec.var_static_array_with_indexation10 = static_array_with_indexation10;
  auto indexation10LowerBound = ciec.var_static_array_with_indexation10.getLowerBound();
  auto indexation10UpperBound = ciec.var_static_array_with_indexation10.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation10.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation10: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation10 Lower Bound: %ld\n", indexation10LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation10 Upper Bound: %ld\n", indexation10UpperBound);

  CIEC_ARRAY_FIXED<CIEC_UINT, -1, 0> static_array_with_indexation11 = {};
  counter = 0;
  for (uint16_t element : dds.static_array_with_indexation11()) {
    static_array_with_indexation11[counter-1] = CIEC_UINT(element);
    counter++;
  }
  ciec.var_static_array_with_indexation11 = static_array_with_indexation11;
  auto indexation11LowerBound = ciec.var_static_array_with_indexation11.getLowerBound();
  auto indexation11UpperBound = ciec.var_static_array_with_indexation11.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation11.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation11: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation11 Lower Bound: %ld\n", indexation11LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation11 Upper Bound: %ld\n", indexation11UpperBound);

  CIEC_ARRAY_FIXED<CIEC_UDINT, -1, 0> static_array_with_indexation12 = {};
  counter = 0;
  for (uint32_t element : dds.static_array_with_indexation12()) {
    static_array_with_indexation12[counter-1] = CIEC_UDINT(element);
    counter++;
  }
  ciec.var_static_array_with_indexation12 = static_array_with_indexation12;
  auto indexation12LowerBound = ciec.var_static_array_with_indexation12.getLowerBound();
  auto indexation12UpperBound = ciec.var_static_array_with_indexation12.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation12.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation12: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation12 Lower Bound: %ld\n", indexation12LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation12 Upper Bound: %ld\n", indexation12UpperBound);

  CIEC_ARRAY_FIXED<CIEC_ULINT, -1, 0> static_array_with_indexation13 = {};
  counter = 0;
  for (uint64_t element : dds.static_array_with_indexation13()) {
    static_array_with_indexation13[counter-1] = CIEC_ULINT(element);
    counter++;
  }
  ciec.var_static_array_with_indexation13 = static_array_with_indexation13;
  auto indexation13LowerBound = ciec.var_static_array_with_indexation13.getLowerBound();
  auto indexation13UpperBound = ciec.var_static_array_with_indexation13.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation13.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation13: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation13 Lower Bound: %ld\n", indexation13LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation13 Upper Bound: %ld\n", indexation13UpperBound);

  CIEC_ARRAY_FIXED<CIEC_REAL, -1, 0> static_array_with_indexation14 = {};
  counter = 0;
  for (float element : dds.static_array_with_indexation14()) {
    static_array_with_indexation14[counter-1] = CIEC_REAL(element);
    counter++;
  }
  ciec.var_static_array_with_indexation14 = static_array_with_indexation14;
  auto indexation14LowerBound = ciec.var_static_array_with_indexation14.getLowerBound();
  auto indexation14UpperBound = ciec.var_static_array_with_indexation14.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation14.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation14: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation14 Lower Bound: %ld\n", indexation14LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation14 Upper Bound: %ld\n", indexation14UpperBound);

  CIEC_ARRAY_FIXED<CIEC_LREAL, -1, 0> static_array_with_indexation15 = {};
  counter = 0;
  for (double element : dds.static_array_with_indexation15()) {
    static_array_with_indexation15[counter-1] = CIEC_LREAL(element);
    counter++;
  }
  ciec.var_static_array_with_indexation15 = static_array_with_indexation15;
  auto indexation15LowerBound = ciec.var_static_array_with_indexation15.getLowerBound();
  auto indexation15UpperBound = ciec.var_static_array_with_indexation15.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation15.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation15: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation15 Lower Bound: %ld\n", indexation15LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation15 Upper Bound: %ld\n", indexation15UpperBound);

  CIEC_ARRAY_FIXED<CIEC_CHAR, -1, 0> static_array_with_indexation16 = {};
  counter = 0;
  for (uint8_t element : dds.static_array_with_indexation16()) {
    static_array_with_indexation16[counter-1] = CIEC_CHAR(element);
    counter++;
  }
  ciec.var_static_array_with_indexation16 = static_array_with_indexation16;
  auto indexation16LowerBound = ciec.var_static_array_with_indexation16.getLowerBound();
  auto indexation16UpperBound = ciec.var_static_array_with_indexation16.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation16.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation16: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation16 Lower Bound: %ld\n", indexation16LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation16 Upper Bound: %ld\n", indexation16UpperBound);

  CIEC_ARRAY_FIXED<CIEC_STRING, -1, 0> static_array_with_indexation17 = {};
  counter = 0;
  for (std::string element : dds.static_array_with_indexation17()) {
    static_array_with_indexation17[counter-1] = CIEC_STRING(element);
    counter++;
  }
  ciec.var_static_array_with_indexation17 = static_array_with_indexation17;
  auto indexation17LowerBound = ciec.var_static_array_with_indexation17.getLowerBound();
  auto indexation17UpperBound = ciec.var_static_array_with_indexation17.getUpperBound();
  sendDebug[1024] = {};
  ciec.var_static_array_with_indexation17.toString(sendDebug, sizeof(sendDebug));
  DEVLOG_DEBUG("var_static_array_with_indexation17: %s \n", sendDebug);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation17 Lower Bound: %ld\n", indexation17LowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation17 Upper Bound: %ld\n", indexation17UpperBound);

//  CIEC_ARRAY_FIXED<CIEC_BOOL, -1, 0> static_array_with_indexation18 = {};
//  counter = 0;
//  for (bool element : dds.static_array_with_indexation18()) {
//    static_array_with_indexation18[counter-1] = CIEC_BOOL(element);
//    counter++;
//  }
//  ciec.var_static_array_with_indexation18 = static_array_with_indexation18;
//  auto indexation18LowerBound = ciec.var_static_array_with_indexation18.getLowerBound();
//  auto indexation18UpperBound = ciec.var_static_array_with_indexation18.getUpperBound();
//  DEVLOG_DEBUG("ciec.var_static_array_with_indexation18 Lower Bound: %ld\n", indexation18LowerBound);
//  DEVLOG_DEBUG("ciec.var_static_array_with_indexation18 Upper Bound: %ld\n", indexation18UpperBound);

  return ciec;
}

