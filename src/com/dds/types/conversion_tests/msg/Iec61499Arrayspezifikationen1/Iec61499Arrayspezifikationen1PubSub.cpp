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
#include <conversion_tests/msg/Iec61499Arrayspezifikationen1_dtp.h>
#include <string>

#include "../../../../util/convert.h"

#include "Iec61499Arrayspezifikationen1PubSub.h"
#include "devlog.h"
#include "forte_struct.h"
#include "stringlist.h"
#include "types/conversion_tests/msg/Iec61499Arrayspezifikationen1/Iec61499Arrayspezifikationen1.h"

#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Iec61499Arrayspezifikationen1PubSub_gen.cpp"
#endif

std::string conversion_tests::Iec61499Arrayspezifikationen1PubSub::registerType(DomainParticipant* paParticipant) {

  this->m_type.register_type(paParticipant);
  return this->m_type.get_type_name();
}

bool conversion_tests::Iec61499Arrayspezifikationen1PubSub::validateType(const CStringDictionary::TStringId typeId) {
  return typeId == g_nStringIdIec61499Arrayspezifikationen1;
}

bool conversion_tests::Iec61499Arrayspezifikationen1PubSub::publish(CIEC_STRUCT* data) {
  const auto ciec = dynamic_cast<CIEC_Iec61499Arrayspezifikationen1 *>(data);
  msg::Iec61499Arrayspezifikationen1 dds = ciec2dds(*ciec);
  return this->write(&dds);
}

std::optional<std::unique_ptr<CIEC_STRUCT>> conversion_tests::Iec61499Arrayspezifikationen1PubSub::receive() {
    conversion_tests::msg::Iec61499Arrayspezifikationen1 dds;
    bool taken;
    this->take(&taken, &dds);
    if (!taken) return std::nullopt;

    auto ciec = std::make_unique<CIEC_Iec61499Arrayspezifikationen1>(dds2ciec(dds));
    std::unique_ptr<CIEC_STRUCT> ptr = std::move(ciec);

    return std::make_optional(std::move(ptr));
}

conversion_tests::msg::Iec61499Arrayspezifikationen1 conversion_tests::Iec61499Arrayspezifikationen1PubSub::ciec2dds(
    const CIEC_Iec61499Arrayspezifikationen1 &ciec) {
  msg::Iec61499Arrayspezifikationen1 dds;

  msg::boolean__3 static_array_with_capacity = {};
  size_t counter = 0;
  for (CIEC_BOOL element : ciec.var_static_array_with_capacity) {
    static_array_with_capacity[counter] = static_cast<bool>(element);
    counter++;
  }
  dds.static_array_with_capacity(static_array_with_capacity);

  msg::boolean__3 static_array_with_indexation = {};
  counter = 0;
  for (CIEC_BOOL element : ciec.var_static_array_with_indexation) {
    static_array_with_indexation[counter] = static_cast<bool>(element);
    counter++;
  }
  dds.static_array_with_indexation(static_array_with_indexation);

  return dds;
}

CIEC_Iec61499Arrayspezifikationen1 conversion_tests::Iec61499Arrayspezifikationen1PubSub::dds2ciec(
    const msg::Iec61499Arrayspezifikationen1 &dds) {
  CIEC_Iec61499Arrayspezifikationen1 ciec;

  CIEC_ARRAY_FIXED<CIEC_BOOL, 0, 2> static_array_with_capacity = {};
  intmax_t counter = 0;
  for (bool element : dds.static_array_with_capacity()) {
    static_array_with_capacity[counter] = CIEC_BOOL(element);
    counter++;
  }
  ciec.var_static_array_with_capacity = static_array_with_capacity;
  auto capacityLowerBound = ciec.var_static_array_with_capacity.getLowerBound();
  auto capacityUpperBound = ciec.var_static_array_with_capacity.getUpperBound();
  DEVLOG_DEBUG("ciec.var_static_array_with_capacity Lower Bound: %ld\n", capacityLowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_capacity Upper Bound: %ld\n", capacityUpperBound);

  CIEC_ARRAY_FIXED<CIEC_BOOL, -1, 1> static_array_with_indexation = {};
  counter = 0;
  for (bool element : dds.static_array_with_indexation()) {
    static_array_with_indexation[counter-1] = CIEC_BOOL(element);
    counter++;
  }
  ciec.var_static_array_with_indexation = static_array_with_indexation;
  auto indexationLowerBound = ciec.var_static_array_with_indexation.getLowerBound();
  auto indexationUpperBound = ciec.var_static_array_with_indexation.getUpperBound();
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation Lower Bound: %ld\n", indexationLowerBound);
  DEVLOG_DEBUG("ciec.var_static_array_with_indexation Upper Bound: %ld\n", indexationUpperBound);

  return ciec;
}

