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
 * @file Ros2DynamischesArray1.cpp
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

#include "Ros2DynamischesArray1.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define conversion_tests_msg_Ros2DynamischesArray1_max_cdr_typesize 104ULL;
#define conversion_tests_msg_Ros2DynamischesArray1_max_key_cdr_typesize 0ULL;

conversion_tests::msg::Ros2DynamischesArray1::Ros2DynamischesArray1()
{
    // sequence<int8> m_dynamic_array


}

conversion_tests::msg::Ros2DynamischesArray1::~Ros2DynamischesArray1()
{
}

conversion_tests::msg::Ros2DynamischesArray1::Ros2DynamischesArray1(
        const Ros2DynamischesArray1& x)
{
    m_dynamic_array = x.m_dynamic_array;
}

conversion_tests::msg::Ros2DynamischesArray1::Ros2DynamischesArray1(
        Ros2DynamischesArray1&& x) noexcept 
{
    m_dynamic_array = std::move(x.m_dynamic_array);
}

conversion_tests::msg::Ros2DynamischesArray1& conversion_tests::msg::Ros2DynamischesArray1::operator =(
        const Ros2DynamischesArray1& x)
{

    m_dynamic_array = x.m_dynamic_array;

    return *this;
}

conversion_tests::msg::Ros2DynamischesArray1& conversion_tests::msg::Ros2DynamischesArray1::operator =(
        Ros2DynamischesArray1&& x) noexcept
{

    m_dynamic_array = std::move(x.m_dynamic_array);

    return *this;
}

bool conversion_tests::msg::Ros2DynamischesArray1::operator ==(
        const Ros2DynamischesArray1& x) const
{

    return (m_dynamic_array == x.m_dynamic_array);
}

bool conversion_tests::msg::Ros2DynamischesArray1::operator !=(
        const Ros2DynamischesArray1& x) const
{
    return !(*this == x);
}

size_t conversion_tests::msg::Ros2DynamischesArray1::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return conversion_tests_msg_Ros2DynamischesArray1_max_cdr_typesize;
}

size_t conversion_tests::msg::Ros2DynamischesArray1::getCdrSerializedSize(
        const conversion_tests::msg::Ros2DynamischesArray1& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.dynamic_array().size() > 0)
    {
        current_alignment += (data.dynamic_array().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    return current_alignment - initial_alignment;
}

void conversion_tests::msg::Ros2DynamischesArray1::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_dynamic_array;
}

void conversion_tests::msg::Ros2DynamischesArray1::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_dynamic_array;}

/*!
 * @brief This function copies the value in member dynamic_array
 * @param _dynamic_array New value to be copied in member dynamic_array
 */
void conversion_tests::msg::Ros2DynamischesArray1::dynamic_array(
        const std::vector<int8_t>& _dynamic_array)
{
    m_dynamic_array = _dynamic_array;
}

/*!
 * @brief This function moves the value in member dynamic_array
 * @param _dynamic_array New value to be moved in member dynamic_array
 */
void conversion_tests::msg::Ros2DynamischesArray1::dynamic_array(
        std::vector<int8_t>&& _dynamic_array)
{
    m_dynamic_array = std::move(_dynamic_array);
}

/*!
 * @brief This function returns a constant reference to member dynamic_array
 * @return Constant reference to member dynamic_array
 */
const std::vector<int8_t>& conversion_tests::msg::Ros2DynamischesArray1::dynamic_array() const
{
    return m_dynamic_array;
}

/*!
 * @brief This function returns a reference to member dynamic_array
 * @return Reference to member dynamic_array
 */
std::vector<int8_t>& conversion_tests::msg::Ros2DynamischesArray1::dynamic_array()
{
    return m_dynamic_array;
}


size_t conversion_tests::msg::Ros2DynamischesArray1::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return conversion_tests_msg_Ros2DynamischesArray1_max_key_cdr_typesize;
}

bool conversion_tests::msg::Ros2DynamischesArray1::isKeyDefined()
{
    return false;
}

void conversion_tests::msg::Ros2DynamischesArray1::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}



