// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_SQMapCore.W_SQMapCore_C
// 0x0260 (0x0440 - 0x01E0)
public class UW_SQMapCore_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UW_SQMapBody_C>                    _offMapBody                                                    = new ExternalOffset<UW_SQMapBody_C>(0x0238, true);            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZoomAmount                                                 = new ExternalOffset<float>(0x0240);                           // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMapMaterialInstance                                        = new ExternalOffset<UMaterialInstanceDynamic>(0x0248, true);  // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offSL_Menu_Class                                              = new ExternalOffset<UClass>(0x0250, true);                    // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_GridMenu_C>                     _offSL_Grid_Menu                                               = new ExternalOffset<UW_GridMenu_C>(0x0258, true);             // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsPanning                                                 = new ExternalOffset<byte/*(bool)*/>(0x0260);                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FKey>                              _offPanButton                                                  = new ExternalOffset<FKey>(0x0268, false);                     // 0x0268(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZoomScrollRate                                             = new ExternalOffset<float>(0x0280);                           // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZoomMax                                                    = new ExternalOffset<float>(0x0284);                           // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZoomMin                                                    = new ExternalOffset<float>(0x0288);                           // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTargetZoom                                                 = new ExternalOffset<float>(0x028C);                           // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offFollowPosition                                             = new ExternalOffset<FVector2D>(0x0290, false);                // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offFollowPositionRelative                                     = new ExternalOffset<byte/*(bool)*/>(0x0298);                  // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offFollowing                                                  = new ExternalOffset<byte/*(bool)*/>(0x0299);                  // 0x0299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offEdge_padding                                               = new ExternalOffset<float>(0x029C);                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offStartingZoom                                               = new ExternalOffset<float>(0x02A0);                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMaxZoomFactor                                              = new ExternalOffset<float>(0x02A4);                           // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offZoomSpeed                                                  = new ExternalOffset<float>(0x02A8);                           // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMinimumMaxZoomClamp                                        = new ExternalOffset<float>(0x02AC);                           // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQCoreStateMapComponent>          _offMapComponent                                               = new ExternalOffset<USQCoreStateMapComponent>(0x02B0, true);  // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offCachedMouseLocationCoords                                  = new ExternalOffset<FString>(0x02B8, false);                  // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offCachedPlayerLocationCoords                                 = new ExternalOffset<FString>(0x02C8, false);                  // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offZoomCenterOnPlayer                                         = new ExternalOffset<byte/*(bool)*/>(0x02D8);                  // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offRequired_Pan_Delta                                         = new ExternalOffset<float>(0x02DC);                           // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offDid_Pan                                                    = new ExternalOffset<byte/*(bool)*/>(0x02E0);                  // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UW_MousePosition_C>                _offREF_Widget_Mouse_Pos                                       = new ExternalOffset<UW_MousePosition_C>(0x02E8, true);        // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offMarkedMouseLocationCoords                                  = new ExternalOffset<FString>(0x02F0, false);                  // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Ping                                                   = new ExternalOffset<byte/*(bool)*/>(0x0300);                  // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offPing_Timer                                                 = new ExternalOffset<FTimerHandle>(0x0308, false);             // 0x0308(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbZoomCenterToCursor                                        = new ExternalOffset<byte/*(bool)*/>(0x0310);                  // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FVector>                           _offLast_World_Location_Zero_Based                             = new ExternalOffset<FVector>(0x0314, false);                  // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Show_Mouse_Coords                                      = new ExternalOffset<byte/*(bool)*/>(0x0320);                  // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FPointerEvent>                     _offLast_Click_Event                                           = new ExternalOffset<FPointerEvent>(0x0328, false);            // 0x0328(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FScriptMulticastDelegate>          _offMouse_Down                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0398, false); // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Create_Map_Menu                                        = new ExternalOffset<byte/*(bool)*/>(0x03A8);                  // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UClass>                            _offFireteam_Menu_Class                                        = new ExternalOffset<UClass>(0x03B0, true);                    // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_GridMenu_C>                     _offFireteam_Menu                                              = new ExternalOffset<UW_GridMenu_C>(0x03B8, true);             // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FPointerEvent>                     _offMouse_Move_Event                                           = new ExternalOffset<FPointerEvent>(0x03C0, false);            // 0x03C0(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnUpdateZoom                                               = new ExternalOffset<FScriptMulticastDelegate>(0x0430, false); // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UW_SQMapBody_C                                     MapBody                                                        => _offMapBody.GetValue();
	public float                                              ZoomAmount                                                     => _offZoomAmount.GetValue();
	public UMaterialInstanceDynamic                           MapMaterialInstance                                            => _offMapMaterialInstance.GetValue();
	public UClass                                             SL_Menu_Class                                                  => _offSL_Menu_Class.GetValue();
	public UW_GridMenu_C                                      SL_Grid_Menu                                                   => _offSL_Grid_Menu.GetValue();
	public byte/*(bool)*/                                     bIsPanning                                                     => _offbIsPanning.GetValue();
	public FKey                                               PanButton                                                      => _offPanButton.GetValue();
	public float                                              ZoomScrollRate                                                 => _offZoomScrollRate.GetValue();
	public float                                              ZoomMax                                                        => _offZoomMax.GetValue();
	public float                                              ZoomMin                                                        => _offZoomMin.GetValue();
	public float                                              TargetZoom                                                     => _offTargetZoom.GetValue();
	public FVector2D                                          FollowPosition                                                 => _offFollowPosition.GetValue();
	public byte/*(bool)*/                                     FollowPositionRelative                                         => _offFollowPositionRelative.GetValue();
	public byte/*(bool)*/                                     Following                                                      => _offFollowing.GetValue();
	public float                                              Edge_padding                                                   => _offEdge_padding.GetValue();
	public float                                              StartingZoom                                                   => _offStartingZoom.GetValue();
	public float                                              MaxZoomFactor                                                  => _offMaxZoomFactor.GetValue();
	public float                                              ZoomSpeed                                                      => _offZoomSpeed.GetValue();
	public float                                              MinimumMaxZoomClamp                                            => _offMinimumMaxZoomClamp.GetValue();
	public USQCoreStateMapComponent                           MapComponent                                                   => _offMapComponent.GetValue();
	public FString                                            CachedMouseLocationCoords                                      => _offCachedMouseLocationCoords.GetValue();
	public FString                                            CachedPlayerLocationCoords                                     => _offCachedPlayerLocationCoords.GetValue();
	public byte/*(bool)*/                                     ZoomCenterOnPlayer                                             => _offZoomCenterOnPlayer.GetValue();
	public float                                              Required_Pan_Delta                                             => _offRequired_Pan_Delta.GetValue();
	public byte/*(bool)*/                                     Did_Pan                                                        => _offDid_Pan.GetValue();
	public UW_MousePosition_C                                 REF_Widget_Mouse_Pos                                           => _offREF_Widget_Mouse_Pos.GetValue();
	public FString                                            MarkedMouseLocationCoords                                      => _offMarkedMouseLocationCoords.GetValue();
	public byte/*(bool)*/                                     Can_Ping                                                       => _offCan_Ping.GetValue();
	public FTimerHandle                                       Ping_Timer                                                     => _offPing_Timer.GetValue();
	public byte/*(bool)*/                                     bZoomCenterToCursor                                            => _offbZoomCenterToCursor.GetValue();
	public FVector                                            Last_World_Location_Zero_Based                                 => _offLast_World_Location_Zero_Based.GetValue();
	public byte/*(bool)*/                                     Can_Show_Mouse_Coords                                          => _offCan_Show_Mouse_Coords.GetValue();
	public FPointerEvent                                      Last_Click_Event                                               => _offLast_Click_Event.GetValue();
	public FScriptMulticastDelegate                           Mouse_Down                                                     => _offMouse_Down.GetValue();
	public byte/*(bool)*/                                     Can_Create_Map_Menu                                            => _offCan_Create_Map_Menu.GetValue();
	public UClass                                             Fireteam_Menu_Class                                            => _offFireteam_Menu_Class.GetValue();
	public UW_GridMenu_C                                      Fireteam_Menu                                                  => _offFireteam_Menu.GetValue();
	public FPointerEvent                                      Mouse_Move_Event                                               => _offMouse_Move_Event.GetValue();
	public FScriptMulticastDelegate                           OnUpdateZoom                                                   => _offOnUpdateZoom.GetValue();
	#endregion


}


}