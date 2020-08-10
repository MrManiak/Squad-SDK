// Name: Sq, Version: b21

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MusicPlayer.MusicPlayer_C.Play Music
// (Public, BlueprintCallable, BlueprintEvent)
void UMusicPlayer_C::Play_Music()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Play Music");

	UMusicPlayer_C_Play_Music_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.Get Music AC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAudioComponent*         MusicAC                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicPlayer_C::Get_Music_AC(class UAudioComponent** MusicAC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Get Music AC");

	UMusicPlayer_C_Get_Music_AC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MusicAC != nullptr)
		*MusicAC = params.MusicAC;

}


// Function MusicPlayer.MusicPlayer_C.Get Song Progress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMusicPlayer_C::Get_Song_Progress()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Get Song Progress");

	UMusicPlayer_C_Get_Song_Progress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MusicPlayer.MusicPlayer_C.GetPercent_1
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
void UMusicPlayer_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.GetPercent_1");

	UMusicPlayer_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.Get_TBSongName_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UMusicPlayer_C::Get_TBSongName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Get_TBSongName_Text_1");

	UMusicPlayer_C_Get_TBSongName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MusicPlayer.MusicPlayer_C.Update Menu Settings
// (Public, BlueprintCallable, BlueprintEvent)
void UMusicPlayer_C::Update_Menu_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Update Menu Settings");

	UMusicPlayer_C_Update_Menu_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.Mute Audio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Mute                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMusicPlayer_C::Mute_Audio(bool Mute)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Mute Audio");

	UMusicPlayer_C_Mute_Audio_Params params;
	params.Mute = Mute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.Refresh Audio
// (Public, BlueprintCallable, BlueprintEvent)
void UMusicPlayer_C::Refresh_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Refresh Audio");

	UMusicPlayer_C_Refresh_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.Skip Track
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMusicPlayer_C::Skip_Track(bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Skip Track");

	UMusicPlayer_C_Skip_Track_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.OnLoaded_64894CBD4CB9747691437E9B69432F5B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicPlayer_C::OnLoaded_64894CBD4CB9747691437E9B69432F5B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.OnLoaded_64894CBD4CB9747691437E9B69432F5B");

	UMusicPlayer_C_OnLoaded_64894CBD4CB9747691437E9B69432F5B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.BndEvt__ButtonPlayPause_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicPlayer_C::BndEvt__ButtonPlayPause_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.BndEvt__ButtonPlayPause_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UMusicPlayer_C_BndEvt__ButtonPlayPause_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.BndEvt__ButtonSkipBack_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicPlayer_C::BndEvt__ButtonSkipBack_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.BndEvt__ButtonSkipBack_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");

	UMusicPlayer_C_BndEvt__ButtonSkipBack_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.BndEvt__ButtonSkipForward_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicPlayer_C::BndEvt__ButtonSkipForward_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.BndEvt__ButtonSkipForward_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMusicPlayer_C_BndEvt__ButtonSkipForward_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_45_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
void UMusicPlayer_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_45_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_45_OnMouseCaptureEndEvent__DelegateSignature");

	UMusicPlayer_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_45_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicPlayer_C::BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature");

	UMusicPlayer_C_BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMusicPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Construct");

	UMusicPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.BndEvt__Slider_Time_K2Node_ComponentBoundEvent_146_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
void UMusicPlayer_C::BndEvt__Slider_Time_K2Node_ComponentBoundEvent_146_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.BndEvt__Slider_Time_K2Node_ComponentBoundEvent_146_OnMouseCaptureEndEvent__DelegateSignature");

	UMusicPlayer_C_BndEvt__Slider_Time_K2Node_ComponentBoundEvent_146_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.BndEvt__Slider_Time_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)
void UMusicPlayer_C::BndEvt__Slider_Time_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.BndEvt__Slider_Time_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature");

	UMusicPlayer_C_BndEvt__Slider_Time_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.Play Time
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*              PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlaybackPercent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicPlayer_C::Play_Time(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Play Time");

	UMusicPlayer_C_Play_Time_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.Next Track
// (BlueprintCallable, BlueprintEvent)
void UMusicPlayer_C::Next_Track()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Next Track");

	UMusicPlayer_C_Next_Track_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.Load Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicPlayer_C::Load_Sound(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Load Sound");

	UMusicPlayer_C_Load_Sound_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.Play Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              NewSound                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicPlayer_C::Play_Sound(class USoundBase* NewSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.Play Sound");

	UMusicPlayer_C_Play_Sound_Params params;
	params.NewSound = NewSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicPlayer.MusicPlayer_C.ExecuteUbergraph_MusicPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicPlayer_C::ExecuteUbergraph_MusicPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicPlayer.MusicPlayer_C.ExecuteUbergraph_MusicPlayer");

	UMusicPlayer_C_ExecuteUbergraph_MusicPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
