// Copyright 2011, 2012,
//
// Maxime Reis
//
// JRL/LAAS, CNRS/AIST
//
// This file is part of metapod.
// metapod is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// metapod is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License
// along with metapod.  If not, see <http://www.gnu.org/licenses/>.

/* 
 * 3 dof sample model bodies declaration.
 */

#ifndef METAPOD_SAMPLE_3_DOF_BODY_HH
# define METAPOD_SAMPLE_3_DOF_BODY_HH

# include "metapod/tools/bodymacros.hh"

namespace metapod
{
  namespace sample_3_dof
  {
    CREATE_BODY(B0, 0, NP, J0);
    CREATE_BODY(B1, 1, B0, J1);
    CREATE_BODY(B2, 1, B0, J2);
  } // end of namespace sample_3_dof
} // end of namespace metapod

#endif