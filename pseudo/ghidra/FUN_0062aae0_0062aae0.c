// FUN_0062aae0  0062aae0

void __thiscall FUN_0062aae0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x10)) {
    FUN_0062a980();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  local_8 = *(int *)(param_1 + 8);
  while (local_8 = local_8 + -1, param_3 <= local_8) {
    *(undefined4 *)(iVar1 + 4 + local_8 * 4) = *(undefined4 *)(iVar1 + local_8 * 4);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(undefined4 *)(iVar1 + param_3 * 4) = param_2;
  return;
}

