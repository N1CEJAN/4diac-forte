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

#include "convert.h"

#include <iostream>
#include <locale>

#include "forte_char.h"

namespace general_purpose {
namespace msg {

CIEC_WSTRING convertWstring2CIEC_WSTRING(const std::wstring& wstr) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::string utf8Str = converter.to_bytes(wstr);
    return CIEC_WSTRING(utf8Str.c_str());
}

std::wstring convertCIEC_WSTRING2Wstring(const CIEC_WSTRING& ciec_wstring) {
  const char* utf8Str = ciec_wstring.getValue();
  std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
  std::wstring wstr = converter.from_bytes(utf8Str);
  return wstr;
}

} // namespace msg
} // namespace general purpose

namespace unique_identifier_msgs {
namespace msg {

UUID ciec2dds(CIEC_ROS2_unique_identifier_msgs__msg__UUID paCIEC) {
  unique_identifier_msgs::msg::uint8__16 uuidArray = {};
  for (size_t i = 0; i < 16; i++)
    uuidArray[i] = static_cast<unsigned char>(paCIEC.var_uuid[i]);

  UUID uuid;
  uuid.uuid(uuidArray);

  return uuid;
}

CIEC_ROS2_unique_identifier_msgs__msg__UUID dds2ciec(UUID paDDS) {
  unique_identifier_msgs::msg::uint8__16 uuid = paDDS.uuid();

  char fmt[100];
  sprintf(fmt, "(uuid:=[%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d])",
          uuid[0], uuid[1], uuid[2], uuid[3], uuid[4], uuid[5], uuid[6],
          uuid[7], uuid[8], uuid[9], uuid[10], uuid[11], uuid[12], uuid[13],
          uuid[14], uuid[15]);

  CIEC_ROS2_unique_identifier_msgs__msg__UUID ciec;
  ciec.fromString(fmt);

  return ciec;
};

} // namespace msg
} // namespace unique_identifier_msgs