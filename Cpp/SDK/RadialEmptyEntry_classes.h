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

// WidgetBlueprintGeneratedClass RadialEmptyEntry.RadialEmptyEntry_C
// 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
// LastOffsetWithSize(0x02F8)
#define PADDING_0207 - 0x0000 // Minimum to subtract -> (0000)
class URadialEmptyEntry_C : public USQRadialButton
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0207, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02F8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadialEmptyEntry.RadialEmptyEntry_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_RadialEmptyEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
