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
 * @file Ros2Arrayspezifikationen.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_CONVERSION_TESTS_MSG_ROS2ARRAYSPEZIFIKATIONEN_H_
#define _FAST_DDS_GENERATED_CONVERSION_TESTS_MSG_ROS2ARRAYSPEZIFIKATIONEN_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(ROS2ARRAYSPEZIFIKATIONEN_SOURCE)
#define ROS2ARRAYSPEZIFIKATIONEN_DllAPI __declspec( dllexport )
#else
#define ROS2ARRAYSPEZIFIKATIONEN_DllAPI __declspec( dllimport )
#endif // ROS2ARRAYSPEZIFIKATIONEN_SOURCE
#else
#define ROS2ARRAYSPEZIFIKATIONEN_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define ROS2ARRAYSPEZIFIKATIONEN_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace conversion_tests {
    namespace msg {
        typedef std::array<bool, 2> boolean__2;
        /*!
         * @brief This class represents the structure Ros2Arrayspezifikationen defined by the user in the IDL file.
         * @ingroup Ros2Arrayspezifikationen
         */
        class Ros2Arrayspezifikationen
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Ros2Arrayspezifikationen();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Ros2Arrayspezifikationen();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object conversion_tests::msg::Ros2Arrayspezifikationen that will be copied.
             */
            eProsima_user_DllExport Ros2Arrayspezifikationen(
                    const Ros2Arrayspezifikationen& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object conversion_tests::msg::Ros2Arrayspezifikationen that will be copied.
             */
            eProsima_user_DllExport Ros2Arrayspezifikationen(
                    Ros2Arrayspezifikationen&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object conversion_tests::msg::Ros2Arrayspezifikationen that will be copied.
             */
            eProsima_user_DllExport Ros2Arrayspezifikationen& operator =(
                    const Ros2Arrayspezifikationen& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object conversion_tests::msg::Ros2Arrayspezifikationen that will be copied.
             */
            eProsima_user_DllExport Ros2Arrayspezifikationen& operator =(
                    Ros2Arrayspezifikationen&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x conversion_tests::msg::Ros2Arrayspezifikationen object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Ros2Arrayspezifikationen& x) const;

            /*!
             * @brief Comparison operator.
             * @param x conversion_tests::msg::Ros2Arrayspezifikationen object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Ros2Arrayspezifikationen& x) const;

            /*!
             * @brief This function copies the value in member static_array
             * @param _static_array New value to be copied in member static_array
             */
            eProsima_user_DllExport void static_array(
                    const conversion_tests::msg::boolean__2& _static_array);

            /*!
             * @brief This function moves the value in member static_array
             * @param _static_array New value to be moved in member static_array
             */
            eProsima_user_DllExport void static_array(
                    conversion_tests::msg::boolean__2&& _static_array);

            /*!
             * @brief This function returns a constant reference to member static_array
             * @return Constant reference to member static_array
             */
            eProsima_user_DllExport const conversion_tests::msg::boolean__2& static_array() const;

            /*!
             * @brief This function returns a reference to member static_array
             * @return Reference to member static_array
             */
            eProsima_user_DllExport conversion_tests::msg::boolean__2& static_array();
            /*!
             * @brief This function copies the value in member dynamic_array
             * @param _dynamic_array New value to be copied in member dynamic_array
             */
            eProsima_user_DllExport void dynamic_array(
                    const std::vector<bool>& _dynamic_array);

            /*!
             * @brief This function moves the value in member dynamic_array
             * @param _dynamic_array New value to be moved in member dynamic_array
             */
            eProsima_user_DllExport void dynamic_array(
                    std::vector<bool>&& _dynamic_array);

            /*!
             * @brief This function returns a constant reference to member dynamic_array
             * @return Constant reference to member dynamic_array
             */
            eProsima_user_DllExport const std::vector<bool>& dynamic_array() const;

            /*!
             * @brief This function returns a reference to member dynamic_array
             * @return Reference to member dynamic_array
             */
            eProsima_user_DllExport std::vector<bool>& dynamic_array();
            /*!
             * @brief This function copies the value in member bound_dynamic_array
             * @param _bound_dynamic_array New value to be copied in member bound_dynamic_array
             */
            eProsima_user_DllExport void bound_dynamic_array(
                    const std::vector<eprosima::fastrtps::fixed_string<2>>& _bound_dynamic_array);

            /*!
             * @brief This function moves the value in member bound_dynamic_array
             * @param _bound_dynamic_array New value to be moved in member bound_dynamic_array
             */
            eProsima_user_DllExport void bound_dynamic_array(
                    std::vector<eprosima::fastrtps::fixed_string<2>>&& _bound_dynamic_array);

            /*!
             * @brief This function returns a constant reference to member bound_dynamic_array
             * @return Constant reference to member bound_dynamic_array
             */
            eProsima_user_DllExport const std::vector<eprosima::fastrtps::fixed_string<2>>& bound_dynamic_array() const;

            /*!
             * @brief This function returns a reference to member bound_dynamic_array
             * @return Reference to member bound_dynamic_array
             */
            eProsima_user_DllExport std::vector<eprosima::fastrtps::fixed_string<2>>& bound_dynamic_array();

            /*!
            * @brief This function returns the maximum serialized size of an object
            * depending on the buffer alignment.
            * @param current_alignment Buffer alignment.
            * @return Maximum serialized size.
            */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const conversion_tests::msg::Ros2Arrayspezifikationen& data,
                    size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:

            conversion_tests::msg::boolean__2 m_static_array;
            std::vector<bool> m_dynamic_array;
            std::vector<eprosima::fastrtps::fixed_string<2>> m_bound_dynamic_array;

        };
    } // namespace msg
} // namespace conversion_tests

#endif // _FAST_DDS_GENERATED_CONVERSION_TESTS_MSG_ROS2ARRAYSPEZIFIKATIONEN_H_

