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

// BlueprintGeneratedClass BP_SquadGameInstance.BP_SquadGameInstance_C
// 0x0050 (FullSize[0x05C8] - InheritedSize[0x0578])
// LastOffsetWithSize(0x0578)
#define PADDING_04AF - 0x0000 // Minimum to subtract -> (0030)
class UBP_SquadGameInstance_C : public USQGameInstance
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0030 PADDING_04AF, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x05A8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0038 PADDING_04AF, class USaveDataUIWrapper_C*,                                           UISaveDataWrapper);                                        // 0x05B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_04AF, struct FScriptMulticastDelegate,                                       UI_Data_Changed);                                          // 0x05B8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SquadGameInstance.BP_SquadGameInstance_C");
		return ptr;
	}


	void Get_UI_Data(class USaveData_UI_C** AsSave_Data_UI);
	void Set_UI_Data(class USaveData_UI_C* UISaveData);
	void ReceiveInit();
	void ExecuteUbergraph_BP_SquadGameInstance(int EntryPoint);
	void UI_Data_Changed__DelegateSignature(class USaveData_UI_C* Data);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
