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

// WidgetBlueprintGeneratedClass W_SquadList.W_SquadList_C
// 0x00A1 (0x0281 - 0x01E0)
public class UW_SquadList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UVerticalBox>                      _offCommanderContainer                                         = new ExternalOffset<UVerticalBox>(0x0238, true);              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGridPanel>                        _offGrid_Squads                                                = new ExternalOffset<UGridPanel>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBox_List                                             = new ExternalOffset<UScrollBox>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SquadCreate_C>                  _offSquadCreate                                                = new ExternalOffset<UW_SquadCreate_C>(0x0258, true);          // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_CommandVoteParent_C>            _offW_CommandVoteParent                                        = new ExternalOffset<UW_CommandVoteParent_C>(0x0260, true);    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_UnassignedList_C>               _offW_Unassigned                                               = new ExternalOffset<UW_UnassignedList_C>(0x0268, true);       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<UW_SquadListItem_C>>        _offSquadListItems                                             = new ExternalOffset<TArray<UW_SquadListItem_C>>(0x0270, false); // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_CMD_Voting                                            = new ExternalOffset<byte/*(bool)*/>(0x0280);                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UVerticalBox                                       CommanderContainer                                             => _offCommanderContainer.GetValue();
	public UGridPanel                                         Grid_Squads                                                    => _offGrid_Squads.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UScrollBox                                         ScrollBox_List                                                 => _offScrollBox_List.GetValue();
	public UW_SquadCreate_C                                   SquadCreate                                                    => _offSquadCreate.GetValue();
	public UW_CommandVoteParent_C                             W_CommandVoteParent                                            => _offW_CommandVoteParent.GetValue();
	public UW_UnassignedList_C                                W_Unassigned                                                   => _offW_Unassigned.GetValue();
	public TArray<UW_SquadListItem_C>                         SquadListItems                                                 => _offSquadListItems.GetValue();
	public byte/*(bool)*/                                     Show_CMD_Voting                                                => _offShow_CMD_Voting.GetValue();
	#endregion


}


}