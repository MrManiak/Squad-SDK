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

// BlueprintGeneratedClass BP_CommandActor.BP_CommandActor_C
// 0x002C (FullSize[0x0288] - InheritedSize[0x025C])
// LastOffsetWithSize(0x025C)
#define PADDING_04F0 - 0x0000 // Minimum to subtract -> (000C)
class ABP_CommandActor_C : public ASQCommandActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x000C PADDING_04F0, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0268(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0014 PADDING_04F0, class UArrowComponent*,                                                Arrow);                                                    // 0x0270(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_04F0, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0278(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_04F0, bool,                                                                  Action_Destroyed);                                         // 0x0280(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04F0, float,                                                                 Destroy_Delay_after_Action_Destroyed);                     // 0x0284(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CommandActor.BP_CommandActor_C");
		return ptr;
	}


	void Server_Start_Active_Duration();
	void Server_End_Active_Duration();
	void Try_to_Load_and_Play_Sound(unsigned char ID);
	void Owner_Load_and_Play_Sound(unsigned char ID);
	void Server_Destroy_Action();
	void Multi_Death_Cosmetics();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CommandActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
