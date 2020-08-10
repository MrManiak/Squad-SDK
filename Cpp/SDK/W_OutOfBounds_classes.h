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

// WidgetBlueprintGeneratedClass W_OutOfBounds.W_OutOfBounds_C
// 0x0074 (FullSize[0x0254] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_02AB - 0x0000 // Minimum to subtract -> (0050)
class UW_OutOfBounds_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_02AB, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02AB, class UWidgetAnimation*,                                               RepeatAnim);                                               // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02AB, class UImage*,                                                         Image_1);                                                  // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_02AB, class UImage*,                                                         Line);                                                     // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_02AB, float,                                                                 Kill_Timestamp);                                           // 0x0250(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_OutOfBounds.W_OutOfBounds_C");
		return ptr;
	}


	void Show_Out_of_Bounds_Widget();
	void Hide_Out_of_Bounds_Widget();
	void ExecuteUbergraph_W_OutOfBounds(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
