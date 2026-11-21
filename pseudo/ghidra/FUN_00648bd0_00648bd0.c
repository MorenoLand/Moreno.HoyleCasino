// FUN_00648bd0  00648bd0

void __thiscall FUN_00648bd0(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 != *(char *)(param_1 + 0x44)) {
    iVar1 = FUN_00648bb0();
    if (iVar1 != 0) {
      FUN_00648c20();
      goto LAB_00648c0b;
    }
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
LAB_00648c0b:
  *(char *)(param_1 + 0x44) = param_2;
  return;
}

