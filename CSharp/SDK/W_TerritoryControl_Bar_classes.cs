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

// WidgetBlueprintGeneratedClass W_TerritoryControl_Bar.W_TerritoryControl_Bar_C
// 0x00A0 (0x0280 - 0x01E0)
public class UW_TerritoryControl_Bar_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UHorizontalBox>                    _offEnemyTeamTickets                                           = new ExternalOffset<UHorizontalBox>(0x0238, true);            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offProgressBar_WinPercent                                     = new ExternalOffset<UProgressBar>(0x0240, true);              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UHorizontalBox>                    _offSelfTeamTickets                                            = new ExternalOffset<UHorizontalBox>(0x0248, true);            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USlider>                           _offSlider_WinPercent                                          = new ExternalOffset<USlider>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Hexes                                                   = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Tickets_EnemyTeam                                       = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Tickets_SelfTeam                                        = new ExternalOffset<UTextBlock>(0x0268, true);                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ATC_HexGraph_C>                    _offTC_Graph                                                   = new ExternalOffset<ATC_HexGraph_C>(0x0270, true);            // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0278, true);       // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UHorizontalBox                                     EnemyTeamTickets                                               => _offEnemyTeamTickets.GetValue();
	public UProgressBar                                       ProgressBar_WinPercent                                         => _offProgressBar_WinPercent.GetValue();
	public UHorizontalBox                                     SelfTeamTickets                                                => _offSelfTeamTickets.GetValue();
	public USlider                                            Slider_WinPercent                                              => _offSlider_WinPercent.GetValue();
	public UTextBlock                                         TB_Hexes                                                       => _offTB_Hexes.GetValue();
	public UTextBlock                                         TB_Tickets_EnemyTeam                                           => _offTB_Tickets_EnemyTeam.GetValue();
	public UTextBlock                                         TB_Tickets_SelfTeam                                            => _offTB_Tickets_SelfTeam.GetValue();
	public ATC_HexGraph_C                                     TC_Graph                                                       => _offTC_Graph.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	#endregion


}


}