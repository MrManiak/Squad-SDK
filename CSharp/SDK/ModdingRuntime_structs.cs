// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ModdingRuntime.SQModInfoRequest
// 0x0018
public class FSQModInfoRequest : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FSQModInfo>>                 _offRequestedModInfoArray                                      = new ExternalOffset<TArray<FSQModInfo>>(0x0008, false);       // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSQModInfo>                                  RequestedModInfoArray                                          => _offRequestedModInfoArray.GetValue();
	#endregion

	public FSQModInfoRequest(TArray<FSQModInfo> c_RequestedModInfoArray) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRequestedModInfoArray.SetValue(c_RequestedModInfoArray);
	}
}
// ScriptStruct ModdingRuntime.SQModLoadProgress
// 0x0020
public class FSQModLoadProgress : ExternalClass
{
	#region Offsets
	private ExternalOffset<ulong>                              _offID                                                         = new ExternalOffset<ulong>(0x0000);                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offServerMD5                                                  = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offProgress                                                   = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbFinishedLoading                                           = new ExternalOffset<byte/*(bool)*/>(0x001C);                  // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbLoadedSuccessfully                                        = new ExternalOffset<byte/*(bool)*/>(0x001D);                  // 0x001D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ulong                                               ID                                                             => _offID.GetValue();
	public FString                                             ServerMD5                                                      => _offServerMD5.GetValue();
	public float                                               Progress                                                       => _offProgress.GetValue();
	public byte/*(bool)*/                                      bFinishedLoading                                               => _offbFinishedLoading.GetValue();
	public byte/*(bool)*/                                      bLoadedSuccessfully                                            => _offbLoadedSuccessfully.GetValue();
	#endregion

	public FSQModLoadProgress(ulong c_ID, FString c_ServerMD5, float c_Progress, byte/*(bool)*/ c_bFinishedLoading, byte/*(bool)*/ c_bLoadedSuccessfully) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offID.SetValue(c_ID);
		_offServerMD5.SetValue(c_ServerMD5);
		_offProgress.SetValue(c_Progress);
		_offbFinishedLoading.SetValue(c_bFinishedLoading);
		_offbLoadedSuccessfully.SetValue(c_bLoadedSuccessfully);
	}
}
// ScriptStruct ModdingRuntime.SQModInfo
// 0x0050
public class FSQModInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<ulong>                              _offID                                                         = new ExternalOffset<ulong>(0x0000);                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offName                                                       = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDescription                                                = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offImageUrl                                                   = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offClientMD5                                                  = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsWhitelisted                                             = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsLoaded                                                  = new ExternalOffset<byte/*(bool)*/>(0x0049);                  // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsSteamPublished                                          = new ExternalOffset<byte/*(bool)*/>(0x004A);                  // 0x004A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbHasBeenFilled                                             = new ExternalOffset<byte/*(bool)*/>(0x004B);                  // 0x004B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ulong                                               ID                                                             => _offID.GetValue();
	public FString                                             Name                                                           => _offName.GetValue();
	public FString                                             Description                                                    => _offDescription.GetValue();
	public FString                                             ImageUrl                                                       => _offImageUrl.GetValue();
	public FString                                             ClientMD5                                                      => _offClientMD5.GetValue();
	public byte/*(bool)*/                                      bIsWhitelisted                                                 => _offbIsWhitelisted.GetValue();
	public byte/*(bool)*/                                      bIsLoaded                                                      => _offbIsLoaded.GetValue();
	public byte/*(bool)*/                                      bIsSteamPublished                                              => _offbIsSteamPublished.GetValue();
	public byte/*(bool)*/                                      bHasBeenFilled                                                 => _offbHasBeenFilled.GetValue();
	#endregion

	public FSQModInfo(ulong c_ID, FString c_Name, FString c_Description, FString c_ImageUrl, FString c_ClientMD5, byte/*(bool)*/ c_bIsWhitelisted, byte/*(bool)*/ c_bIsLoaded, byte/*(bool)*/ c_bIsSteamPublished, byte/*(bool)*/ c_bHasBeenFilled) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offID.SetValue(c_ID);
		_offName.SetValue(c_Name);
		_offDescription.SetValue(c_Description);
		_offImageUrl.SetValue(c_ImageUrl);
		_offClientMD5.SetValue(c_ClientMD5);
		_offbIsWhitelisted.SetValue(c_bIsWhitelisted);
		_offbIsLoaded.SetValue(c_bIsLoaded);
		_offbIsSteamPublished.SetValue(c_bIsSteamPublished);
		_offbHasBeenFilled.SetValue(c_bHasBeenFilled);
	}
}
// ScriptStruct ModdingRuntime.ModdingRuntimeModInfoDetails
// 0x00A0
public class FModdingRuntimeModInfoDetails : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offSteamWorkshopURL                                           = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offModName                                                    = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDescription                                                = new ExternalOffset<FString>(0x0020, false);                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offImageUrl                                                   = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRating                                                     = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDayTimeCreated                                             = new ExternalOffset<FString>(0x0048, false);                  // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDayTimeUpdated                                             = new ExternalOffset<FString>(0x0058, false);                  // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offNumSubscriptions                                           = new ExternalOffset<FString>(0x0068, false);                  // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offNumUniqueVisitors                                          = new ExternalOffset<FString>(0x0078, false);                  // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offNumFavorites                                               = new ExternalOffset<FString>(0x0088, false);                  // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offUpVotes                                                    = new ExternalOffset<int>(0x0098);                             // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDownVotes                                                  = new ExternalOffset<int>(0x009C);                             // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             SteamWorkshopURL                                               => _offSteamWorkshopURL.GetValue();
	public FString                                             ModName                                                        => _offModName.GetValue();
	public FString                                             Description                                                    => _offDescription.GetValue();
	public FString                                             ImageUrl                                                       => _offImageUrl.GetValue();
	public float                                               Rating                                                         => _offRating.GetValue();
	public FString                                             DayTimeCreated                                                 => _offDayTimeCreated.GetValue();
	public FString                                             DayTimeUpdated                                                 => _offDayTimeUpdated.GetValue();
	public FString                                             NumSubscriptions                                               => _offNumSubscriptions.GetValue();
	public FString                                             NumUniqueVisitors                                              => _offNumUniqueVisitors.GetValue();
	public FString                                             NumFavorites                                                   => _offNumFavorites.GetValue();
	public int                                                 UpVotes                                                        => _offUpVotes.GetValue();
	public int                                                 DownVotes                                                      => _offDownVotes.GetValue();
	#endregion

	public FModdingRuntimeModInfoDetails(FString c_SteamWorkshopURL, FString c_ModName, FString c_Description, FString c_ImageUrl, float c_Rating, FString c_DayTimeCreated, FString c_DayTimeUpdated, FString c_NumSubscriptions, FString c_NumUniqueVisitors, FString c_NumFavorites, int c_UpVotes, int c_DownVotes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSteamWorkshopURL.SetValue(c_SteamWorkshopURL);
		_offModName.SetValue(c_ModName);
		_offDescription.SetValue(c_Description);
		_offImageUrl.SetValue(c_ImageUrl);
		_offRating.SetValue(c_Rating);
		_offDayTimeCreated.SetValue(c_DayTimeCreated);
		_offDayTimeUpdated.SetValue(c_DayTimeUpdated);
		_offNumSubscriptions.SetValue(c_NumSubscriptions);
		_offNumUniqueVisitors.SetValue(c_NumUniqueVisitors);
		_offNumFavorites.SetValue(c_NumFavorites);
		_offUpVotes.SetValue(c_UpVotes);
		_offDownVotes.SetValue(c_DownVotes);
	}
}

}