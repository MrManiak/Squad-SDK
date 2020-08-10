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

// WidgetBlueprintGeneratedClass W_ChatEntry.W_ChatEntry_C
// 0x00A0 (0x0280 - 0x01E0)
public class UW_ChatEntry_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder                                                     = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTBText                                                     = new ExternalOffset<UTextBlock>(0x0240, true);                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offName                                                       = new ExternalOffset<FString>(0x0248, false);                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FString>                           _offText                                                       = new ExternalOffset<FString>(0x0258, false);                  // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ESQChat>                           _offChannel                                                    = new ExternalOffset<ESQChat>(0x0268, false);                  // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offColor                                                      = new ExternalOffset<FLinearColor>(0x026C, false);             // 0x026C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x027C);                           // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border                                                         => _offBorder.GetValue();
	public UTextBlock                                         TBText                                                         => _offTBText.GetValue();
	public FString                                            Name                                                           => _offName.GetValue();
	public FString                                            Text                                                           => _offText.GetValue();
	public ESQChat                                            Channel                                                        => _offChannel.GetValue();
	public FLinearColor                                       Color                                                          => _offColor.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	#endregion


}


}