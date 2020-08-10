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

// WidgetBlueprintGeneratedClass W_Director_Frontline.W_Director_Frontline_C
// 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
// LastOffsetWithSize(0x0290)
#define PADDING_0122 - 0x0000 // Minimum to subtract -> (0000)
class UW_Director_Frontline_C : public UW_Director_ActionControl_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0122, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0290(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0122, class UImage*,                                                         Arrows);                                                   // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0122, class USizeBox*,                                                       SizeBox_1);                                                // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0122, class UMaterialInstanceDynamic*,                                       MI_Arrows);                                                // 0x02A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Director_Frontline.W_Director_Frontline_C");
		return ptr;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Tiling();
	void Construct();
	void ExecuteUbergraph_W_Director_Frontline(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
