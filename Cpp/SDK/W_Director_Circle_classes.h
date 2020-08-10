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

// WidgetBlueprintGeneratedClass W_Director_Circle.W_Director_Circle_C
// 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
// LastOffsetWithSize(0x0290)
#define PADDING_04EF - 0x0000 // Minimum to subtract -> (0000)
class UW_Director_Circle_C : public UW_Director_ActionControl_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04EF, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0290(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04EF, class UBorder*,                                                        Fill);                                                     // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04EF, class USizeBox*,                                                       SizeBox_1);                                                // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Director_Circle.W_Director_Circle_C");
		return ptr;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_Director_Circle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
