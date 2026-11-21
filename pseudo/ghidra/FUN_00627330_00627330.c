// FUN_00627330  00627330

undefined4 * __thiscall
FUN_00627330(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined4 *)(param_1 + 0x5c) = param_4;
  FUN_00627b10();
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *param_2 = *(undefined4 *)(param_1 + 0x58);
  param_2[1] = uVar1;
  return param_2;
}

