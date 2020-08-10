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

// Class PlayFab.PlayFabAdminAPI
// 0x0750 (0x0778 - 0x0028)
public class UPlayFabAdminAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x0760, true); // 0x0760(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x0768, true);        // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x0770, true);        // 0x0770(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabAdminModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabAdminModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabAuthenticationAPI
// 0x0090 (0x00B8 - 0x0028)
public class UPlayFabAuthenticationAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x00A0, true); // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x00A8, true);        // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x00B0, true);        // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabAuthenticationModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabAuthenticationModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabClientAPI
// 0x0A30 (0x0A58 - 0x0028)
public class UPlayFabClientAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x0A40, true); // 0x0A40(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x0A48, true);        // 0x0A48(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x0A50, true);        // 0x0A50(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabClientModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabClientModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabCloudScriptAPI
// 0x0090 (0x00B8 - 0x0028)
public class UPlayFabCloudScriptAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x00A0, true); // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x00A8, true);        // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x00B0, true);        // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabCloudScriptModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabCloudScriptModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabDataAPI
// 0x00E0 (0x0108 - 0x0028)
public class UPlayFabDataAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x00F0, true); // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x00F8, true);        // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x0100, true);        // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabDataModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabDataModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabEventsAPI
// 0x0090 (0x00B8 - 0x0028)
public class UPlayFabEventsAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x00A0, true); // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x00A8, true);        // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x00B0, true);        // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabEventsModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabEventsModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabGroupsAPI
// 0x0200 (0x0228 - 0x0028)
public class UPlayFabGroupsAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x0210, true); // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x0218, true);        // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x0220, true);        // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabGroupsModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabGroupsModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabJsonObject
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabJsonObject : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabJsonValue
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabJsonValue : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabLocalizationAPI
// 0x0080 (0x00A8 - 0x0028)
public class UPlayFabLocalizationAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x0090, true); // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x0098, true);        // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x00A0, true);        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabLocalizationModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabLocalizationModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabMatchmakerAPI
// 0x00C0 (0x00E8 - 0x0028)
public class UPlayFabMatchmakerAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x00D0, true); // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x00D8, true);        // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x00E0, true);        // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabMatchmakerModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabMatchmakerModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabMultiplayerAPI
// 0x03B0 (0x03D8 - 0x0028)
public class UPlayFabMultiplayerAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x03C0, true); // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x03C8, true);        // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x03D0, true);        // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabMultiplayerModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabMultiplayerModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabProfilesAPI
// 0x00E0 (0x0108 - 0x0028)
public class UPlayFabProfilesAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x00F0, true); // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x00F8, true);        // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x0100, true);        // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabProfilesModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabProfilesModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabServerAPI
// 0x08B0 (0x08D8 - 0x0028)
public class UPlayFabServerAPI : UOnlineBlueprintCallProxyBase
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayFabResponse                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UPlayFabAuthenticationContext>     _offCallAuthenticationContext                                  = new ExternalOffset<UPlayFabAuthenticationContext>(0x08C0, true); // 0x08C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPlayFabJsonObject>                _offRequestJsonObj                                             = new ExternalOffset<UPlayFabJsonObject>(0x08C8, true);        // 0x08C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UPlayFabJsonObject>                _offResponseJsonObj                                            = new ExternalOffset<UPlayFabJsonObject>(0x08D0, true);        // 0x08D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlayFabResponse                                              => _offOnPlayFabResponse.GetValue();
	public UPlayFabAuthenticationContext                      CallAuthenticationContext                                      => _offCallAuthenticationContext.GetValue();
	public UPlayFabJsonObject                                 RequestJsonObj                                                 => _offRequestJsonObj.GetValue();
	public UPlayFabJsonObject                                 ResponseJsonObj                                                => _offResponseJsonObj.GetValue();
	#endregion


}

// Class PlayFab.PlayFabServerModelDecoder
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabServerModelDecoder : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PlayFab.PlayFabUtilities
// 0x0000 (0x0028 - 0x0028)
public class UPlayFabUtilities : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}