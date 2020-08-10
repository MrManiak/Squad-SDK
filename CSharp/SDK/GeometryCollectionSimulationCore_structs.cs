// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
public enum EInitialVelocityTypeEnum : byte
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined = 0,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None = 1,
	EInitialVelocityTypeEnum__Chaos_Max = 2
}

// Enum GeometryCollectionSimulationCore.ECollisionTypeEnum
public enum ECollisionTypeEnum : byte
{
	ECollisionTypeEnum__Chaos_Volumetric = 0,
	ECollisionTypeEnum__Chaos_Surface_Volumetric = 1,
	ECollisionTypeEnum__Chaos_Max  = 2
}

// Enum GeometryCollectionSimulationCore.EObjectStateTypeEnum
public enum EObjectStateTypeEnum : byte
{
	EObjectStateTypeEnum__Chaos_Object_Sleeping = 0,
	EObjectStateTypeEnum__Chaos_Object_Kinematic = 1,
	EObjectStateTypeEnum__Chaos_Object_Static = 2,
	EObjectStateTypeEnum__Chaos_Object_Dynamic = 3,
	EObjectStateTypeEnum__Chaos_Object_UserDefined = 4,
	EObjectStateTypeEnum__Chaos_Max = 5
}

// Enum GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
public enum EEmissionPatternTypeEnum : byte
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame = 0,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand = 1,
	EEmissionPatternTypeEnum__Chaos_Max = 2
}

// Enum GeometryCollectionSimulationCore.EImplicitTypeEnum
public enum EImplicitTypeEnum : byte
{
	EImplicitTypeEnum__Chaos_Implicit_Box = 0,
	EImplicitTypeEnum__Chaos_Implicit_Sphere = 1,
	EImplicitTypeEnum__Chaos_Implicit_Capsule = 2,
	EImplicitTypeEnum__Chaos_Implicit_LevelSet = 3,
	EImplicitTypeEnum__Chaos_Implicit_None = 4,
	EImplicitTypeEnum__Chaos_Max   = 5
}

// Enum GeometryCollectionSimulationCore.EGeometryCollectionPhysicsTypeEnum
public enum EGeometryCollectionPhysicsTypeEnum : byte
{
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularVelocity = 0,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DynamicState = 1,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearVelocity = 2,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialAngularVelocity = 3,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialLinearVelocity = 4,
	EGeometryCollectionPhysicsTypeEnum__Chaos_CollisionGroup = 5,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearForce = 6,
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularTorque = 7,
	EGeometryCollectionPhysicsTypeEnum__Chaos_Max = 8
}


}