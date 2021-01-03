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

// BlueprintGeneratedClass BP_SquadGameInstance.BP_SquadGameInstance_C
// 0x0020 (FullSize[0x0598] - InheritedSize[0x0578])
class UBP_SquadGameInstance_C : public USQGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0578(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USaveDataUIWrapper_C*                        UISaveDataWrapper;                                         // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    UI_Data_Changed;                                           // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


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
