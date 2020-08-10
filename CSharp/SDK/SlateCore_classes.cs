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

// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0000 (0x0028 - 0x0028)
public class USlateWidgetStyleContainerBase : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class SlateCore.FontBulkData
// 0x0000 (0x0028 - 0x0028)
public class UFontBulkData : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class SlateCore.FontFaceInterface
// 0x0000 (0x0028 - 0x0028)
public class UFontFaceInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class SlateCore.FontProviderInterface
// 0x0000 (0x0028 - 0x0028)
public class UFontProviderInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class SlateCore.SlateTypes
// 0x0000 (0x0028 - 0x0028)
public class USlateTypes : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (0x0030 - 0x0028)
public class USlateWidgetStyleAsset : UObject
{
	#region Offsets
	private ExternalOffset<USlateWidgetStyleContainerBase>    _offCustomStyle                                                = new ExternalOffset<USlateWidgetStyleContainerBase>(0x0028, true); // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USlateWidgetStyleContainerBase                     CustomStyle                                                    => _offCustomStyle.GetValue();
	#endregion


}

// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (0x0028 - 0x0028)
public class USlateWidgetStyleContainerInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}