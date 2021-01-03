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

// WidgetBlueprintGeneratedClass W_FobBleedRadialTimer.W_FobBleedRadialTimer_C
// 0x0020 (FullSize[0x0270] - InheritedSize[0x0250])
class UW_FobBleedRadialTimer_C : public USQProgressWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      RadialBar;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               Reversed;                                                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J255[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    Material;                                                  // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_FobBleedRadialTimer.W_FobBleedRadialTimer_C");
		return ptr;
	}



	void SetProgress(float ProgressPct);
	void BPOnTimerStarted();
	void BPOnTimerProgress(float RemainingPct);
	void BPOnTimerCanceled();
	void Construct();
	void ExecuteUbergraph_W_FobBleedRadialTimer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
