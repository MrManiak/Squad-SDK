#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VoiceAction_Component.VoiceAction_Component_C
// 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_006E - 0x0000 // Minimum to subtract -> (0010)
class UVoiceAction_Component_C : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_006E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00D8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_006E, float,                                                                 Last_Voice_Time);                                          // 0x00E0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_006E, float,                                                                 Current_Voice_Delay);                                      // 0x00E4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_006E, float,                                                                 Additional_Voice_Delay);                                   // 0x00E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_006E, struct FVector,                                                        Sound_Local_Offset);                                       // 0x00EC(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VoiceAction_Component.VoiceAction_Component_C");
		return ptr;
	}


	void Try_to_Play_Voice(class USoundBase* Voice, bool* Played);
	void Multicast_Voice(class USoundBase* Sound);
	void Server_Play_Voice(class USoundBase* Sound);
	void ExecuteUbergraph_VoiceAction_Component(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
