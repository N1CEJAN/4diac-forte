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

std::string wstring2String(const std::wstring& wstr) {
  // Convert std::wstring to UTF-8 std::string
  std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
  std::string utf8String = converter.to_bytes(wstr);

  // Reverse the bytes in the resulting UTF-8 std::string
  std::reverse(utf8String.begin(), utf8String.end());

  return utf8String;
}

CIEC_WSTRING convertWstring2CIEC_WSTRING(const std::wstring& wstr) {
  // Create a buffer for the UTF-16 representation
  const auto utf16Buffer = reinterpret_cast<const TForteWChar*>(wstr.data());
  const auto bufferLength = static_cast<unsigned int>(wstr.length());

  // Initialize the CIEC_WSTRING object
  CIEC_WSTRING ciec_wstring;

  // Convert from UTF-16 to the internal representation used by CIEC_WSTRING
  if (!ciec_wstring.fromUTF16(utf16Buffer, bufferLength)) {
    std::cerr << "Error: Conversion from std::wstring to CIEC_WSTRING failed." << std::endl;
  }

  return ciec_wstring;
}

std::wstring convertCIEC_WSTRING2Wstring(const CIEC_WSTRING& ciec_wstring) {
  // Step 1: Determine the required buffer size
  const int bufferSize = ciec_wstring.toUTF16(nullptr, 0);
  if (bufferSize < 0) {
    std::cerr << "Error: Failed to determine buffer size for UTF-16 conversion." << std::endl;
    return L"";
  }

  // Step 2: Allocate buffer to hold UTF-16 encoded data
  std::vector<uint16_t> utf16Buffer(bufferSize / 2);  // Buffer size divided by 2 because UTF-16 is 2 bytes per character

  // Step 3: Perform the conversion
  if (ciec_wstring.toUTF16(reinterpret_cast<TForteByte*>(utf16Buffer.data()), bufferSize) < 0) {
    std::cerr << "Error: UTF-16 conversion failed." << std::endl;
    return L"";
  }

  // Step 4: Create std::wstring from UTF-16 data
  std::wstring result(utf16Buffer.begin(), utf16Buffer.end());

  return result;
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