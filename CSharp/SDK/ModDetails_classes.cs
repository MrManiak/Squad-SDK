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

// WidgetBlueprintGeneratedClass ModDetails.ModDetails_C
// 0x01E8 (0x03C8 - 0x01E0)
public class UModDetails_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonDISLIKE                                              = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonLIKE                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonToggleInfo                                           = new ExternalOffset<UMainMenu_Button_C>(0x0248, true);        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UCircularThrobber>                 _offCircularThrobber_1                                         = new ExternalOffset<UCircularThrobber>(0x0250, true);         // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_4                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_5                                                    = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_7                                                    = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_19                                                   = new ExternalOffset<UImage>(0x0270, true);                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBoxInfo                                              = new ExternalOffset<UScrollBox>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offServerImage                                                = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offStar1                                                      = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offStar2                                                      = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offStar3                                                      = new ExternalOffset<UImage>(0x0298, true);                    // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offStar4                                                      = new ExternalOffset<UImage>(0x02A0, true);                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offStar5                                                      = new ExternalOffset<UImage>(0x02A8, true);                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_CreatorName                                             = new ExternalOffset<UTextBlock>(0x02B0, true);                // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ModDescription                                          = new ExternalOffset<UTextBlock>(0x02B8, true);                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ModName                                                 = new ExternalOffset<UTextBlock>(0x02C0, true);                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_NumRatings                                              = new ExternalOffset<UTextBlock>(0x02C8, true);                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_NumSubscriptions                                        = new ExternalOffset<UTextBlock>(0x02D0, true);                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_NumUniqueVisitors                                       = new ExternalOffset<UTextBlock>(0x02D8, true);                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_PostDate                                                = new ExternalOffset<UTextBlock>(0x02E0, true);                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Type                                                    = new ExternalOffset<UTextBlock>(0x02E8, true);                // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_UpdateDate                                              = new ExternalOffset<UTextBlock>(0x02F0, true);                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offVerticalBox_Info                                           = new ExternalOffset<UVerticalBox>(0x02F8, true);              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_Image                                       = new ExternalOffset<UWidgetSwitcher>(0x0300, true);           // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_Main                                        = new ExternalOffset<UWidgetSwitcher>(0x0308, true);           // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Info_Hidden                                             = new ExternalOffset<byte/*(bool)*/>(0x0310);                  // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TArray<FModImageDownloads>>        _offModImages                                                  = new ExternalOffset<TArray<FModImageDownloads>>(0x0318, false); // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<FModdingRuntimeModInfoDetails>     _offModInfo                                                    = new ExternalOffset<FModdingRuntimeModInfoDetails>(0x0328, false); // 0x0328(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 ButtonDISLIKE                                                  => _offButtonDISLIKE.GetValue();
	public UMainMenu_Button_C                                 ButtonLIKE                                                     => _offButtonLIKE.GetValue();
	public UMainMenu_Button_C                                 ButtonToggleInfo                                               => _offButtonToggleInfo.GetValue();
	public UCircularThrobber                                  CircularThrobber_1                                             => _offCircularThrobber_1.GetValue();
	public UImage                                             Image_4                                                        => _offImage_4.GetValue();
	public UImage                                             Image_5                                                        => _offImage_5.GetValue();
	public UImage                                             Image_7                                                        => _offImage_7.GetValue();
	public UImage                                             Image_19                                                       => _offImage_19.GetValue();
	public UScrollBox                                         ScrollBoxInfo                                                  => _offScrollBoxInfo.GetValue();
	public UImage                                             ServerImage                                                    => _offServerImage.GetValue();
	public UImage                                             Star1                                                          => _offStar1.GetValue();
	public UImage                                             Star2                                                          => _offStar2.GetValue();
	public UImage                                             Star3                                                          => _offStar3.GetValue();
	public UImage                                             Star4                                                          => _offStar4.GetValue();
	public UImage                                             Star5                                                          => _offStar5.GetValue();
	public UTextBlock                                         TB_CreatorName                                                 => _offTB_CreatorName.GetValue();
	public UTextBlock                                         TB_ModDescription                                              => _offTB_ModDescription.GetValue();
	public UTextBlock                                         TB_ModName                                                     => _offTB_ModName.GetValue();
	public UTextBlock                                         TB_NumRatings                                                  => _offTB_NumRatings.GetValue();
	public UTextBlock                                         TB_NumSubscriptions                                            => _offTB_NumSubscriptions.GetValue();
	public UTextBlock                                         TB_NumUniqueVisitors                                           => _offTB_NumUniqueVisitors.GetValue();
	public UTextBlock                                         TB_PostDate                                                    => _offTB_PostDate.GetValue();
	public UTextBlock                                         TB_Type                                                        => _offTB_Type.GetValue();
	public UTextBlock                                         TB_UpdateDate                                                  => _offTB_UpdateDate.GetValue();
	public UVerticalBox                                       VerticalBox_Info                                               => _offVerticalBox_Info.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_Image                                           => _offWidgetSwitcher_Image.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_Main                                            => _offWidgetSwitcher_Main.GetValue();
	public byte/*(bool)*/                                     Is_Info_Hidden                                                 => _offIs_Info_Hidden.GetValue();
	public TArray<FModImageDownloads>                         ModImages                                                      => _offModImages.GetValue();
	public FModdingRuntimeModInfoDetails                      ModInfo                                                        => _offModInfo.GetValue();
	#endregion


}


}