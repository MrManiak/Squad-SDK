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

// WidgetBlueprintGeneratedClass MusicPlayer.MusicPlayer_C
// 0x00D1 (0x02B1 - 0x01E0)
public class UMusicPlayer_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offSlide                                                      = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonPlayStop                                             = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonSkipBack                                             = new ExternalOffset<UMainMenu_Button_C>(0x0248, true);        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonSkipForward                                          = new ExternalOffset<UMainMenu_Button_C>(0x0250, true);        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offHideButton                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0258, true);        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_3                                                    = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_5                                                    = new ExternalOffset<UImage>(0x0270, true);                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UProgressBar>                      _offProgressBar_Time                                           = new ExternalOffset<UProgressBar>(0x0278, true);              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USlider>                           _offSlider_Time                                                = new ExternalOffset<USlider>(0x0280, true);                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USlider>                           _offSlider_Volume                                              = new ExternalOffset<USlider>(0x0288, true);                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTBSongName                                                 = new ExternalOffset<UTextBlock>(0x0290, true);                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offCurrentTrack                                               = new ExternalOffset<int>(0x02A8);                             // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offPC                                                         = new ExternalOffset<ASQPlayerController>(0x02B0, true);       // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offMuted                                                      = new ExternalOffset<byte/*(bool)*/>(0x02B8);                  // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offSong_Elapsed_Percent                                       = new ExternalOffset<float>(0x02BC);                           // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offScrub_Time                                                 = new ExternalOffset<byte/*(bool)*/>(0x02C0);                  // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Slide                                                          => _offSlide.GetValue();
	public UMainMenu_Button_C                                 ButtonPlayStop                                                 => _offButtonPlayStop.GetValue();
	public UMainMenu_Button_C                                 ButtonSkipBack                                                 => _offButtonSkipBack.GetValue();
	public UMainMenu_Button_C                                 ButtonSkipForward                                              => _offButtonSkipForward.GetValue();
	public UMainMenu_Button_C                                 HideButton                                                     => _offHideButton.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             Image_3                                                        => _offImage_3.GetValue();
	public UImage                                             Image_5                                                        => _offImage_5.GetValue();
	public UProgressBar                                       ProgressBar_Time                                               => _offProgressBar_Time.GetValue();
	public USlider                                            Slider_Time                                                    => _offSlider_Time.GetValue();
	public USlider                                            Slider_Volume                                                  => _offSlider_Volume.GetValue();
	public UTextBlock                                         TBSongName                                                     => _offTBSongName.GetValue();
	public int                                                CurrentTrack                                                   => _offCurrentTrack.GetValue();
	public ASQPlayerController                                PC                                                             => _offPC.GetValue();
	public byte/*(bool)*/                                     Muted                                                          => _offMuted.GetValue();
	public float                                              Song_Elapsed_Percent                                           => _offSong_Elapsed_Percent.GetValue();
	public byte/*(bool)*/                                     Scrub_Time                                                     => _offScrub_Time.GetValue();
	#endregion


}


}