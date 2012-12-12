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
 * This file is part of a simple humanoid robot model, used for test purpose.
 * It contains the definition of all the robot bodies.
 */

#ifndef METAPOD_SIMPLE_HUMANOID_BODY_HH
# define METAPOD_SIMPLE_HUMANOID_BODY_HH

# include "metapod/tools/bodymacros.hh"

namespace metapod
{
  namespace simple_humanoid
  {
    CREATE_BODY(WAIST_LINK0, NP, WAIST);
    CREATE_BODY(WAIST_LINK1, WAIST_LINK0, WAIST_P);
    CREATE_BODY(WAIST_LINK2, WAIST_LINK1, WAIST_R);
    CREATE_BODY(WAIST_LINK3, WAIST_LINK2, CHEST);
    CREATE_BODY(LARM_LINK1, WAIST_LINK3, LARM_SHOULDER_P);
    CREATE_BODY(LARM_LINK2, LARM_LINK1, LARM_SHOULDER_R);
    CREATE_BODY(LARM_LINK3, LARM_LINK2, LARM_SHOULDER_Y);
    CREATE_BODY(LARM_LINK4, LARM_LINK3, LARM_ELBOW);
    CREATE_BODY(LARM_LINK5, LARM_LINK4, LARM_WRIST_Y);
    CREATE_BODY(LARM_LINK6, LARM_LINK5, LARM_WRIST_P);
    CREATE_BODY(LARM_LINK7, LARM_LINK6, LARM_WRIST_R);
    CREATE_BODY(RARM_LINK1, WAIST_LINK3, RARM_SHOULDER_P);
    CREATE_BODY(RARM_LINK2, RARM_LINK1, RARM_SHOULDER_R);
    CREATE_BODY(RARM_LINK3, RARM_LINK2, RARM_SHOULDER_Y);
    CREATE_BODY(RARM_LINK4, RARM_LINK3, RARM_ELBOW);
    CREATE_BODY(RARM_LINK5, RARM_LINK4, RARM_WRIST_Y);
    CREATE_BODY(RARM_LINK6, RARM_LINK5, RARM_WRIST_P);
    CREATE_BODY(RARM_LINK7, RARM_LINK6, RARM_WRIST_R);
    CREATE_BODY(LLEG_LINK1, WAIST_LINK0, LLEG_HIP_R);
    CREATE_BODY(LLEG_LINK2, LLEG_LINK1, LLEG_HIP_P);
    CREATE_BODY(LLEG_LINK3, LLEG_LINK2, LLEG_HIP_Y);
    CREATE_BODY(LLEG_LINK4, LLEG_LINK3, LLEG_KNEE);
    CREATE_BODY(LLEG_LINK5, LLEG_LINK4, LLEG_ANKLE_P);
    CREATE_BODY(LLEG_LINK6, LLEG_LINK5, LLEG_ANKLE_R);
    CREATE_BODY(RLEG_LINK1, WAIST_LINK0, RLEG_HIP_R);
    CREATE_BODY(RLEG_LINK2, RLEG_LINK1, RLEG_HIP_P);
    CREATE_BODY(RLEG_LINK3, RLEG_LINK2, RLEG_HIP_Y);
    CREATE_BODY(RLEG_LINK4, RLEG_LINK3, RLEG_KNEE);
    CREATE_BODY(RLEG_LINK5, RLEG_LINK4, RLEG_ANKLE_P);
    CREATE_BODY(RLEG_LINK6, RLEG_LINK5, RLEG_ANKLE_R);
  } // end of namespace simple_humanoid
} // end of namespace metapod

#endif
