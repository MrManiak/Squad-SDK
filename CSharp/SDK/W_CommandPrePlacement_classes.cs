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

// WidgetBlueprintGeneratedClass W_CommandPrePlacement.W_CommandPrePlacement_C
// 0x0038 (0x0280 - 0x0248)
public class UW_CommandPrePlacement_C : UW_FloatingWidget_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offImage_1                                                    = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offZero_Based_World_Location                                  = new ExternalOffset<FVector>(0x0258, false);                  // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offSQAction                                                   = new ExternalOffset<UClass>(0x0268, true);                    // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offCreated_Command_Control_Widget                             = new ExternalOffset<FScriptMulticastDelegate>(0x0270, false); // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Image_1                                                        => _offImage_1.GetValue();
	public FVector                                            Zero_Based_World_Location                                      => _offZero_Based_World_Location.GetValue();
	public UClass                                             SQAction                                                       => _offSQAction.GetValue();
	public FScriptMulticastDelegate                           Created_Command_Control_Widget                                 => _offCreated_Command_Control_Widget.GetValue();
	#endregion


}


}