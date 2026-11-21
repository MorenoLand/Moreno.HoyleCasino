// FUN_006272a0  006272a0

undefined4 * __thiscall
FUN_006272a0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_c [8];
  
  FUN_00627260(local_c,param_3,param_4);
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  *param_2 = *(undefined4 *)(param_1 + 0x50);
  param_2[1] = uVar1;
  return param_2;
}

