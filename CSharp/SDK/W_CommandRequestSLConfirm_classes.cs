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

// WidgetBlueprintGeneratedClass W_CommandRequestSLConfirm.W_CommandRequestSLConfirm_C
// 0x0050 (0x0298 - 0x0248)
public class UW_CommandRequestSLConfirm_C : UW_FloatingWidget_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_Timer                                               = new ExternalOffset<UBorder>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Accept                                              = new ExternalOffset<UMainMenu_Button_C>(0x0258, true);        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Deny                                                = new ExternalOffset<UMainMenu_Button_C>(0x0260, true);        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offMainSwitch                                                 = new ExternalOffset<UWidgetSwitcher>(0x0268, true);           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Timer                                                   = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offAvailable                                                  = new ExternalOffset<byte/*(bool)*/>(0x0278);                  // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0280, true);       // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapWidgetMapMarkerSelectable>   _offMap_Marker_Widget                                          = new ExternalOffset<USQMapWidgetMapMarkerSelectable>(0x0288, true); // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ABP_MapMarker_CommandMaster_C>     _offSL_Command_Request_Marker                                  = new ExternalOffset<ABP_MapMarker_CommandMaster_C>(0x0290, true); // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_Timer                                                   => _offBorder_Timer.GetValue();
	public UMainMenu_Button_C                                 Button_Accept                                                  => _offButton_Accept.GetValue();
	public UMainMenu_Button_C                                 Button_Deny                                                    => _offButton_Deny.GetValue();
	public UWidgetSwitcher                                    MainSwitch                                                     => _offMainSwitch.GetValue();
	public UTextBlock                                         TB_Timer                                                       => _offTB_Timer.GetValue();
	public byte/*(bool)*/                                     Available                                                      => _offAvailable.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public USQMapWidgetMapMarkerSelectable                    Map_Marker_Widget                                              => _offMap_Marker_Widget.GetValue();
	public ABP_MapMarker_CommandMaster_C                      SL_Command_Request_Marker                                      => _offSL_Command_Request_Marker.GetValue();
	#endregion


}


}