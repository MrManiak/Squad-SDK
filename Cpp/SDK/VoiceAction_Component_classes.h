#pragma once

// Name: S, Version: b


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
// 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
class UVoiceAction_Component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Last_Voice_Time;                                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Current_Voice_Delay;                                       // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Additional_Voice_Delay;                                    // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Sound_Local_Offset;                                        // 0x00EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


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
