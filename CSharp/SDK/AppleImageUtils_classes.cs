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

// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// 0x0058 (0x0080 - 0x0028)
public class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FAppleImageUtilsImageConversionResult> _offConversionResult                                           = new ExternalOffset<FAppleImageUtilsImageConversionResult>(0x0060, false); // 0x0060(0x0020) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	public FAppleImageUtilsImageConversionResult              ConversionResult                                               => _offConversionResult.GetValue();
	#endregion


}

// Class AppleImageUtils.AppleImageInterface
// 0x0000 (0x0028 - 0x0028)
public class UAppleImageInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}