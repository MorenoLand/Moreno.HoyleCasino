// FUN_00663080  00663080

undefined4 * __thiscall FUN_00663080(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  return param_2;
}

