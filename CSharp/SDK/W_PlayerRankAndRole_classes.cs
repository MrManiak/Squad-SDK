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

// WidgetBlueprintGeneratedClass W_PlayerRankAndRole.W_PlayerRankAndRole_C
// 0x00C0 (0x02A0 - 0x01E0)
public class UW_PlayerRankAndRole_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_Main                                                = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offFTCircle                                                   = new ExternalOffset<USizeBox>(0x0240, true);                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIconRank                                                   = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIconRole                                                   = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIconSquad                                                  = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offIconSwitch                                                 = new ExternalOffset<UWidgetSwitcher>(0x0260, true);           // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSQsquare                                                   = new ExternalOffset<USizeBox>(0x0268, true);                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offSquadColorBorder                                           = new ExternalOffset<UBorder>(0x0270, true);                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_FT                                                      = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_SquadID                                                 = new ExternalOffset<UTextBlock>(0x0280, true);                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTBRoleName                                                 = new ExternalOffset<UTextBlock>(0x0288, true);                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0290, true);       // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQRoleSettings>                   _offDisplay_Role                                               = new ExternalOffset<USQRoleSettings>(0x0298, true);           // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_Main                                                    => _offBorder_Main.GetValue();
	public USizeBox                                           FTCircle                                                       => _offFTCircle.GetValue();
	public UImage                                             IconRank                                                       => _offIconRank.GetValue();
	public UImage                                             IconRole                                                       => _offIconRole.GetValue();
	public UImage                                             IconSquad                                                      => _offIconSquad.GetValue();
	public UWidgetSwitcher                                    IconSwitch                                                     => _offIconSwitch.GetValue();
	public USizeBox                                           SQsquare                                                       => _offSQsquare.GetValue();
	public UBorder                                            SquadColorBorder                                               => _offSquadColorBorder.GetValue();
	public UTextBlock                                         TB_FT                                                          => _offTB_FT.GetValue();
	public UTextBlock                                         TB_SquadID                                                     => _offTB_SquadID.GetValue();
	public UTextBlock                                         TBRoleName                                                     => _offTBRoleName.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public USQRoleSettings                                    Display_Role                                                   => _offDisplay_Role.GetValue();
	#endregion


}


}