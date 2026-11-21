// FUN_0063f2f0  0063f2f0

void __fastcall FUN_0063f2f0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  FUN_005ff6a0(param_1);
  iVar1 = FUN_005f5400();
  if (iVar1 == 4) {
    local_8 = 0;
    while( true ) {
      iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))();
      if (iVar1 <= local_8) break;
      if (*(int *)(*(int *)(*(int *)(DAT_0163068c + 0x1bc) + local_8 * 4) + 0x20) != 0) {
        FUN_006464d0(0,0);
      }
      local_8 = local_8 + 1;
    }
    if (4 < *(int *)(DAT_0163068c + 0x1d4)) {
      FUN_0063c620();
    }
  }
  return;
}

