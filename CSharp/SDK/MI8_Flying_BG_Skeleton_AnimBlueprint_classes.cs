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

// AnimBlueprintGeneratedClass MI8_Flying_BG_Skeleton_AnimBlueprint.MI8_Flying_BG_Skeleton_AnimBlueprint_C
// 0x01A0 (0x0320 - 0x0180)
public class UMI8_Flying_BG_Skeleton_AnimBlueprint_C : UAnimInstance
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0270, false); // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FAnimNode_Root>                    _offAnimGraphNode_Root_B1F4DAD649D7743AD4D3EFBD691ACD70        = new ExternalOffset<FAnimNode_Root>(0x0278, false);           // 0x0278(0x0030)
	private ExternalOffset<FAnimNode_SequencePlayer>          _offAnimGraphNode_SequencePlayer_4EBA176241FDAC687E5221B8E83C525F = new ExternalOffset<FAnimNode_SequencePlayer>(0x02A8, false); // 0x02A8(0x0078)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FAnimNode_Root                                     AnimGraphNode_Root_B1F4DAD649D7743AD4D3EFBD691ACD70            => _offAnimGraphNode_Root_B1F4DAD649D7743AD4D3EFBD691ACD70.GetValue();
	public FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer_4EBA176241FDAC687E5221B8E83C525F  => _offAnimGraphNode_SequencePlayer_4EBA176241FDAC687E5221B8E83C525F.GetValue();
	#endregion


}


}