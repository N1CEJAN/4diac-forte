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
 * @file RotateAbsolute.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_TURTLESIM_ACTION_ROTATEABSOLUTE_H_
#define _FAST_DDS_GENERATED_TURTLESIM_ACTION_ROTATEABSOLUTE_H_


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
#if defined(RotateAbsolute_SOURCE)
#define RotateAbsolute_DllAPI __declspec( dllexport )
#else
#define RotateAbsolute_DllAPI __declspec( dllimport )
#endif // RotateAbsolute_SOURCE
#else
#define RotateAbsolute_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define RotateAbsolute_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace turtlesim {
    namespace action {
        /*!
         * @brief This class represents the structure RotateAbsolute_Goal defined by the user in the IDL file.
         * @ingroup ROTATEABSOLUTE
         */
        class RotateAbsolute_Goal
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport RotateAbsolute_Goal();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~RotateAbsolute_Goal();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Goal that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Goal(
                    const RotateAbsolute_Goal& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Goal that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Goal(
                    RotateAbsolute_Goal&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Goal that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Goal& operator =(
                    const RotateAbsolute_Goal& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Goal that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Goal& operator =(
                    RotateAbsolute_Goal&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x turtlesim::action::RotateAbsolute_Goal object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const RotateAbsolute_Goal& x) const;

            /*!
             * @brief Comparison operator.
             * @param x turtlesim::action::RotateAbsolute_Goal object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const RotateAbsolute_Goal& x) const;

            /*!
             * @brief This function sets a value in member theta
             * @param _theta New value for member theta
             */
            eProsima_user_DllExport void theta(
                    float _theta);

            /*!
             * @brief This function returns the value of member theta
             * @return Value of member theta
             */
            eProsima_user_DllExport float theta() const;

            /*!
             * @brief This function returns a reference to member theta
             * @return Reference to member theta
             */
            eProsima_user_DllExport float& theta();


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
                    const turtlesim::action::RotateAbsolute_Goal& data,
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

            float m_theta;

        };
        /*!
         * @brief This class represents the structure RotateAbsolute_Result defined by the user in the IDL file.
         * @ingroup ROTATEABSOLUTE
         */
        class RotateAbsolute_Result
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport RotateAbsolute_Result();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~RotateAbsolute_Result();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Result that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Result(
                    const RotateAbsolute_Result& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Result that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Result(
                    RotateAbsolute_Result&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Result that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Result& operator =(
                    const RotateAbsolute_Result& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Result that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Result& operator =(
                    RotateAbsolute_Result&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x turtlesim::action::RotateAbsolute_Result object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const RotateAbsolute_Result& x) const;

            /*!
             * @brief Comparison operator.
             * @param x turtlesim::action::RotateAbsolute_Result object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const RotateAbsolute_Result& x) const;

            /*!
             * @brief This function sets a value in member delta
             * @param _delta New value for member delta
             */
            eProsima_user_DllExport void delta(
                    float _delta);

            /*!
             * @brief This function returns the value of member delta
             * @return Value of member delta
             */
            eProsima_user_DllExport float delta() const;

            /*!
             * @brief This function returns a reference to member delta
             * @return Reference to member delta
             */
            eProsima_user_DllExport float& delta();


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
                    const turtlesim::action::RotateAbsolute_Result& data,
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

            float m_delta;

        };
        /*!
         * @brief This class represents the structure RotateAbsolute_Feedback defined by the user in the IDL file.
         * @ingroup ROTATEABSOLUTE
         */
        class RotateAbsolute_Feedback
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport RotateAbsolute_Feedback();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~RotateAbsolute_Feedback();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Feedback that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Feedback(
                    const RotateAbsolute_Feedback& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Feedback that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Feedback(
                    RotateAbsolute_Feedback&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Feedback that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Feedback& operator =(
                    const RotateAbsolute_Feedback& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object turtlesim::action::RotateAbsolute_Feedback that will be copied.
             */
            eProsima_user_DllExport RotateAbsolute_Feedback& operator =(
                    RotateAbsolute_Feedback&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x turtlesim::action::RotateAbsolute_Feedback object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const RotateAbsolute_Feedback& x) const;

            /*!
             * @brief Comparison operator.
             * @param x turtlesim::action::RotateAbsolute_Feedback object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const RotateAbsolute_Feedback& x) const;

            /*!
             * @brief This function sets a value in member remaining
             * @param _remaining New value for member remaining
             */
            eProsima_user_DllExport void remaining(
                    float _remaining);

            /*!
             * @brief This function returns the value of member remaining
             * @return Value of member remaining
             */
            eProsima_user_DllExport float remaining() const;

            /*!
             * @brief This function returns a reference to member remaining
             * @return Reference to member remaining
             */
            eProsima_user_DllExport float& remaining();


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
                    const turtlesim::action::RotateAbsolute_Feedback& data,
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

            float m_remaining;

        };
    } // namespace action
} // namespace turtlesim

#endif // _FAST_DDS_GENERATED_TURTLESIM_ACTION_ROTATEABSOLUTE_H_