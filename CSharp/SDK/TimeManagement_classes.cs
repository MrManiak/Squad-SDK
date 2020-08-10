// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0008 (0x0030 - 0x0028)
public class UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep
{
	#region Offsets
	private ExternalOffset<FFrameRate>                        _offFixedFrameRate                                             = new ExternalOffset<FFrameRate>(0x0028, false);               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FFrameRate                                         FixedFrameRate                                                 => _offFixedFrameRate.GetValue();
	#endregion


}

// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class TimeManagement.TimeSynchronizationSource
// 0x0008 (0x0030 - 0x0028)
public class UTimeSynchronizationSource : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbUseForSynchronization                                     = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offFrameOffset                                                = new ExternalOffset<int>(0x002C);                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bUseForSynchronization                                         => _offbUseForSynchronization.GetValue();
	public int                                                FrameOffset                                                    => _offFrameOffset.GetValue();
	#endregion


}


}