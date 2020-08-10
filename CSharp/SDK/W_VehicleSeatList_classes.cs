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

// WidgetBlueprintGeneratedClass W_VehicleSeatList.W_VehicleSeatList_C
// 0x009C (0x027C - 0x01E0)
public class UW_VehicleSeatList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offFade                                                       = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UGridPanel>                        _offGridPanel_1                                                = new ExternalOffset<UGridPanel>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0248, true);       // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQVehicle>                        _offREF_Vehicle                                                = new ExternalOffset<ASQVehicle>(0x0250, true);                // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UW_VehicleSeatInfo_C>>      _offSeat_List_Info_Widgets                                     = new ExternalOffset<TArray<UW_VehicleSeatInfo_C>>(0x0258, false); // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<float>                             _offLast_Seat_Time                                             = new ExternalOffset<float>(0x0268);                           // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offCollapse_Timer                                             = new ExternalOffset<FTimerHandle>(0x0270, false);             // 0x0270(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offShow_Duration                                              = new ExternalOffset<float>(0x0278);                           // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Fade                                                           => _offFade.GetValue();
	public UGridPanel                                         GridPanel_1                                                    => _offGridPanel_1.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public ASQVehicle                                         REF_Vehicle                                                    => _offREF_Vehicle.GetValue();
	public TArray<UW_VehicleSeatInfo_C>                       Seat_List_Info_Widgets                                         => _offSeat_List_Info_Widgets.GetValue();
	public float                                              Last_Seat_Time                                                 => _offLast_Seat_Time.GetValue();
	public FTimerHandle                                       Collapse_Timer                                                 => _offCollapse_Timer.GetValue();
	public float                                              Show_Duration                                                  => _offShow_Duration.GetValue();
	#endregion


}


}