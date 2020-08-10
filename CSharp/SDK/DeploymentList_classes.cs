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

// WidgetBlueprintGeneratedClass DeploymentList.DeploymentList_C
// 0x0088 (0x0268 - 0x01E0)
public class UDeploymentList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UGridPanel>                        _offSpawnBase                                                  = new ExternalOffset<UGridPanel>(0x0238, true);                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGridPanel>                        _offSpawnHab                                                   = new ExternalOffset<UGridPanel>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UGridPanel>                        _offSpawnRally                                                 = new ExternalOffset<UGridPanel>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_DeployConfirmation_C>           _offW_DeployConfirmation                                       = new ExternalOffset<UW_DeployConfirmation_C>(0x0250, true);   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMyPC                                                       = new ExternalOffset<ASQPlayerController>(0x0258, true);       // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_DeploymentMenu_C>               _offREF_Deploy_Menu                                            = new ExternalOffset<UW_DeploymentMenu_C>(0x0260, true);       // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UGridPanel                                         SpawnBase                                                      => _offSpawnBase.GetValue();
	public UGridPanel                                         SpawnHab                                                       => _offSpawnHab.GetValue();
	public UGridPanel                                         SpawnRally                                                     => _offSpawnRally.GetValue();
	public UW_DeployConfirmation_C                            W_DeployConfirmation                                           => _offW_DeployConfirmation.GetValue();
	public ASQPlayerController                                MyPC                                                           => _offMyPC.GetValue();
	public UW_DeploymentMenu_C                                REF_Deploy_Menu                                                => _offREF_Deploy_Menu.GetValue();
	#endregion


}


}