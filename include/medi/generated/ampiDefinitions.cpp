/*
 * MeDiPack, a Message Differentiation Package
 *
 * Copyright (C) 2015-2024 Chair for Scientific Computing (SciComp), University of Kaiserslautern-Landau
 * Homepage: http://www.scicomp.uni-kl.de
 * Contact:  Prof. Nicolas R. Gauger (codi@scicomp.uni-kl.de)
 *
 * Lead developers: Max Sagebaum (SciComp, University of Kaiserslautern-Landau)
 *
 * This file is part of MeDiPack (http://www.scicomp.uni-kl.de/software/codi).
 *
 * MeDiPack is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * MeDiPack is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU Lesser General Public License for more details.
 * You should have received a copy of the GNU
 * Lesser General Public License along with MeDiPack.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: Max Sagebaum, Tim Albring (SciComp, University of Kaiserslautern-Landau)
 */

#pragma once

#include <mpi.h>

#include "../macros.h"
#include "ampiDefinitions.h"

/**
 * @brief Global namespace for MeDiPack - Message Differentiation Package
 */
namespace medi {

#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_MAX;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_MIN;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_SUM;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_PROD;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_MAXLOC;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_MINLOC;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_BAND;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_BOR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_BXOR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_LAND;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_LOR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_LXOR;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_REPLACE;
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
  AMPI_Op AMPI_NO_OP;
#endif

#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_CHAR_Type* AMPI_CHAR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_SHORT_Type* AMPI_SHORT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_INT_Type* AMPI_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_LONG_Type* AMPI_LONG;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_LONG_LONG_INT_Type* AMPI_LONG_LONG_INT;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  AMPI_LONG_LONG_Type* AMPI_LONG_LONG;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  AMPI_SIGNED_CHAR_Type* AMPI_SIGNED_CHAR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_UNSIGNED_CHAR_Type* AMPI_UNSIGNED_CHAR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_UNSIGNED_SHORT_Type* AMPI_UNSIGNED_SHORT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_UNSIGNED_Type* AMPI_UNSIGNED;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_UNSIGNED_LONG_Type* AMPI_UNSIGNED_LONG;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  AMPI_UNSIGNED_LONG_LONG_Type* AMPI_UNSIGNED_LONG_LONG;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_FLOAT_Type* AMPI_FLOAT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_DOUBLE_Type* AMPI_DOUBLE;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_LONG_DOUBLE_Type* AMPI_LONG_DOUBLE;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  AMPI_WCHAR_Type* AMPI_WCHAR;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  AMPI_C_BOOL_Type* AMPI_C_BOOL;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  AMPI_INT8_T_Type* AMPI_INT8_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  AMPI_INT16_T_Type* AMPI_INT16_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  AMPI_INT32_T_Type* AMPI_INT32_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  AMPI_INT64_T_Type* AMPI_INT64_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  AMPI_UINT8_T_Type* AMPI_UINT8_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  AMPI_UINT16_T_Type* AMPI_UINT16_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  AMPI_UINT32_T_Type* AMPI_UINT32_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  AMPI_UINT64_T_Type* AMPI_UINT64_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  AMPI_AINT_Type* AMPI_AINT;
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
  AMPI_COUNT_Type* AMPI_COUNT;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  AMPI_OFFSET_Type* AMPI_OFFSET;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_BYTE_Type* AMPI_BYTE;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_PACKED_Type* AMPI_PACKED;
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
  AMPI_CXX_BOOL_Type* AMPI_CXX_BOOL;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_FLOAT_INT_Type* AMPI_FLOAT_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_DOUBLE_INT_Type* AMPI_DOUBLE_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_LONG_INT_Type* AMPI_LONG_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_2INT_Type* AMPI_2INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_SHORT_INT_Type* AMPI_SHORT_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  AMPI_LONG_DOUBLE_INT_Type* AMPI_LONG_DOUBLE_INT;
#endif

  void initializeOperators() {
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_MAX.init(MPI_MAX);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_MIN.init(MPI_MIN);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_SUM.init(MPI_SUM);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_PROD.init(MPI_PROD);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_MAXLOC.init(MPI_MAXLOC);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_MINLOC.init(MPI_MINLOC);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_BAND.init(MPI_BAND);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_BOR.init(MPI_BOR);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_BXOR.init(MPI_BXOR);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_LAND.init(MPI_LAND);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_LOR.init(MPI_LOR);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_LXOR.init(MPI_LXOR);
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    AMPI_REPLACE.init(MPI_REPLACE);
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
    AMPI_NO_OP.init(MPI_NO_OP);
#endif
  }

  void initTypes() {
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_CHAR = new AMPI_CHAR_Type(MPI_CHAR);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_SHORT = new AMPI_SHORT_Type(MPI_SHORT);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_INT = new AMPI_INT_Type(MPI_INT);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_LONG = new AMPI_LONG_Type(MPI_LONG);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_LONG_LONG_INT = new AMPI_LONG_LONG_INT_Type(MPI_LONG_LONG_INT);
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    AMPI_LONG_LONG = new AMPI_LONG_LONG_Type(MPI_LONG_LONG);
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    AMPI_SIGNED_CHAR = new AMPI_SIGNED_CHAR_Type(MPI_SIGNED_CHAR);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_UNSIGNED_CHAR = new AMPI_UNSIGNED_CHAR_Type(MPI_UNSIGNED_CHAR);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_UNSIGNED_SHORT = new AMPI_UNSIGNED_SHORT_Type(MPI_UNSIGNED_SHORT);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_UNSIGNED = new AMPI_UNSIGNED_Type(MPI_UNSIGNED);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_UNSIGNED_LONG = new AMPI_UNSIGNED_LONG_Type(MPI_UNSIGNED_LONG);
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    AMPI_UNSIGNED_LONG_LONG = new AMPI_UNSIGNED_LONG_LONG_Type(MPI_UNSIGNED_LONG_LONG);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_FLOAT = new AMPI_FLOAT_Type(MPI_FLOAT);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_DOUBLE = new AMPI_DOUBLE_Type(MPI_DOUBLE);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_LONG_DOUBLE = new AMPI_LONG_DOUBLE_Type(MPI_LONG_DOUBLE);
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    AMPI_WCHAR = new AMPI_WCHAR_Type(MPI_WCHAR);
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    AMPI_C_BOOL = new AMPI_C_BOOL_Type(MPI_C_BOOL);
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    AMPI_INT8_T = new AMPI_INT8_T_Type(MPI_INT8_T);
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    AMPI_INT16_T = new AMPI_INT16_T_Type(MPI_INT16_T);
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    AMPI_INT32_T = new AMPI_INT32_T_Type(MPI_INT32_T);
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    AMPI_INT64_T = new AMPI_INT64_T_Type(MPI_INT64_T);
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    AMPI_UINT8_T = new AMPI_UINT8_T_Type(MPI_UINT8_T);
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    AMPI_UINT16_T = new AMPI_UINT16_T_Type(MPI_UINT16_T);
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    AMPI_UINT32_T = new AMPI_UINT32_T_Type(MPI_UINT32_T);
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    AMPI_UINT64_T = new AMPI_UINT64_T_Type(MPI_UINT64_T);
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    AMPI_AINT = new AMPI_AINT_Type(MPI_AINT);
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
    AMPI_COUNT = new AMPI_COUNT_Type(MPI_COUNT);
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    AMPI_OFFSET = new AMPI_OFFSET_Type(MPI_OFFSET);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_BYTE = new AMPI_BYTE_Type(MPI_BYTE);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_PACKED = new AMPI_PACKED_Type(MPI_PACKED);
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
    AMPI_CXX_BOOL = new AMPI_CXX_BOOL_Type(MPI_CXX_BOOL);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_FLOAT_INT = new AMPI_FLOAT_INT_Type(MPI_FLOAT_INT);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_DOUBLE_INT = new AMPI_DOUBLE_INT_Type(MPI_DOUBLE_INT);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_LONG_INT = new AMPI_LONG_INT_Type(MPI_LONG_INT);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_2INT = new AMPI_2INT_Type(MPI_2INT);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_SHORT_INT = new AMPI_SHORT_INT_Type(MPI_SHORT_INT);
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    AMPI_LONG_DOUBLE_INT = new AMPI_LONG_DOUBLE_INT_Type(MPI_LONG_DOUBLE_INT);
#endif
  }

  void finalizeTypes() {
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_CHAR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_SHORT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_LONG;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_LONG_LONG_INT;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    delete AMPI_LONG_LONG;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    delete AMPI_SIGNED_CHAR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_UNSIGNED_CHAR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_UNSIGNED_SHORT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_UNSIGNED;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_UNSIGNED_LONG;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    delete AMPI_UNSIGNED_LONG_LONG;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_FLOAT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_DOUBLE;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_LONG_DOUBLE;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    delete AMPI_WCHAR;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    delete AMPI_C_BOOL;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    delete AMPI_INT8_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    delete AMPI_INT16_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    delete AMPI_INT32_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    delete AMPI_INT64_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    delete AMPI_UINT8_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    delete AMPI_UINT16_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    delete AMPI_UINT32_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    delete AMPI_UINT64_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
    delete AMPI_AINT;
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
    delete AMPI_COUNT;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
    delete AMPI_OFFSET;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_BYTE;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_PACKED;
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
    delete AMPI_CXX_BOOL;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_FLOAT_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_DOUBLE_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_LONG_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_2INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_SHORT_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
    delete AMPI_LONG_DOUBLE_INT;
#endif
  }
}
