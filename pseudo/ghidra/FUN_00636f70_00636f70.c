// FUN_00636f70  00636f70

void __fastcall FUN_00636f70(int param_1)

{
  int iVar1;
  int local_8;
  
  for (local_8 = 0; iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar1;
      local_8 = local_8 + 1) {
    if ((*(int *)(*(int *)(param_1 + 0x58) + local_8 * 4) != 0) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x58) + local_8 * 4) + 0x20) != 0)) {
      FUN_00648270(0);
    }
  }
  return;
}

