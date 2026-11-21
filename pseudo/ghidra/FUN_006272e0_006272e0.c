// FUN_006272e0  006272e0

undefined4 * __thiscall
FUN_006272e0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x50);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x54);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  *param_2 = *(undefined4 *)(param_1 + 0x50);
  param_2[1] = uVar1;
  return param_2;
}

