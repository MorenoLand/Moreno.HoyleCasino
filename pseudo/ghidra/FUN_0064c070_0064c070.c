// FUN_0064c070  0064c070

undefined4 * __thiscall
FUN_0064c070(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_00601a80();
  *param_1 = CommentButton::vftable;
  param_1[0x77] = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 0x78) = param_4;
  return param_1;
}

