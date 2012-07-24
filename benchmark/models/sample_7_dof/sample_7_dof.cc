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
 * 7 dof sample model, used for benchmarking.
 */

# include "sample_7_dof.hh"

template struct metapod::crba< metapod::sample_7_dof::Robot , true >;
template struct metapod::rnea< metapod::sample_7_dof::Robot , true >;
template struct metapod::crba< metapod::sample_7_dof::Robot , false >;
template struct metapod::rnea< metapod::sample_7_dof::Robot , false >;

namespace metapod
{
  namespace sample_7_dof
  {
    Eigen::Matrix< FloatType, Robot::NBDOF, Robot::NBDOF > Robot::H;

    INITIALIZE_JOINT_REVOLUTE(J0);
    const std::string J0::name = "J0";
    const int J0::label = 0;
    const int J0::positionInConf = 0;
    const Transform J0::Xt = Transform(
      matrix3dMaker(
        0.441905, -0.431413, 0.477069,
        0.279958, -0.291903, 0.375723,
        -0.668052, -0.119791, 0.76015),
      vector3d(
        -0.124725, 0.86367, 0.86162));
  
    INITIALIZE_JOINT_REVOLUTE(J1);
    const std::string J1::name = "J1";
    const int J1::label = 1;
    const int J1::positionInConf = 1;
    const Transform J1::Xt = Transform(
      matrix3dMaker(
        -0.385084, -0.105933, -0.547787,
        -0.624934, -0.447531, 0.112888,
        -0.166997, -0.660786, 0.813608),
      vector3d(
        0.239193, -0.437881, 0.572004));
  
    INITIALIZE_JOINT_REVOLUTE(J2);
    const std::string J2::name = "J2";
    const int J2::label = 2;
    const int J2::positionInConf = 2;
    const Transform J2::Xt = Transform(
      matrix3dMaker(
        0.464297, -0.74905, 0.586941,
        -0.671796, 0.490143, -0.85094,
        0.900208, -0.894941, 0.0431268),
      vector3d(
        0.168977, -0.511175, -0.69522));
  
    INITIALIZE_JOINT_REVOLUTE(J3);
    const std::string J3::name = "J3";
    const int J3::label = 3;
    const int J3::positionInConf = 3;
    const Transform J3::Xt = Transform(
      matrix3dMaker(
        0.639355, 0.146637, 0.511162,
        -0.896122, -0.684386, 0.999987,
        -0.591343, 0.779911, -0.749063),
      vector3d(
        -0.860187, -0.59069, -0.0771591));
  
    INITIALIZE_JOINT_REVOLUTE(J4);
    const std::string J4::name = "J4";
    const int J4::label = 4;
    const int J4::positionInConf = 4;
    const Transform J4::Xt = Transform(
      matrix3dMaker(
        -0.0948483, 0.374775, -0.80072,
        0.061616, 0.514588, -0.39141,
        0.984457, 0.153942, 0.755228),
      vector3d(
        -0.281809, 0.10497, 0.15886));
  
    INITIALIZE_JOINT_REVOLUTE(J5);
    const std::string J5::name = "J5";
    const int J5::label = 5;
    const int J5::positionInConf = 5;
    const Transform J5::Xt = Transform(
      matrix3dMaker(
        0.660024, 0.777898, -0.846011,
        0.299414, -0.503912, 0.258959,
        -0.541726, 0.40124, -0.366266),
      vector3d(
        0.333761, -0.00548296, -0.672064));
  
    INITIALIZE_JOINT_REVOLUTE(J6);
    const std::string J6::name = "J6";
    const int J6::label = 6;
    const int J6::positionInConf = 6;
    const Transform J6::Xt = Transform(
      matrix3dMaker(
        -0.0981649, -0.327298, 0.695369,
        -0.130973, -0.993537, -0.310114,
        0.196963, 0.666487, -0.532217),
      vector3d(
        -0.0570331, 0.18508, 0.888636));
  
    INITIALIZE_BODY(B0);
    const std::string B0::name = "B0";
    const int B0::label = 0;
    const FloatType B0::mass = 1;
    const vector3d B0::CoM = vector3d(  0.717353,   -0.12088,   0.84794);
    const matrix3d B0::inertie = matrix3dMaker(
    0.658402, -0.339326, -0.339326,
    0.786745, -0.29928, -0.29928,
    0.912937, 0.17728, 0.17728);
    Inertia B0::I = spatialInertiaMaker(  B0::mass,
    B0::CoM,
    B0::inertie);
  
    INITIALIZE_BODY(B1);
    const std::string B1::name = "B1";
    const int B1::label = 1;
    const FloatType B1::mass = 1;
    const vector3d B1::CoM = vector3d(  0.762124,   0.282161,   -0.136093);
    const matrix3d B1::inertie = matrix3dMaker(
    -0.203127, 0.629534, 0.629534,
    0.821944, -0.0350187, -0.0350187,
    0.900505, 0.840257, 0.840257);
    Inertia B1::I = spatialInertiaMaker(  B1::mass,
    B1::CoM,
    B1::inertie);
  
    INITIALIZE_BODY(B2);
    const std::string B2::name = "B2";
    const int B2::label = 2;
    const FloatType B2::mass = 1;
    const vector3d B2::CoM = vector3d(  -0.262673,   -0.411679,   -0.535477);
    const matrix3d B2::inertie = matrix3dMaker(
    -0.793658, -0.747849, -0.747849,
    0.52095, 0.969503, 0.969503,
    0.36889, -0.233623, -0.233623);
    Inertia B2::I = spatialInertiaMaker(  B2::mass,
    B2::CoM,
    B2::inertie);
  
    INITIALIZE_BODY(B3);
    const std::string B3::name = "B3";
    const int B3::label = 3;
    const FloatType B3::mass = 1;
    const vector3d B3::CoM = vector3d(  -0.730195,   0.0404201,   -0.843536);
    const matrix3d B3::inertie = matrix3dMaker(
    -0.647579, -0.519875, -0.519875,
    0.465309, 0.313127, 0.313127,
    0.278917, 0.51947, 0.51947);
    Inertia B3::I = spatialInertiaMaker(  B3::mass,
    B3::CoM,
    B3::inertie);
  
    INITIALIZE_BODY(B4);
    const std::string B4::name = "B4";
    const int B4::label = 4;
    const FloatType B4::mass = 1;
    const vector3d B4::CoM = vector3d(  -0.21662,   0.826053,   0.63939);
    const matrix3d B4::inertie = matrix3dMaker(
    0.995598, -0.891885, -0.891885,
    -0.855342, -0.991677, -0.991677,
    0.187784, -0.639255, -0.639255);
    Inertia B4::I = spatialInertiaMaker(  B4::mass,
    B4::CoM,
    B4::inertie);
  
    INITIALIZE_BODY(B5);
    const std::string B5::name = "B5";
    const int B5::label = 5;
    const FloatType B5::mass = 1;
    const vector3d B5::CoM = vector3d(  0.487622,   0.806733,   0.967191);
    const matrix3d B5::inertie = matrix3dMaker(
    0.495619, 0.25782, 0.25782,
    0.495606, 0.666477, 0.666477,
    0.746543, 0.662075, 0.662075);
    Inertia B5::I = spatialInertiaMaker(  B5::mass,
    B5::CoM,
    B5::inertie);
  
    INITIALIZE_BODY(B6);
    const std::string B6::name = "B6";
    const int B6::label = 6;
    const FloatType B6::mass = 1;
    const vector3d B6::CoM = vector3d(  0.0922138,   0.438537,   -0.773439);
    const matrix3d B6::inertie = matrix3dMaker(
    -0.342446, -0.537144, -0.537144,
    0.266144, -0.552687, -0.552687,
    0.0213719, 0.942931, 0.942931);
    Inertia B6::I = spatialInertiaMaker(  B6::mass,
    B6::CoM,
    B6::inertie);
  } // end of namespace sample_7_dof
} // end of namespace metapod