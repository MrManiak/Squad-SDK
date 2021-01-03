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

// BlueprintGeneratedClass BP_CommanderActionCondition.BP_CommanderActionCondition_C
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UBP_CommanderActionCondition_C : public UObject
{
public:
	class AWorldSettings*                              World_Settings;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CommanderActionCondition.BP_CommanderActionCondition_C");
		return ptr;
	}



	void Can_Use_Actions(class ASQPlayerController* Player, class UClass* Command_Option, bool Require_Active, bool* Valid, struct FText* Out_Reason);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
