// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file UUID.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "UUID.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define unique_identifier_msgs_msg_UUID_max_cdr_typesize 17ULL;

#define unique_identifier_msgs_msg_UUID_max_key_cdr_typesize 0ULL;



unique_identifier_msgs::msg::UUID::UUID()
{
    // unique_identifier_msgs::msg::uint8__16 m_uuid
    memset(&m_uuid, 0, (16) * 1);

}

unique_identifier_msgs::msg::UUID::~UUID()
{
}

unique_identifier_msgs::msg::UUID::UUID(
        const UUID& x)
{
    m_uuid = x.m_uuid;
}

unique_identifier_msgs::msg::UUID::UUID(
        UUID&& x) noexcept 
{
    m_uuid = std::move(x.m_uuid);
}

unique_identifier_msgs::msg::UUID& unique_identifier_msgs::msg::UUID::operator =(
        const UUID& x)
{

    m_uuid = x.m_uuid;

    return *this;
}

unique_identifier_msgs::msg::UUID& unique_identifier_msgs::msg::UUID::operator =(
        UUID&& x) noexcept
{

    m_uuid = std::move(x.m_uuid);

    return *this;
}

bool unique_identifier_msgs::msg::UUID::operator ==(
        const UUID& x) const
{

    return (m_uuid == x.m_uuid);
}

bool unique_identifier_msgs::msg::UUID::operator !=(
        const UUID& x) const
{
    return !(*this == x);
}

size_t unique_identifier_msgs::msg::UUID::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return unique_identifier_msgs_msg_UUID_max_cdr_typesize;
}

size_t unique_identifier_msgs::msg::UUID::getCdrSerializedSize(
        const unique_identifier_msgs::msg::UUID& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    if ((16) > 0)
    {
        current_alignment += ((16) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    return current_alignment - initial_alignment;
}

void unique_identifier_msgs::msg::UUID::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_uuid;


}

void unique_identifier_msgs::msg::UUID::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_uuid;

}

/*!
 * @brief This function copies the value in member uuid
 * @param _uuid New value to be copied in member uuid
 */
void unique_identifier_msgs::msg::UUID::uuid(
        const unique_identifier_msgs::msg::uint8__16& _uuid)
{
    m_uuid = _uuid;
}

/*!
 * @brief This function moves the value in member uuid
 * @param _uuid New value to be moved in member uuid
 */
void unique_identifier_msgs::msg::UUID::uuid(
        unique_identifier_msgs::msg::uint8__16&& _uuid)
{
    m_uuid = std::move(_uuid);
}

/*!
 * @brief This function returns a constant reference to member uuid
 * @return Constant reference to member uuid
 */
const unique_identifier_msgs::msg::uint8__16& unique_identifier_msgs::msg::UUID::uuid() const
{
    return m_uuid;
}

/*!
 * @brief This function returns a reference to member uuid
 * @return Reference to member uuid
 */
unique_identifier_msgs::msg::uint8__16& unique_identifier_msgs::msg::UUID::uuid()
{
    return m_uuid;
}


size_t unique_identifier_msgs::msg::UUID::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return unique_identifier_msgs_msg_UUID_max_key_cdr_typesize;
}

bool unique_identifier_msgs::msg::UUID::isKeyDefined()
{
    return false;
}

void unique_identifier_msgs::msg::UUID::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

