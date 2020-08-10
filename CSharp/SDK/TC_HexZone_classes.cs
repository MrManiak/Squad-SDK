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

// BlueprintGeneratedClass TC_HexZone.TC_HexZone_C
// 0x00B1 (0x02E9 - 0x0238)
public class ATC_HexZone_C : AActor
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UTextRenderComponent>              _offTextRender                                                 = new ExternalOffset<UTextRenderComponent>(0x0250, true);      // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQCaptureZoneTCComponent>         _offSQCaptureZoneTC                                            = new ExternalOffset<USQCaptureZoneTCComponent>(0x0258, true); // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UArrowComponent>                   _offArrow                                                      = new ExternalOffset<UArrowComponent>(0x0260, true);           // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offHex                                                        = new ExternalOffset<UStaticMeshComponent>(0x0268, true);      // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_Hex                                                     = new ExternalOffset<UMaterialInstanceDynamic>(0x0270, true);  // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offHex_Num                                                    = new ExternalOffset<int>(0x0278);                             // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offFlag_Info_Changed                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0280, false); // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<TArray<ATC_HexZone_C>>             _offNeighbour_Hexes                                            = new ExternalOffset<TArray<ATC_HexZone_C>>(0x0290, false);    // 0x0290(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<ATC_HexGraph_C>                    _offTC_Graph                                                   = new ExternalOffset<ATC_HexGraph_C>(0x02A0, true);            // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInterface>                _offMaterial                                                   = new ExternalOffset<UMaterialInterface>(0x02A8, true);        // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<int>>                       _offNearby_Zone_Team_Counts                                    = new ExternalOffset<TArray<int>>(0x02B0, false);              // 0x02B0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<int>                               _offNearby_Hexes_Required_To_Cap                               = new ExternalOffset<int>(0x02C0);                             // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offLocked                                                     = new ExternalOffset<byte/*(bool)*/>(0x02C4);                  // 0x02C4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TArray<bool>>                      _offTouching_Anchor                                            = new ExternalOffset<TArray<bool>>(0x02C8, false);             // 0x02C8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Anchor                                                  = new ExternalOffset<byte/*(bool)*/>(0x02D8);                  // 0x02D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offProtected                                                  = new ExternalOffset<byte/*(bool)*/>(0x02D9);                  // 0x02D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<AActor>                            _offProtecting_Actor                                           = new ExternalOffset<AActor>(0x02E0, true);                    // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Protect_Neighbours                                     = new ExternalOffset<byte/*(bool)*/>(0x02E8);                  // 0x02E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UTextRenderComponent                               TextRender                                                     => _offTextRender.GetValue();
	public USQCaptureZoneTCComponent                          SQCaptureZoneTC                                                => _offSQCaptureZoneTC.GetValue();
	public UArrowComponent                                    Arrow                                                          => _offArrow.GetValue();
	public UStaticMeshComponent                               Hex                                                            => _offHex.GetValue();
	public UMaterialInstanceDynamic                           MI_Hex                                                         => _offMI_Hex.GetValue();
	public int                                                Hex_Num                                                        => _offHex_Num.GetValue();
	public FScriptMulticastDelegate                           Flag_Info_Changed                                              => _offFlag_Info_Changed.GetValue();
	public TArray<ATC_HexZone_C>                              Neighbour_Hexes                                                => _offNeighbour_Hexes.GetValue();
	public ATC_HexGraph_C                                     TC_Graph                                                       => _offTC_Graph.GetValue();
	public UMaterialInterface                                 Material                                                       => _offMaterial.GetValue();
	public TArray<int>                                        Nearby_Zone_Team_Counts                                        => _offNearby_Zone_Team_Counts.GetValue();
	public int                                                Nearby_Hexes_Required_To_Cap                                   => _offNearby_Hexes_Required_To_Cap.GetValue();
	public byte/*(bool)*/                                     Locked                                                         => _offLocked.GetValue();
	public TArray<bool>                                       Touching_Anchor                                                => _offTouching_Anchor.GetValue();
	public byte/*(bool)*/                                     Is_Anchor                                                      => _offIs_Anchor.GetValue();
	public byte/*(bool)*/                                     Protected                                                      => _offProtected.GetValue();
	public AActor                                             Protecting_Actor                                               => _offProtecting_Actor.GetValue();
	public byte/*(bool)*/                                     Can_Protect_Neighbours                                         => _offCan_Protect_Neighbours.GetValue();
	#endregion


}


}