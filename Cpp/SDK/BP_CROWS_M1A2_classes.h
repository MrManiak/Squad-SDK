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

// BlueprintGeneratedClass BP_CROWS_M1A2.BP_CROWS_M1A2_C
// 0x0008 (FullSize[0x04B0] - InheritedSize[0x04A8])
class ABP_CROWS_M1A2_C : public ABP_CROWS_Turret_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CROWS_M1A2.BP_CROWS_M1A2_C");
		return ptr;
	}



	void InpActEvt_DesignateTarget_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ServerSetStabilizationHeading();
	void ExecuteUbergraph_BP_CROWS_M1A2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
