// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WebBrowser.WebJSCallbackBase
// 0x0020
public class FWebJSCallbackBase : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FWebJSCallbackBase() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct WebBrowser.WebJSResponse
// 0x0000 (0x0020 - 0x0020)
public class FWebJSResponse : FWebJSCallbackBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FWebJSResponse() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct WebBrowser.WebJSFunction
// 0x0000 (0x0020 - 0x0020)
public class FWebJSFunction : FWebJSCallbackBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FWebJSFunction() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}

}