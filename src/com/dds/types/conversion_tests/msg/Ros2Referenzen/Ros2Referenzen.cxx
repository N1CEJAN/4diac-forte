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
 * @file Ros2Referenzen.cpp
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

#include "Ros2Referenzen.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define conversion_tests_msg_Ros2Referenzen_max_cdr_typesize 2724ULL;
#define conversion_tests_msg_Ros2PrimitiveDatentypen_max_cdr_typesize 1364ULL;
#define conversion_tests_msg_Ros2Referenzen_max_key_cdr_typesize 0ULL;
#define conversion_tests_msg_Ros2PrimitiveDatentypen_max_key_cdr_typesize 0ULL;

conversion_tests::msg::Ros2Referenzen::Ros2Referenzen()
{
    // conversion_tests::msg::Ros2PrimitiveDatentypen m_absolute_reference

    // conversion_tests::msg::Ros2PrimitiveDatentypen m_relative_reference


}

conversion_tests::msg::Ros2Referenzen::~Ros2Referenzen()
{


}

conversion_tests::msg::Ros2Referenzen::Ros2Referenzen(
        const Ros2Referenzen& x)
{
    m_absolute_reference = x.m_absolute_reference;
    m_relative_reference = x.m_relative_reference;
}

conversion_tests::msg::Ros2Referenzen::Ros2Referenzen(
        Ros2Referenzen&& x) noexcept 
{
    m_absolute_reference = std::move(x.m_absolute_reference);
    m_relative_reference = std::move(x.m_relative_reference);
}

conversion_tests::msg::Ros2Referenzen& conversion_tests::msg::Ros2Referenzen::operator =(
        const Ros2Referenzen& x)
{

    m_absolute_reference = x.m_absolute_reference;
    m_relative_reference = x.m_relative_reference;

    return *this;
}

conversion_tests::msg::Ros2Referenzen& conversion_tests::msg::Ros2Referenzen::operator =(
        Ros2Referenzen&& x) noexcept
{

    m_absolute_reference = std::move(x.m_absolute_reference);
    m_relative_reference = std::move(x.m_relative_reference);

    return *this;
}

bool conversion_tests::msg::Ros2Referenzen::operator ==(
        const Ros2Referenzen& x) const
{

    return (m_absolute_reference == x.m_absolute_reference && m_relative_reference == x.m_relative_reference);
}

bool conversion_tests::msg::Ros2Referenzen::operator !=(
        const Ros2Referenzen& x) const
{
    return !(*this == x);
}

size_t conversion_tests::msg::Ros2Referenzen::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return conversion_tests_msg_Ros2Referenzen_max_cdr_typesize;
}

size_t conversion_tests::msg::Ros2Referenzen::getCdrSerializedSize(
        const conversion_tests::msg::Ros2Referenzen& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += conversion_tests::msg::Ros2PrimitiveDatentypen::getCdrSerializedSize(data.absolute_reference(), current_alignment);
    current_alignment += conversion_tests::msg::Ros2PrimitiveDatentypen::getCdrSerializedSize(data.relative_reference(), current_alignment);

    return current_alignment - initial_alignment;
}

void conversion_tests::msg::Ros2Referenzen::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_absolute_reference;
    scdr << m_relative_reference;

}

void conversion_tests::msg::Ros2Referenzen::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_absolute_reference;
    dcdr >> m_relative_reference;
}

/*!
 * @brief This function copies the value in member absolute_reference
 * @param _absolute_reference New value to be copied in member absolute_reference
 */
void conversion_tests::msg::Ros2Referenzen::absolute_reference(
        const conversion_tests::msg::Ros2PrimitiveDatentypen& _absolute_reference)
{
    m_absolute_reference = _absolute_reference;
}

/*!
 * @brief This function moves the value in member absolute_reference
 * @param _absolute_reference New value to be moved in member absolute_reference
 */
void conversion_tests::msg::Ros2Referenzen::absolute_reference(
        conversion_tests::msg::Ros2PrimitiveDatentypen&& _absolute_reference)
{
    m_absolute_reference = std::move(_absolute_reference);
}

/*!
 * @brief This function returns a constant reference to member absolute_reference
 * @return Constant reference to member absolute_reference
 */
const conversion_tests::msg::Ros2PrimitiveDatentypen& conversion_tests::msg::Ros2Referenzen::absolute_reference() const
{
    return m_absolute_reference;
}

/*!
 * @brief This function returns a reference to member absolute_reference
 * @return Reference to member absolute_reference
 */
conversion_tests::msg::Ros2PrimitiveDatentypen& conversion_tests::msg::Ros2Referenzen::absolute_reference()
{
    return m_absolute_reference;
}
/*!
 * @brief This function copies the value in member relative_reference
 * @param _relative_reference New value to be copied in member relative_reference
 */
void conversion_tests::msg::Ros2Referenzen::relative_reference(
        const conversion_tests::msg::Ros2PrimitiveDatentypen& _relative_reference)
{
    m_relative_reference = _relative_reference;
}

/*!
 * @brief This function moves the value in member relative_reference
 * @param _relative_reference New value to be moved in member relative_reference
 */
void conversion_tests::msg::Ros2Referenzen::relative_reference(
        conversion_tests::msg::Ros2PrimitiveDatentypen&& _relative_reference)
{
    m_relative_reference = std::move(_relative_reference);
}

/*!
 * @brief This function returns a constant reference to member relative_reference
 * @return Constant reference to member relative_reference
 */
const conversion_tests::msg::Ros2PrimitiveDatentypen& conversion_tests::msg::Ros2Referenzen::relative_reference() const
{
    return m_relative_reference;
}

/*!
 * @brief This function returns a reference to member relative_reference
 * @return Reference to member relative_reference
 */
conversion_tests::msg::Ros2PrimitiveDatentypen& conversion_tests::msg::Ros2Referenzen::relative_reference()
{
    return m_relative_reference;
}


size_t conversion_tests::msg::Ros2Referenzen::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return conversion_tests_msg_Ros2Referenzen_max_key_cdr_typesize;
}

bool conversion_tests::msg::Ros2Referenzen::isKeyDefined()
{
    return false;
}

void conversion_tests::msg::Ros2Referenzen::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


