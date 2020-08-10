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

// Enum MRMesh.EMeshTrackerVertexColorMode
public enum EMeshTrackerVertexColorMode : byte
{
	EMeshTrackerVertexColorMode__None = 0,
	EMeshTrackerVertexColorMode__Confidence = 1,
	EMeshTrackerVertexColorMode__Block = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MRMesh.MRMeshConfiguration
// 0x0001
public class FMRMeshConfiguration : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMRMeshConfiguration() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}

}