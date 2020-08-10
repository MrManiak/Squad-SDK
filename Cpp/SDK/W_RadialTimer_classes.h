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

// WidgetBlueprintGeneratedClass W_RadialTimer.W_RadialTimer_C
// 0x0020 (FullSize[0x0270] - InheritedSize[0x0250])
// LastOffsetWithSize(0x0250)
#define PADDING_028F - 0x0000 // Minimum to subtract -> (0000)
class UW_RadialTimer_C : public USQProgressWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_028F, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0250(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_028F, class UImage*,                                                         RadialBar);                                                // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_028F, bool,                                                                  Reversed);                                                 // 0x0260(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0018 PADDING_028F, class UMaterialInstanceDynamic*,                                       Material);                                                 // 0x0268(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RadialTimer.W_RadialTimer_C");
		return ptr;
	}


	void SetProgress(float ProgressPct);
	void BPOnTimerStarted();
	void BPOnTimerProgress(float RemainingPct);
	void BPOnTimerCanceled();
	void Construct();
	void ExecuteUbergraph_W_RadialTimer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
