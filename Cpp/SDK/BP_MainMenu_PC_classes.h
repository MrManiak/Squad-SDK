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

// BlueprintGeneratedClass BP_MainMenu_PC.BP_MainMenu_PC_C
// 0x0018 (FullSize[0x09C0] - InheritedSize[0x09A8])
class ABP_MainMenu_PC_C : public ASQPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    PossessedMenuCam;                                          // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainMenu_PC.BP_MainMenu_PC_C");
		return ptr;
	}



	void Possess_A_Menu_Cam();
	void ReceiveBeginPlay();
	void Possess_Menu_Cam(class AMenuCamPawn_C* NewParam);
	void ExecuteUbergraph_BP_MainMenu_PC(int EntryPoint);
	void PossessedMenuCam__DelegateSignature(class AMenuCamPawn_C* NewMenuCam);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
