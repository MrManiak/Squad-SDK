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

// BlueprintGeneratedClass BP_EquippableRallyPoint.BP_EquippableRallyPoint_C
// 0x0008 (FullSize[0x0488] - InheritedSize[0x0480])
class ABP_EquippableRallyPoint_C : public ABP_GenericEquippableItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EquippableRallyPoint.BP_EquippableRallyPoint_C");
		return ptr;
	}



	void Post_Place_Rally();
	void ReceiveBeginPlay();
	void On_Rally_Created_Successfully();
	void Attempt_Place_Rally();
	void BPBeginUse();
	void ExecuteUbergraph_BP_EquippableRallyPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
