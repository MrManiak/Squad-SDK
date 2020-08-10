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

// ScriptStruct CustomMeshComponent.CustomMeshTriangle
// 0x0024
public class FCustomMeshTriangle : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offVertex0                                                    = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVertex1                                                    = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVertex2                                                    = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Vertex0                                                        => _offVertex0.GetValue();
	public FVector                                             Vertex1                                                        => _offVertex1.GetValue();
	public FVector                                             Vertex2                                                        => _offVertex2.GetValue();
	#endregion

	public FCustomMeshTriangle(FVector c_Vertex0, FVector c_Vertex1, FVector c_Vertex2) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVertex0.SetValue(c_Vertex0);
		_offVertex1.SetValue(c_Vertex1);
		_offVertex2.SetValue(c_Vertex2);
	}
}

}