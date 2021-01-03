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

// BlueprintGeneratedClass Library_SquadUI.Library_SquadUI_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULibrary_SquadUI_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Library_SquadUI.Library_SquadUI_C");
		return ptr;
	}



	void STATIC_Add_Notification(const struct FText& Text, ESQNotificationTypes Type, class UObject* __WorldContext);
	void STATIC_Get_SQHUD_Colors(class UObject* __WorldContext, class USQColorsDataAsset** ColorsDataAsset);
	void STATIC_Save_UI_Save_Data(class USaveData_UI_C* SaveGameObject, class UObject* __WorldContext);
	void STATIC_Get_UI_Save_Data(class UObject* __WorldContext, class USaveData_UI_C** UI_Save_Data);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
