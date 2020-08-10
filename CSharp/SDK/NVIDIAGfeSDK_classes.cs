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

// Class NVIDIAGfeSDK.HighlightsFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
public class UHighlightsFunctionLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NVIDIAGfeSDK.InitHighlights
// 0x0028 (0x0050 - 0x0028)
public class UInitHighlights : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class NVIDIAGfeSDK.HighlightsConfigureAsync
// 0x0028 (0x0050 - 0x0028)
public class UHighlightsConfigureAsync : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class NVIDIAGfeSDK.HighlightsOpenGroupAsync
// 0x0028 (0x0050 - 0x0028)
public class UHighlightsOpenGroupAsync : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class NVIDIAGfeSDK.HighlightsCloseGroupAsync
// 0x0028 (0x0050 - 0x0028)
public class UHighlightsCloseGroupAsync : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync
// 0x0028 (0x0050 - 0x0028)
public class UHighlightsSetScreenshotAsync : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class NVIDIAGfeSDK.HighlightsSetVideoAsync
// 0x0028 (0x0050 - 0x0028)
public class UHighlightsSetVideoAsync : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class NVIDIAGfeSDK.HighlightsSummaryAsync
// 0x0028 (0x0050 - 0x0028)
public class UHighlightsSummaryAsync : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class NVIDIAGfeSDK.HighlightsGetNumberAsync
// 0x0028 (0x0050 - 0x0028)
public class UHighlightsGetNumberAsync : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}

// Class NVIDIAGfeSDK.RequestPermissionsAsync
// 0x0028 (0x0050 - 0x0028)
public class URequestPermissionsAsync : UBlueprintAsyncActionBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFailure                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFailure                                                      => _offOnFailure.GetValue();
	#endregion


}


}