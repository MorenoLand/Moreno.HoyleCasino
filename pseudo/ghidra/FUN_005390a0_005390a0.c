// FUN_005390a0  005390a0

undefined * __thiscall FUN_005390a0(int param_1,int param_2)

{
  undefined *puVar1;
  
  if (*(int *)(param_1 + 4) == 1) {
    puVar1 = &DAT_00730bb0 + param_2 * 0x28;
  }
  else if (*(int *)(param_1 + 4) == 2) {
    puVar1 = &DAT_00730c78 + param_2 * 0x28;
  }
  else {
    puVar1 = &DAT_00730db8 + param_2 * 0x28;
  }
  return puVar1;
}

