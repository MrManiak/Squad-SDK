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

// WidgetBlueprintGeneratedClass W_MapVehicleList.W_MapVehicleList_C
// 0x00B8 (0x0298 - 0x01E0)
public class UW_MapVehicleList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_4                                                    = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBox_Ally                                             = new ExternalOffset<UScrollBox>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBox_Enemy                                            = new ExternalOffset<UScrollBox>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                    _offSQ_PS                                                      = new ExternalOffset<ASQPlayerState>(0x0268, true);            // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<FS_VehicleListData>>        _offUnsorted_Ally_Vics                                         = new ExternalOffset<TArray<FS_VehicleListData>>(0x0270, false); // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<FS_VehicleListData>>        _offUnsorted_Enemy_Vics                                        = new ExternalOffset<TArray<FS_VehicleListData>>(0x0280, false); // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<UClass>                            _offKill_Death_Ruleset                                         = new ExternalOffset<UClass>(0x0290, true);                    // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UImage                                             Image_4                                                        => _offImage_4.GetValue();
	public UScrollBox                                         ScrollBox_Ally                                                 => _offScrollBox_Ally.GetValue();
	public UScrollBox                                         ScrollBox_Enemy                                                => _offScrollBox_Enemy.GetValue();
	public ASQPlayerState                                     SQ_PS                                                          => _offSQ_PS.GetValue();
	public TArray<FS_VehicleListData>                         Unsorted_Ally_Vics                                             => _offUnsorted_Ally_Vics.GetValue();
	public TArray<FS_VehicleListData>                         Unsorted_Enemy_Vics                                            => _offUnsorted_Enemy_Vics.GetValue();
	public UClass                                             Kill_Death_Ruleset                                             => _offKill_Death_Ruleset.GetValue();
	#endregion


}


}