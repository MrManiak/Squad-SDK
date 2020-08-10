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

// BlueprintGeneratedClass BP_GenericMapMarker.BP_GenericMapMarker_C
// 0x0027 (FullSize[0x02A0] - InheritedSize[0x0279])
// LastOffsetWithSize(0x0279)
#define PADDING_0C9E - 0x0000 // Minimum to subtract -> (0007)
class ABP_GenericMapMarker_C : public ASQMapMarker
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0C9E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0280(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000F PADDING_0C9E, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0288(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0C9E, struct FLinearColor,                                                   DefaultTint);                                              // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericMapMarker.BP_GenericMapMarker_C");
		return ptr;
	}


	void Remove_FT_Markers();
	void Tint();
	void MarkerIsRelevant(class AController* Controller, bool* Success);
	void UserConstructionScript();
	void SetTexture(class UTexture2D* Texture);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_GenericMapMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
