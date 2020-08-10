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

// BlueprintGeneratedClass TC_HexGraph.TC_HexGraph_C
// 0x0120 (0x0358 - 0x0238)
public class ATC_HexGraph_C : AActor
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTCScalableBleedComponent_C>       _offTCScalableBleedComponent                                   = new ExternalOffset<UTCScalableBleedComponent_C>(0x0250, true); // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBoxComponent>                     _offNoCollisionDebugExtent                                     = new ExternalOffset<UBoxComponent>(0x0258, true);             // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBillboardComponent>               _offHexBillboard                                               = new ExternalOffset<UBillboardComponent>(0x0260, true);       // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USplineComponent>                  _offSpline                                                     = new ExternalOffset<USplineComponent>(0x0268, true);          // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offHex_Extent                                                 = new ExternalOffset<FVector>(0x0270, false);                  // 0x0270(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<ATC_HexZone_C>>             _offTC_Zones                                                   = new ExternalOffset<TArray<ATC_HexZone_C>>(0x0280, false);    // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<TArray<float>>                     _offHex_Max_Distance_From_Spline                               = new ExternalOffset<TArray<float>>(0x0290, false);            // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<float>                             _offHex_XY_Scale                                               = new ExternalOffset<float>(0x02A0);                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offStart_Spline_Ownership                                     = new ExternalOffset<float>(0x02A4);                           // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offEnd_Spline_Ownership                                       = new ExternalOffset<float>(0x02A8);                           // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offTest_Setup_Once                                            = new ExternalOffset<byte/*(bool)*/>(0x02AC);                  // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offUse_Hex_Control___as_Win_Condition                         = new ExternalOffset<byte/*(bool)*/>(0x02AD);                  // 0x02AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offHex_Control___Target_to_Win                                = new ExternalOffset<float>(0x02B0);                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offTest_Constant                                              = new ExternalOffset<byte/*(bool)*/>(0x02B4);                  // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offHex_Z_Scale                                                = new ExternalOffset<float>(0x02B8);                           // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offFlip_Teams                                                 = new ExternalOffset<byte/*(bool)*/>(0x02BC);                  // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offWidth_Spacer                                               = new ExternalOffset<float>(0x02C0);                           // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offHeight_Spacer                                              = new ExternalOffset<float>(0x02C4);                           // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offHex_Widths                                                 = new ExternalOffset<int>(0x02C8);                             // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offHex_Lengths                                                = new ExternalOffset<int>(0x02CC);                             // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<FTransform>>                _offHex_Transform_Array                                        = new ExternalOffset<TArray<FTransform>>(0x02D0, false);       // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<float>                             _offStart_Random_Anchor_Distance                               = new ExternalOffset<float>(0x02E0);                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offEnd_Random_Anchor_Distance                                 = new ExternalOffset<float>(0x02E4);                           // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<ATC_HexZone_C>>             _offTeam_1_Anchors                                             = new ExternalOffset<TArray<ATC_HexZone_C>>(0x02E8, false);    // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	private ExternalOffset<TArray<ATC_HexZone_C>>             _offTeam_2_Anchors                                             = new ExternalOffset<TArray<ATC_HexZone_C>>(0x02F8, false);    // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	private ExternalOffset<ATC_HexZone_C>                     _offTeam_1_Anchor                                              = new ExternalOffset<ATC_HexZone_C>(0x0308, true);             // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ATC_HexZone_C>                     _offTeam_2_Anchor                                              = new ExternalOffset<ATC_HexZone_C>(0x0310, true);             // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<ATC_HexZone_C>>             _offCurrent_Hexes_in_Round                                     = new ExternalOffset<TArray<ATC_HexZone_C>>(0x0318, false);    // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<TArray<int>>                       _offTeam_Hex_Ownership                                         = new ExternalOffset<TArray<int>>(0x0328, false);              // 0x0328(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<int>                               _offTarget_Zones_To_Capture                                    = new ExternalOffset<int>(0x0338);                             // 0x0338(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offHex_Class                                                  = new ExternalOffset<UClass>(0x0340, true);                    // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDefault_Capture_Duration                                   = new ExternalOffset<float>(0x0348);                           // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offNearby_Hexes_Required_To_Cap                               = new ExternalOffset<int>(0x034C);                             // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offUncapped_Required_Players                                  = new ExternalOffset<int>(0x0350);                             // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offCapped_Required_Players                                    = new ExternalOffset<int>(0x0354);                             // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTCScalableBleedComponent_C                        TCScalableBleedComponent                                       => _offTCScalableBleedComponent.GetValue();
	public UBoxComponent                                      NoCollisionDebugExtent                                         => _offNoCollisionDebugExtent.GetValue();
	public UBillboardComponent                                HexBillboard                                                   => _offHexBillboard.GetValue();
	public USplineComponent                                   Spline                                                         => _offSpline.GetValue();
	public FVector                                            Hex_Extent                                                     => _offHex_Extent.GetValue();
	public TArray<ATC_HexZone_C>                              TC_Zones                                                       => _offTC_Zones.GetValue();
	public TArray<float>                                      Hex_Max_Distance_From_Spline                                   => _offHex_Max_Distance_From_Spline.GetValue();
	public float                                              Hex_XY_Scale                                                   => _offHex_XY_Scale.GetValue();
	public float                                              Start_Spline_Ownership                                         => _offStart_Spline_Ownership.GetValue();
	public float                                              End_Spline_Ownership                                           => _offEnd_Spline_Ownership.GetValue();
	public byte/*(bool)*/                                     Test_Setup_Once                                                => _offTest_Setup_Once.GetValue();
	public byte/*(bool)*/                                     Use_Hex_Control___as_Win_Condition                             => _offUse_Hex_Control___as_Win_Condition.GetValue();
	public float                                              Hex_Control___Target_to_Win                                    => _offHex_Control___Target_to_Win.GetValue();
	public byte/*(bool)*/                                     Test_Constant                                                  => _offTest_Constant.GetValue();
	public float                                              Hex_Z_Scale                                                    => _offHex_Z_Scale.GetValue();
	public byte/*(bool)*/                                     Flip_Teams                                                     => _offFlip_Teams.GetValue();
	public float                                              Width_Spacer                                                   => _offWidth_Spacer.GetValue();
	public float                                              Height_Spacer                                                  => _offHeight_Spacer.GetValue();
	public int                                                Hex_Widths                                                     => _offHex_Widths.GetValue();
	public int                                                Hex_Lengths                                                    => _offHex_Lengths.GetValue();
	public TArray<FTransform>                                 Hex_Transform_Array                                            => _offHex_Transform_Array.GetValue();
	public float                                              Start_Random_Anchor_Distance                                   => _offStart_Random_Anchor_Distance.GetValue();
	public float                                              End_Random_Anchor_Distance                                     => _offEnd_Random_Anchor_Distance.GetValue();
	public TArray<ATC_HexZone_C>                              Team_1_Anchors                                                 => _offTeam_1_Anchors.GetValue();
	public TArray<ATC_HexZone_C>                              Team_2_Anchors                                                 => _offTeam_2_Anchors.GetValue();
	public ATC_HexZone_C                                      Team_1_Anchor                                                  => _offTeam_1_Anchor.GetValue();
	public ATC_HexZone_C                                      Team_2_Anchor                                                  => _offTeam_2_Anchor.GetValue();
	public TArray<ATC_HexZone_C>                              Current_Hexes_in_Round                                         => _offCurrent_Hexes_in_Round.GetValue();
	public TArray<int>                                        Team_Hex_Ownership                                             => _offTeam_Hex_Ownership.GetValue();
	public int                                                Target_Zones_To_Capture                                        => _offTarget_Zones_To_Capture.GetValue();
	public UClass                                             Hex_Class                                                      => _offHex_Class.GetValue();
	public float                                              Default_Capture_Duration                                       => _offDefault_Capture_Duration.GetValue();
	public int                                                Nearby_Hexes_Required_To_Cap                                   => _offNearby_Hexes_Required_To_Cap.GetValue();
	public int                                                Uncapped_Required_Players                                      => _offUncapped_Required_Players.GetValue();
	public int                                                Capped_Required_Players                                        => _offCapped_Required_Players.GetValue();
	#endregion


}


}