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

// WidgetBlueprintGeneratedClass W_CommandRequestList.W_CommandRequestList_C
// 0x0060 (0x02A8 - 0x0248)
public class UW_CommandRequestList_C : UW_FloatingWidget_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UVerticalBox>                      _offActionList                                                 = new ExternalOffset<UVerticalBox>(0x0250, true);              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Accept                                              = new ExternalOffset<UMainMenu_Button_C>(0x0258, true);        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButton_Deny                                                = new ExternalOffset<UMainMenu_Button_C>(0x0260, true);        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offMainSwitch                                                 = new ExternalOffset<UWidgetSwitcher>(0x0268, true);           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ABP_MapMarker_Command_Request_C>   _offCommand_Map_Marker                                         = new ExternalOffset<ABP_MapMarker_Command_Request_C>(0x0270, true); // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0278, true);       // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapWidgetMapMarkerSelectable>   _offCurrent_Marker                                             = new ExternalOffset<USQMapWidgetMapMarkerSelectable>(0x0280, true); // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                    _offCurrent_Commander                                          = new ExternalOffset<ASQPlayerState>(0x0288, true);            // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offCommand_Zero_Location                                      = new ExternalOffset<FVector>(0x0290, false);                  // 0x0290(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offCommand_Category                                           = new ExternalOffset<UClass>(0x02A0, true);                    // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UVerticalBox                                       ActionList                                                     => _offActionList.GetValue();
	public UMainMenu_Button_C                                 Button_Accept                                                  => _offButton_Accept.GetValue();
	public UMainMenu_Button_C                                 Button_Deny                                                    => _offButton_Deny.GetValue();
	public UWidgetSwitcher                                    MainSwitch                                                     => _offMainSwitch.GetValue();
	public ABP_MapMarker_Command_Request_C                    Command_Map_Marker                                             => _offCommand_Map_Marker.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public USQMapWidgetMapMarkerSelectable                    Current_Marker                                                 => _offCurrent_Marker.GetValue();
	public ASQPlayerState                                     Current_Commander                                              => _offCurrent_Commander.GetValue();
	public FVector                                            Command_Zero_Location                                          => _offCommand_Zero_Location.GetValue();
	public UClass                                             Command_Category                                               => _offCommand_Category.GetValue();
	#endregion


}


}