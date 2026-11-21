// FUN_00627260  00627260

undefined4 * __thiscall
FUN_00627260(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x54) = param_4;
  FUN_00627b10();
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  *param_2 = *(undefined4 *)(param_1 + 0x50);
  param_2[1] = uVar1;
  return param_2;
}

