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

// Class Slate.ButtonWidgetStyle
// 0x0280 (0x02A8 - 0x0028)
public class UButtonWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FButtonStyle>                      _offButtonStyle                                                = new ExternalOffset<FButtonStyle>(0x0030, false);             // 0x0030(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FButtonStyle                                       ButtonStyle                                                    => _offButtonStyle.GetValue();
	#endregion


}

// Class Slate.ScrollBarWidgetStyle
// 0x04D8 (0x0500 - 0x0028)
public class UScrollBarWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FScrollBarStyle>                   _offScrollBarStyle                                             = new ExternalOffset<FScrollBarStyle>(0x0030, false);          // 0x0030(0x04D0) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScrollBarStyle                                    ScrollBarStyle                                                 => _offScrollBarStyle.GetValue();
	#endregion


}

// Class Slate.CheckBoxWidgetStyle
// 0x0588 (0x05B0 - 0x0028)
public class UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FCheckBoxStyle>                    _offCheckBoxStyle                                              = new ExternalOffset<FCheckBoxStyle>(0x0030, false);           // 0x0030(0x0580) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FCheckBoxStyle                                     CheckBoxStyle                                                  => _offCheckBoxStyle.GetValue();
	#endregion


}

// Class Slate.ScrollBoxWidgetStyle
// 0x0230 (0x0258 - 0x0028)
public class UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FScrollBoxStyle>                   _offScrollBoxStyle                                             = new ExternalOffset<FScrollBoxStyle>(0x0030, false);          // 0x0030(0x0228) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScrollBoxStyle                                    ScrollBoxStyle                                                 => _offScrollBoxStyle.GetValue();
	#endregion


}

// Class Slate.ComboBoxWidgetStyle
// 0x03E0 (0x0408 - 0x0028)
public class UComboBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FComboBoxStyle>                    _offComboBoxStyle                                              = new ExternalOffset<FComboBoxStyle>(0x0030, false);           // 0x0030(0x03D8) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FComboBoxStyle                                     ComboBoxStyle                                                  => _offComboBoxStyle.GetValue();
	#endregion


}

// Class Slate.SlateSettings
// 0x0001 (0x0029 - 0x0028)
public class USlateSettings : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbExplicitCanvasChildZOrder                                 = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bExplicitCanvasChildZOrder                                     => _offbExplicitCanvasChildZOrder.GetValue();
	#endregion


}

// Class Slate.SpinBoxWidgetStyle
// 0x02F0 (0x0318 - 0x0028)
public class USpinBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FSpinBoxStyle>                     _offSpinBoxStyle                                               = new ExternalOffset<FSpinBoxStyle>(0x0030, false);            // 0x0030(0x02E8) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSpinBoxStyle                                      SpinBoxStyle                                                   => _offSpinBoxStyle.GetValue();
	#endregion


}

// Class Slate.ComboButtonWidgetStyle
// 0x03A8 (0x03D0 - 0x0028)
public class UComboButtonWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FComboButtonStyle>                 _offComboButtonStyle                                           = new ExternalOffset<FComboButtonStyle>(0x0030, false);        // 0x0030(0x03A0) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FComboButtonStyle                                  ComboButtonStyle                                               => _offComboButtonStyle.GetValue();
	#endregion


}

// Class Slate.TextBlockWidgetStyle
// 0x0270 (0x0298 - 0x0028)
public class UTextBlockWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FTextBlockStyle>                   _offTextBlockStyle                                             = new ExternalOffset<FTextBlockStyle>(0x0030, false);          // 0x0030(0x0268) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FTextBlockStyle                                    TextBlockStyle                                                 => _offTextBlockStyle.GetValue();
	#endregion


}

// Class Slate.EditableTextBoxWidgetStyle
// 0x07F8 (0x0820 - 0x0028)
public class UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FEditableTextBoxStyle>             _offEditableTextBoxStyle                                       = new ExternalOffset<FEditableTextBoxStyle>(0x0030, false);    // 0x0030(0x07F0) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FEditableTextBoxStyle                              EditableTextBoxStyle                                           => _offEditableTextBoxStyle.GetValue();
	#endregion


}

// Class Slate.EditableTextWidgetStyle
// 0x0220 (0x0248 - 0x0028)
public class UEditableTextWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FEditableTextStyle>                _offEditableTextStyle                                          = new ExternalOffset<FEditableTextStyle>(0x0030, false);       // 0x0030(0x0218) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FEditableTextStyle                                 EditableTextStyle                                              => _offEditableTextStyle.GetValue();
	#endregion


}

// Class Slate.ProgressWidgetStyle
// 0x01A8 (0x01D0 - 0x0028)
public class UProgressWidgetStyle : USlateWidgetStyleContainerBase
{
	#region Offsets
	private ExternalOffset<FProgressBarStyle>                 _offProgressBarStyle                                           = new ExternalOffset<FProgressBarStyle>(0x0030, false);        // 0x0030(0x01A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FProgressBarStyle                                  ProgressBarStyle                                               => _offProgressBarStyle.GetValue();
	#endregion


}


}