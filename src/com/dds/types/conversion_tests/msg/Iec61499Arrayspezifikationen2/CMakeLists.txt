#*******************************************************************************
# *******************************************************************************
# Copyright (c) 2024 Malte Grave
# This program and the accompanying materials are made available under the
# terms of the Eclipse Public License 2.0 which is available at
# http://www.eclipse.org/legal/epl-2.0.
#
# SPDX-License-Identifier: EPL-2.0
#
# Contributors:
#     Malte Grave
# *******************************************************************************/
# *******************************************************************************/

forte_add_sourcefile_cpp(
        Iec61499Arrayspezifikationen2.cxx
        Iec61499Arrayspezifikationen2PubSubTypes.cxx
)

forte_add_sourcefile_h(
        Iec61499Arrayspezifikationen2.h
        Iec61499Arrayspezifikationen2PubSubTypes.h
)

forte_add_sourcefile_hcpp(
        Iec61499Arrayspezifikationen2PubSub
)
