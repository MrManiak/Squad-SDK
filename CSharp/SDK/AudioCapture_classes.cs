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

// Class AudioCapture.AudioCaptureComponent
// 0x0084 (0x0644 - 0x05C0)
public class UAudioCaptureComponent : USynthComponent
{
	#region Offsets
	private ExternalOffset<int>                               _offJitterLatencyFrames                                        = new ExternalOffset<int>(0x0640);                             // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                JitterLatencyFrames                                            => _offJitterLatencyFrames.GetValue();
	#endregion


}

// Class AudioCapture.AudioCapture
// 0x0080 (0x00A8 - 0x0028)
public class UAudioCapture : UAudioGenerator
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AudioCapture.AudioCaptureFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
public class UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}