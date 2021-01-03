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

// WidgetBlueprintGeneratedClass W_SQMapCore.W_SQMapCore_C
// 0x0210 (FullSize[0x0440] - InheritedSize[0x0230])
class UW_SQMapCore_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UW_SQMapBody_C*                              MapBody;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              ZoomAmount;                                                // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JAKE[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    MapMaterialInstance;                                       // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      SL_Menu_Class;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_GridMenu_C*                               SL_Grid_Menu;                                              // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsPanning;                                                // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DE7G[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        PanButton;                                                 // 0x0268(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              ZoomScrollRate;                                            // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ZoomMax;                                                   // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ZoomMin;                                                   // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetZoom;                                                // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   FollowPosition;                                            // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FollowPositionRelative;                                    // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Following;                                                 // 0x0299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3BU4[0x2];                                     // 0x029A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Edge_Padding;                                              // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingZoom;                                              // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxZoomFactor;                                             // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ZoomSpeed;                                                 // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumMaxZoomClamp;                                       // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQCoreStateMapComponent*                    MapComponent;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     CachedMouseLocationCoords;                                 // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CachedPlayerLocationCoords;                                // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               ZoomCenterOnPlayer;                                        // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CFYR[0x3];                                     // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Required_Pan_Delta;                                        // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Did_Pan;                                                   // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V96C[0x7];                                     // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_MousePosition_C*                          REF_Widget_Mouse_Pos;                                      // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     MarkedMouseLocationCoords;                                 // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Can_Ping;                                                  // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1FGS[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Ping_Timer;                                                // 0x0308(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               bZoomCenterToCursor;                                       // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HAFY[0x3];                                     // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Last_World_Location_Zero_Based;                            // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_Show_Mouse_Coords;                                     // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UTB2[0x7];                                     // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerEvent                               Last_Click_Event;                                          // 0x0328(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    Mouse_Down;                                                // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Can_Create_Map_Menu;                                       // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NH6B[0x7];                                     // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Fireteam_Menu_Class;                                       // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_GridMenu_C*                               Fireteam_Menu;                                             // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                               Mouse_Move_Event;                                          // 0x03C0(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnUpdateZoom;                                              // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SQMapCore.W_SQMapCore_C");
		return ptr;
	}



	void Create_Fireteam_Actions_Menu();
	void Can_Place_Map_Menu(bool* Valid);
	void FindZoomLocation(struct FVector2D* OutScreenLocation);
	void SetMapTexture(class UTexture* Value);
	void InitializeZoomLevels();
	void AdjustVerticalBarPadding(float TargetZoom);
	void AdjustHorizontalBarPadding(float TargetZoom);
	void Remove_Mouse_Pos();
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseWheelZoom(float MouseAxis);
	void UpdatePlayerCoordinates();
	void UpdateCursorGridLocationString(const struct FPointerEvent& MouseInput);
	void ScreenLocationToMapLocation(const struct FVector2D& ScreenLocation, struct FVector2D* MapLocation);
	void Setup(class USQCoreStateMapComponent* MapComponent);
	void PerformFollow(class UPanelWidget* PanLayer, const struct FVector2D& FocusPosition, bool RelativePosition, float CacheScale, class UUserWidget* RootLayer);
	void PerformPan(const struct FVector2D& Vector, bool IsScreenDelta, float CacheScale, class UUserWidget* RootLayer, class UPanelWidget* PanLayer);
	void PerformZoom(float TargetZoom, const struct FVector2D& ZoomPosition, class UUserWidget* RootLayer, class UPanelWidget* ZoomLayer, class UPanelWidget* PanLayer, bool ZoomWidth, bool ZoomHeight);
	void GetElementRoot(class UPanelWidget** Out_Root);
	void Clear_Selections();
	void UpdateFollow();
	void UpdateZoom(float DeltaTime);
	void Unfollow();
	void ScreenToPanPosition(const struct FVector2D& ScreenPosition, struct FVector2D* PanPosition);
	void Follow(bool Instant, const struct FVector2D& FocusPosition, bool RelativePosition, float ClampCacheScale);
	void ClampPanPosition(const struct FVector2D& Position, float CacheScale, class UUserWidget* RootLayer, class UPanelWidget* PanLayer, struct FVector2D* Result);
	void ScreenToPanVector(const struct FVector2D& ScreenVector, class UPanelWidget* PanLayer, struct FVector2D* PanVector);
	void MovePan(const struct FVector2D& Delta, bool IsScreenDelta, float ClampCacheScale);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void EndPan();
	void StartPan();
	void Remove_Floating_Widgets();
	void Create_Actions_Menu();
	void Hide_SL_Menu(bool New_Visible, const struct FGeometry& Visible_Geometry, const struct FPointerEvent& Mouse_Event);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void InitialiseMapTexture();
	void Zoom(bool Instant, float Amount, bool IsUpdate);
	void Construct();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Allow_Ping();
	void ExecuteUbergraph_W_SQMapCore(int EntryPoint);
	void OnUpdateZoom__DelegateSignature();
	void Mouse_Down__DelegateSignature(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
