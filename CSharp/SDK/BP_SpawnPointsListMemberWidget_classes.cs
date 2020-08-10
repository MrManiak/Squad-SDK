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

// WidgetBlueprintGeneratedClass BP_SpawnPointsListMemberWidget.BP_SpawnPointsListMemberWidget_C
// 0x0098 (0x0330 - 0x0298)
public class UBP_SpawnPointsListMemberWidget_C : USQCoreStateSpawnPointsListWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02A0, false); // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offImage_162                                                  = new ExternalOffset<UImage>(0x02A8, true);                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offSpawnButton                                                = new ExternalOffset<UMainMenu_Button_C>(0x02B0, true);        // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Time                                                    = new ExternalOffset<UTextBlock>(0x02B8, true);                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQGameSpawn>                      _offSpawnPoint                                                 = new ExternalOffset<ASQGameSpawn>(0x02C0, true);              // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offHoveredColor                                               = new ExternalOffset<FLinearColor>(0x02C8, false);             // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offSelectedColor                                              = new ExternalOffset<FLinearColor>(0x02D8, false);             // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offNotSelectedColor                                           = new ExternalOffset<FLinearColor>(0x02E8, false);             // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offLocationText                                               = new ExternalOffset<FText>(0x02F8, false);                    // 0x02F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<FText>                             _offTypeText                                                   = new ExternalOffset<FText>(0x0310, false);                    // 0x0310(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<ABP_PlayerController_C>            _offMy_PC                                                      = new ExternalOffset<ABP_PlayerController_C>(0x0328, true);    // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Image_162                                                      => _offImage_162.GetValue();
	public UMainMenu_Button_C                                 SpawnButton                                                    => _offSpawnButton.GetValue();
	public UTextBlock                                         TB_Time                                                        => _offTB_Time.GetValue();
	public ASQGameSpawn                                       SpawnPoint                                                     => _offSpawnPoint.GetValue();
	public FLinearColor                                       HoveredColor                                                   => _offHoveredColor.GetValue();
	public FLinearColor                                       SelectedColor                                                  => _offSelectedColor.GetValue();
	public FLinearColor                                       NotSelectedColor                                               => _offNotSelectedColor.GetValue();
	public FText                                              LocationText                                                   => _offLocationText.GetValue();
	public FText                                              TypeText                                                       => _offTypeText.GetValue();
	public ABP_PlayerController_C                             My_PC                                                          => _offMy_PC.GetValue();
	#endregion


}


}