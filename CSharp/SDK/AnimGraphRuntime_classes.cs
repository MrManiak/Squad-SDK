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

// Class AnimGraphRuntime.AnimCustomInstance
// 0x00F0 (0x0270 - 0x0180)
public class UAnimCustomInstance : UAnimInstance
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0018 (0x0040 - 0x0028)
public class UAnimNotify_PlayMontageNotify : UAnimNotify
{
	#region Offsets
	private ExternalOffset<FName>                             _offNotifyName                                                 = new ExternalOffset<FName>(0x0038, false);                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FName                                              NotifyName                                                     => _offNotifyName.GetValue();
	#endregion


}

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0010 (0x0038 - 0x0028)
public class UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState
{
	#region Offsets
	private ExternalOffset<FName>                             _offNotifyName                                                 = new ExternalOffset<FName>(0x0030, false);                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FName                                              NotifyName                                                     => _offNotifyName.GetValue();
	#endregion


}

// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x0270 - 0x0270)
public class UAnimSequencerInstance : UAnimCustomInstance
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0028 - 0x0028)
public class UKismetAnimationLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0050 (0x0078 - 0x0028)
public class UPlayMontageCallbackProxy : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCompleted                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnBlendOut                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnInterrupted                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0048, false); // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnNotifyBegin                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0058, false); // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnNotifyEnd                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0068, false); // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnCompleted                                                    => _offOnCompleted.GetValue();
	public FScriptMulticastDelegate                           OnBlendOut                                                     => _offOnBlendOut.GetValue();
	public FScriptMulticastDelegate                           OnInterrupted                                                  => _offOnInterrupted.GetValue();
	public FScriptMulticastDelegate                           OnNotifyBegin                                                  => _offOnNotifyBegin.GetValue();
	public FScriptMulticastDelegate                           OnNotifyEnd                                                    => _offOnNotifyEnd.GetValue();
	#endregion


}


}