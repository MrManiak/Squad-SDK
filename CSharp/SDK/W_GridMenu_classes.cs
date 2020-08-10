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

// WidgetBlueprintGeneratedClass W_GridMenu.W_GridMenu_C
// 0x0100 (0x02E0 - 0x01E0)
public class UW_GridMenu_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton_GridMenuMain                                        = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offCenterBorder                                               = new ExternalOffset<UBorder>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offCenterIcon                                                 = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USizeBox>                          _offSizeBox_Main                                               = new ExternalOffset<USizeBox>(0x0258, true);                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_3                                           = new ExternalOffset<UWidgetSwitcher>(0x0260, true);           // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<UClass>>                    _offGrid_Headers                                               = new ExternalOffset<TArray<UClass>>(0x0268, false);           // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<UW_GridHeader_C>>           _offCurrent_Headers                                            = new ExternalOffset<TArray<UW_GridHeader_C>>(0x0278, false);  // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<FVector2D>                         _offOrigin_Screen_Position                                     = new ExternalOffset<FVector2D>(0x0288, false);                // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMin_X                                                      = new ExternalOffset<float>(0x0290);                           // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMax_X                                                      = new ExternalOffset<float>(0x0294);                           // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMin_Y                                                      = new ExternalOffset<float>(0x0298);                           // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMax_Y                                                      = new ExternalOffset<float>(0x029C);                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offSL_Grid_Zero_Based_World_Location                          = new ExternalOffset<FVector>(0x02A0, false);                  // 0x02A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCustom_Padding                                             = new ExternalOffset<float>(0x02AC);                           // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offCenter_Marker                                              = new ExternalOffset<UClass>(0x02B0, true);                    // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Deleting                                                = new ExternalOffset<byte/*(bool)*/>(0x02B8);                  // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FVector2D>                         _offOrigin_Mouse_Position                                      = new ExternalOffset<FVector2D>(0x02BC, false);                // 0x02BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offOrigin_Mouse_Screen_Position                               = new ExternalOffset<FVector2D>(0x02C4, false);                // 0x02C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offSQ_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02D0, true);       // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBP_MapMarker_Selectable_C>        _offSelectedMapMarker                                          = new ExternalOffset<UBP_MapMarker_Selectable_C>(0x02D8, true); // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button_GridMenuMain                                            => _offButton_GridMenuMain.GetValue();
	public UBorder                                            CenterBorder                                                   => _offCenterBorder.GetValue();
	public UImage                                             CenterIcon                                                     => _offCenterIcon.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public USizeBox                                           SizeBox_Main                                                   => _offSizeBox_Main.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_3                                               => _offWidgetSwitcher_3.GetValue();
	public TArray<UClass>                                     Grid_Headers                                                   => _offGrid_Headers.GetValue();
	public TArray<UW_GridHeader_C>                            Current_Headers                                                => _offCurrent_Headers.GetValue();
	public FVector2D                                          Origin_Screen_Position                                         => _offOrigin_Screen_Position.GetValue();
	public float                                              Min_X                                                          => _offMin_X.GetValue();
	public float                                              Max_X                                                          => _offMax_X.GetValue();
	public float                                              Min_Y                                                          => _offMin_Y.GetValue();
	public float                                              Max_Y                                                          => _offMax_Y.GetValue();
	public FVector                                            SL_Grid_Zero_Based_World_Location                              => _offSL_Grid_Zero_Based_World_Location.GetValue();
	public float                                              Custom_Padding                                                 => _offCustom_Padding.GetValue();
	public UClass                                             Center_Marker                                                  => _offCenter_Marker.GetValue();
	public byte/*(bool)*/                                     Is_Deleting                                                    => _offIs_Deleting.GetValue();
	public FVector2D                                          Origin_Mouse_Position                                          => _offOrigin_Mouse_Position.GetValue();
	public FVector2D                                          Origin_Mouse_Screen_Position                                   => _offOrigin_Mouse_Screen_Position.GetValue();
	public ASQPlayerController                                SQ_PC                                                          => _offSQ_PC.GetValue();
	public UBP_MapMarker_Selectable_C                         SelectedMapMarker                                              => _offSelectedMapMarker.GetValue();
	#endregion


}


}