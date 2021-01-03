#pragma once

// Name: S, Version: b

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MusicPlayer.MusicPlayer_C.Play Music
struct UMusicPlayer_C_Play_Music_Params
{
};

// Function MusicPlayer.MusicPlayer_C.Get Music AC
struct UMusicPlayer_C_Get_Music_AC_Params
{
	class UAudioComponent*                             MusicAC;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicPlayer.MusicPlayer_C.Get Song Progress
struct UMusicPlayer_C_Get_Song_Progress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicPlayer.MusicPlayer_C.GetPercent_1
struct UMusicPlayer_C_GetPercent_1_Params
{
};

// Function MusicPlayer.MusicPlayer_C.Get_TBSongName_Text_1
struct UMusicPlayer_C_Get_TBSongName_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function MusicPlayer.MusicPlayer_C.Update Menu Settings
struct UMusicPlayer_C_Update_Menu_Settings_Params
{
};

// Function MusicPlayer.MusicPlayer_C.Mute Audio
struct UMusicPlayer_C_Mute_Audio_Params
{
	bool                                               Mute;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MusicPlayer.MusicPlayer_C.Refresh Audio
struct UMusicPlayer_C_Refresh_Audio_Params
{
};

// Function MusicPlayer.MusicPlayer_C.Skip Track
struct UMusicPlayer_C_Skip_Track_Params
{
	bool                                               Forward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MusicPlayer.MusicPlayer_C.OnLoaded_64894CBD4CB9747691437E9B69432F5B
struct UMusicPlayer_C_OnLoaded_64894CBD4CB9747691437E9B69432F5B_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicPlayer.MusicPlayer_C.Construct
struct UMusicPlayer_C_Construct_Params
{
};

// Function MusicPlayer.MusicPlayer_C.BndEvt__ButtonPlayPause_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UMusicPlayer_C_BndEvt__ButtonPlayPause_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicPlayer.MusicPlayer_C.BndEvt__ButtonSkipBack_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
struct UMusicPlayer_C_BndEvt__ButtonSkipBack_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicPlayer.MusicPlayer_C.BndEvt__ButtonSkipForward_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMusicPlayer_C_BndEvt__ButtonSkipForward_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicPlayer.MusicPlayer_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_45_OnMouseCaptureEndEvent__DelegateSignature
struct UMusicPlayer_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_45_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function MusicPlayer.MusicPlayer_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature
struct UMusicPlayer_C_BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicPlayer.MusicPlayer_C.BndEvt__Slider_Time_K2Node_ComponentBoundEvent_146_OnMouseCaptureEndEvent__DelegateSignature
struct UMusicPlayer_C_BndEvt__Slider_Time_K2Node_ComponentBoundEvent_146_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function MusicPlayer.MusicPlayer_C.BndEvt__Slider_Time_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
struct UMusicPlayer_C_BndEvt__Slider_Time_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function MusicPlayer.MusicPlayer_C.Play Time
struct UMusicPlayer_C_Play_Time_Params
{
	class USoundWave*                                  PlayingSoundWave;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlaybackPercent;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicPlayer.MusicPlayer_C.Next Track
struct UMusicPlayer_C_Next_Track_Params
{
};

// Function MusicPlayer.MusicPlayer_C.Load Sound
struct UMusicPlayer_C_Load_Sound_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicPlayer.MusicPlayer_C.Play Sound
struct UMusicPlayer_C_Play_Sound_Params
{
	class USoundBase*                                  NewSound;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicPlayer.MusicPlayer_C.ExecuteUbergraph_MusicPlayer
struct UMusicPlayer_C_ExecuteUbergraph_MusicPlayer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
