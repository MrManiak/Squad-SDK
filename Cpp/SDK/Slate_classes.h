#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// 0x0280 (FullSize[0x02A8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0214 - 0x0000 // Minimum to subtract -> (0008)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0214, struct FButtonStyle,                                                   ButtonStyle);                                              // 0x0030(0x0278)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}


};

// Class Slate.ScrollBarWidgetStyle
// 0x04D8 (FullSize[0x0500] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0215 - 0x0000 // Minimum to subtract -> (0008)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0215, struct FScrollBarStyle,                                                ScrollBarStyle);                                           // 0x0030(0x04D0)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}


};

// Class Slate.CheckBoxWidgetStyle
// 0x0588 (FullSize[0x05B0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0216 - 0x0000 // Minimum to subtract -> (0008)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0216, struct FCheckBoxStyle,                                                 CheckBoxStyle);                                            // 0x0030(0x0580)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}


};

// Class Slate.ScrollBoxWidgetStyle
// 0x0230 (FullSize[0x0258] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0218 - 0x0000 // Minimum to subtract -> (0008)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0218, struct FScrollBoxStyle,                                                ScrollBoxStyle);                                           // 0x0030(0x0228)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}


};

// Class Slate.ComboBoxWidgetStyle
// 0x03E0 (FullSize[0x0408] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0219 - 0x0000 // Minimum to subtract -> (0008)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0219, struct FComboBoxStyle,                                                 ComboBoxStyle);                                            // 0x0030(0x03D8)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}


};

// Class Slate.SlateSettings
// 0x0001 (FullSize[0x0029] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_021B - 0x0000 // Minimum to subtract -> (0000)
class USlateSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_021B, bool,                                                                  bExplicitCanvasChildZOrder);                               // 0x0028(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SlateSettings");
		return ptr;
	}


};

// Class Slate.SpinBoxWidgetStyle
// 0x02F0 (FullSize[0x0318] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_021D - 0x0000 // Minimum to subtract -> (0008)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_021D, struct FSpinBoxStyle,                                                  SpinBoxStyle);                                             // 0x0030(0x02E8)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}


};

// Class Slate.ComboButtonWidgetStyle
// 0x03A8 (FullSize[0x03D0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_021F - 0x0000 // Minimum to subtract -> (0008)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_021F, struct FComboButtonStyle,                                              ComboButtonStyle);                                         // 0x0030(0x03A0)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}


};

// Class Slate.TextBlockWidgetStyle
// 0x0270 (FullSize[0x0298] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0221 - 0x0000 // Minimum to subtract -> (0008)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0221, struct FTextBlockStyle,                                                TextBlockStyle);                                           // 0x0030(0x0268)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}


};

// Class Slate.EditableTextBoxWidgetStyle
// 0x07F8 (FullSize[0x0820] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0223 - 0x0000 // Minimum to subtract -> (0008)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0223, struct FEditableTextBoxStyle,                                          EditableTextBoxStyle);                                     // 0x0030(0x07F0)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}


};

// Class Slate.EditableTextWidgetStyle
// 0x0220 (FullSize[0x0248] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0225 - 0x0000 // Minimum to subtract -> (0008)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0225, struct FEditableTextStyle,                                             EditableTextStyle);                                        // 0x0030(0x0218)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}


};

// Class Slate.ProgressWidgetStyle
// 0x01A8 (FullSize[0x01D0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0227 - 0x0000 // Minimum to subtract -> (0008)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0227, struct FProgressBarStyle,                                              ProgressBarStyle);                                         // 0x0030(0x01A0)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
