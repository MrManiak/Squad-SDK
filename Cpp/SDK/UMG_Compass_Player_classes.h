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

// WidgetBlueprintGeneratedClass UMG_Compass_Player.UMG_Compass_Player_C
// 0x0018 (FullSize[0x02C8] - InheritedSize[0x02B0])
class UUMG_Compass_Player_C : public USQCompassPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BP_Medic_IMG;                                              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BPPlayer_IMG;                                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Compass_Player.UMG_Compass_Player_C");
		return ptr;
	}



	void Construct();
	void BPInit();
	void ExecuteUbergraph_UMG_Compass_Player(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
