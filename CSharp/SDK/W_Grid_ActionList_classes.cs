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

// WidgetBlueprintGeneratedClass W_Grid_ActionList.W_Grid_ActionList_C
// 0x0050 (0x0298 - 0x0248)
public class UW_Grid_ActionList_C : UW_FloatingWidget_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offHoverCheckArea                                             = new ExternalOffset<UBorder>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offVerticalBox_1                                              = new ExternalOffset<UVerticalBox>(0x0258, true);              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<UClass>>                    _offActions                                                    = new ExternalOffset<TArray<UClass>>(0x0260, false);           // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	private ExternalOffset<byte/*(bool)*/>                    _offwas_hovered                                                = new ExternalOffset<byte/*(bool)*/>(0x0270);                  // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offClosed                                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0278, false); // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<UW_GridHeader_C>                   _offHeader                                                     = new ExternalOffset<UW_GridHeader_C>(0x0288, true);           // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offFireteam_ID                                                = new ExternalOffset<int>(0x0290);                             // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offSquad_ID                                                   = new ExternalOffset<int>(0x0294);                             // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            HoverCheckArea                                                 => _offHoverCheckArea.GetValue();
	public UVerticalBox                                       VerticalBox_1                                                  => _offVerticalBox_1.GetValue();
	public TArray<UClass>                                     Actions                                                        => _offActions.GetValue();
	public byte/*(bool)*/                                     was_hovered                                                    => _offwas_hovered.GetValue();
	public FScriptMulticastDelegate                           Closed                                                         => _offClosed.GetValue();
	public UW_GridHeader_C                                    Header                                                         => _offHeader.GetValue();
	public int                                                Fireteam_ID                                                    => _offFireteam_ID.GetValue();
	public int                                                Squad_ID                                                       => _offSquad_ID.GetValue();
	#endregion


}


}