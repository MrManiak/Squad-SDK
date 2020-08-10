// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Slate.ETextWrappingPolicy
public enum ETextWrappingPolicy : byte
{
	ETextWrappingPolicy__DefaultWrapping = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX = 2
}

// Enum Slate.EProgressBarFillType
public enum EProgressBarFillType : byte
{
	EProgressBarFillType__LeftToRight = 0,
	EProgressBarFillType__RightToLeft = 1,
	EProgressBarFillType__FillFromCenter = 2,
	EProgressBarFillType__TopToBottom = 3,
	EProgressBarFillType__BottomToTop = 4,
	EProgressBarFillType__EProgressBarFillType_MAX = 5
}

// Enum Slate.ETableViewMode
public enum ETableViewMode : byte
{
	ETableViewMode__List           = 0,
	ETableViewMode__Tile           = 1,
	ETableViewMode__Tree           = 2,
	ETableViewMode__ETableViewMode_MAX = 3
}

// Enum Slate.EStretch
public enum EStretch : byte
{
	EStretch__None                 = 0,
	EStretch__Fill                 = 1,
	EStretch__ScaleToFit           = 2,
	EStretch__ScaleToFitX          = 3,
	EStretch__ScaleToFitY          = 4,
	EStretch__ScaleToFill          = 5,
	EStretch__ScaleBySafeZone      = 6,
	EStretch__UserSpecified        = 7,
	EStretch__EStretch_MAX         = 8
}

// Enum Slate.EStretchDirection
public enum EStretchDirection : byte
{
	EStretchDirection__Both        = 0,
	EStretchDirection__DownOnly    = 1,
	EStretchDirection__UpOnly      = 2,
	EStretchDirection__EStretchDirection_MAX = 3
}

// Enum Slate.ETextFlowDirection
public enum ETextFlowDirection : byte
{
	ETextFlowDirection__Auto       = 0,
	ETextFlowDirection__LeftToRight = 1,
	ETextFlowDirection__RightToLeft = 2,
	ETextFlowDirection__ETextFlowDirection_MAX = 3
}

// Enum Slate.ESelectionMode
public enum ESelectionMode : byte
{
	ESelectionMode__None           = 0,
	ESelectionMode__Single         = 1,
	ESelectionMode__SingleToggle   = 2,
	ESelectionMode__Multi          = 3,
	ESelectionMode__ESelectionMode_MAX = 4
}

// Enum Slate.EDescendantScrollDestination
public enum EDescendantScrollDestination : byte
{
	EDescendantScrollDestination__IntoView = 0,
	EDescendantScrollDestination__TopOrLeft = 1,
	EDescendantScrollDestination__Center = 2,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX = 3
}

// Enum Slate.ETextJustify
public enum ETextJustify : byte
{
	ETextJustify__Left             = 0,
	ETextJustify__Center           = 1,
	ETextJustify__Right            = 2,
	ETextJustify__ETextJustify_MAX = 3
}

// Enum Slate.EVirtualKeyboardDismissAction
public enum EVirtualKeyboardDismissAction : byte
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction__EVirtualKeyboardDismissAction_MAX = 3
}

// Enum Slate.EListItemAlignment
public enum EListItemAlignment : byte
{
	EListItemAlignment__EvenlyDistributed = 0,
	EListItemAlignment__EvenlySize = 1,
	EListItemAlignment__EvenlyWide = 2,
	EListItemAlignment__LeftAligned = 3,
	EListItemAlignment__RightAligned = 4,
	EListItemAlignment__CenterAligned = 5,
	EListItemAlignment__Fill       = 6,
	EListItemAlignment__EListItemAlignment_MAX = 7
}

// Enum Slate.EMultiBlockType
public enum EMultiBlockType : byte
{
	EMultiBlockType__None          = 0,
	EMultiBlockType__ButtonRow     = 1,
	EMultiBlockType__EditableText  = 2,
	EMultiBlockType__Heading       = 3,
	EMultiBlockType__MenuEntry     = 4,
	EMultiBlockType__MenuSeparator = 5,
	EMultiBlockType__ToolBarButton = 6,
	EMultiBlockType__ToolBarComboButton = 7,
	EMultiBlockType__ToolBarSeparator = 8,
	EMultiBlockType__Widget        = 9,
	EMultiBlockType__EMultiBlockType_MAX = 10
}

// Enum Slate.EMultipleKeyBindingIndex
public enum EMultipleKeyBindingIndex : byte
{
	EMultipleKeyBindingIndex__Primary = 0,
	EMultipleKeyBindingIndex__Secondary = 1,
	EMultipleKeyBindingIndex__NumChords = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX = 3
}

// Enum Slate.EMultiBoxType
public enum EMultiBoxType : byte
{
	EMultiBoxType__MenuBar         = 0,
	EMultiBoxType__ToolBar         = 1,
	EMultiBoxType__VerticalToolBar = 2,
	EMultiBoxType__Menu            = 3,
	EMultiBoxType__ButtonRow       = 4,
	EMultiBoxType__ToolMenuBar     = 5,
	EMultiBoxType__EMultiBoxType_MAX = 6
}

// Enum Slate.EUserInterfaceActionType
public enum EUserInterfaceActionType : byte
{
	EUserInterfaceActionType__None = 0,
	EUserInterfaceActionType__Button = 1,
	EUserInterfaceActionType__ToggleButton = 2,
	EUserInterfaceActionType__RadioButton = 3,
	EUserInterfaceActionType__Check = 4,
	EUserInterfaceActionType__CollapsedButton = 5,
	EUserInterfaceActionType__EUserInterfaceActionType_MAX = 6
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.VirtualKeyboardOptions
// 0x0001
public class FVirtualKeyboardOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbEnableAutocorrect                                         = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bEnableAutocorrect                                             => _offbEnableAutocorrect.GetValue();
	#endregion

	public FVirtualKeyboardOptions(byte/*(bool)*/ c_bEnableAutocorrect) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbEnableAutocorrect.SetValue(c_bEnableAutocorrect);
	}
}
// ScriptStruct Slate.Anchors
// 0x0010
public class FAnchors : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector2D>                          _offMinimum                                                    = new ExternalOffset<FVector2D>(0x0000, false);                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offMaximum                                                    = new ExternalOffset<FVector2D>(0x0008, false);                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                           Minimum                                                        => _offMinimum.GetValue();
	public FVector2D                                           Maximum                                                        => _offMaximum.GetValue();
	#endregion

	public FAnchors(FVector2D c_Minimum, FVector2D c_Maximum) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMinimum.SetValue(c_Minimum);
		_offMaximum.SetValue(c_Maximum);
	}
}
// ScriptStruct Slate.InputChord
// 0x0020
public class FInputChord : ExternalClass
{
	#region Offsets
	private ExternalOffset<FKey>                               _offKey                                                        = new ExternalOffset<FKey>(0x0000, false);                     // 0x0000(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbShift                                                     = new ExternalOffset<char>(0x0018, false);                     // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCtrl                                                      = new ExternalOffset<char>(0x0018, false);                     // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAlt                                                       = new ExternalOffset<char>(0x0018, false);                     // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCmd                                                       = new ExternalOffset<char>(0x0018, false);                     // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FKey                                                Key                                                            => _offKey.GetValue();
	#endregion

	public FInputChord(FKey c_Key) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offKey.SetValue(c_Key);
	}
}

}