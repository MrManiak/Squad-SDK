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

// WidgetBlueprintGeneratedClass W_PacketLossIndicator.W_PacketLossIndicator_C
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
// LastOffsetWithSize(0x0260)
#define PADDING_01EF - 0x0000 // Minimum to subtract -> (0000)
class UW_PacketLossIndicator_C : public USQPacketLossWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01EF, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0260(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_01EF, class UImage*,                                                         PacketLossImage);                                          // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_01EF, class UTextBlock*,                                                     PercentText);                                              // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PacketLossIndicator.W_PacketLossIndicator_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_PacketLossIndicator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
