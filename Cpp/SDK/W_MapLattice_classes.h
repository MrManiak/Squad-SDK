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

// WidgetBlueprintGeneratedClass W_MapLattice.W_MapLattice_C
// 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
class UW_MapLattice_C : public USQAASGraphLattice
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MapLattice.W_MapLattice_C");
		return ptr;
	}



	void Initialize();
	void Update_Lattice_Opacity();
	void Construct();
	void ExecuteUbergraph_W_MapLattice(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
