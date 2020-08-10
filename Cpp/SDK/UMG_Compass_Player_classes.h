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

// WidgetBlueprintGeneratedClass UMG_Compass_Player.UMG_Compass_Player_C
// 0x0018 (FullSize[0x02C8] - InheritedSize[0x02B0])
// LastOffsetWithSize(0x02B0)
#define PADDING_00DA - 0x0000 // Minimum to subtract -> (0000)
class UUMG_Compass_Player_C : public USQCompassPlayer
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00DA, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_00DA, class UImage*,                                                         BP_Medic_IMG);                                             // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_00DA, class UImage*,                                                         BPPlayer_IMG);                                             // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

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
