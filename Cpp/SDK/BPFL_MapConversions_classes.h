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

// BlueprintGeneratedClass BPFL_MapConversions.BPFL_MapConversions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPFL_MapConversions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_MapConversions.BPFL_MapConversions_C");
		return ptr;
	}



	void STATIC_Get_World_Distance_to_Pixel_Distance(float In_Centimetres, class UObject* __WorldContext, float* Pixel);
	void STATIC_Get_Map_Distance_to_Pixel_Distance(float Map_Distance, class UObject* __WorldContext, float* Pixel_Distance);
	void STATIC_Get_Pixel_Distance_to_World_Distance(float Pixel_Distance, class UObject* __WorldContext, float* World_Distance);
	struct FVector STATIC_Mouse_Position_to_World_Location(const struct FVector2D& Mouse_Screen_Position, class UObject* __WorldContext);
	void STATIC_Map_Position_to_World_Location(const struct FVector2D& Relative_Map_Position, class UObject* __WorldContext, struct FVector* World_Location__XY_);
	void STATIC_Get_Pixel_Distance_from_Relative_Origin(const struct FVector2D& Relative_Map_Position, class UPanelWidget* Map_Body, class UObject* __WorldContext, float* Pixel_Distance);
	void STATIC_Get_Angle_From_Mouse_Vector(const struct FVector2D& Relative_Map_Position, class UPanelWidget* Map_Body, class UObject* __WorldContext, float* Angle, struct FRotator* World_Rotation);
	void STATIC_Get_World_Distance_from_Relative_Origin(const struct FVector2D& Relative_Map_Position, class UPanelWidget* Map_Body, class UObject* __WorldContext, float* World_Distance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
