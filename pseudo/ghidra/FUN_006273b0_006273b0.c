// FUN_006273b0  006273b0

undefined4 * __thiscall
FUN_006273b0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x58);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x5c);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *param_2 = *(undefined4 *)(param_1 + 0x58);
  param_2[1] = uVar1;
  return param_2;
}

