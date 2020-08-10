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

// WidgetBlueprintGeneratedClass W_PlayerPosition.W_PlayerPosition_C
// 0x0068 (FullSize[0x0248] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0494 - 0x0000 // Minimum to subtract -> (0050)
class UW_PlayerPosition_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0494, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0494, class UTextBlock*,                                                     PlayerPositionText);                                       // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0494, class ABP_HUD_C*,                                                      HUD);                                                      // 0x0240(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PlayerPosition.W_PlayerPosition_C");
		return ptr;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_PlayerPosition(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
