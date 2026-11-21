// FUN_005b31b0  005b31b0

void __thiscall FUN_005b31b0(int param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  short sVar1;
  int local_8;
  
  if (param_4 == -1) {
    param_4 = FUN_005b4e50(param_2);
  }
  local_8 = 0;
  while ((local_8 < 0x16 && (sVar1 = FUN_005b5c60(param_2,param_4,local_8), sVar1 != 0))) {
    local_8 = local_8 + 1;
  }
  FUN_005b7340(param_2,param_4,local_8,param_3);
  *(int *)(param_1 + 0x5b0) = *(int *)(param_1 + 0x5b0) + 1;
  return;
}

