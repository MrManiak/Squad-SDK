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

// BlueprintGeneratedClass BPI_Items.BPI_Items_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBPI_Items_C : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Items.BPI_Items_C");
		return ptr;
	}


	void Pickup_Item(class APlayerController* Player);
	void Player_Left_Radius(class APlayerController* Player);
	void Player_Enter_Radius(class APlayerController* Player, bool Can_Pickup);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
