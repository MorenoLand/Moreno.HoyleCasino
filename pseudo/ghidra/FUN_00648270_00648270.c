// FUN_00648270  00648270

void __thiscall FUN_00648270(int param_1,char param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((*(int *)(param_1 + 0x4c) != 0) && (*(char *)(param_1 + 0x50) == '\0')) {
    if (DAT_007960cb == '\0') {
      FUN_005f4510(*(undefined4 *)(param_1 + 0x4c),param_2);
    }
    else {
      FUN_006041d0(*(undefined4 *)(param_1 + 0x4c));
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x17c);
  if ((piVar1[9] != 0) && (param_2 != '\0')) {
    (**(code **)(*(int *)piVar1[9] + 0x1c))(0);
  }
  piVar1[9] = 0;
  (**(code **)(*piVar1 + 8))(0,0);
  return;
}

