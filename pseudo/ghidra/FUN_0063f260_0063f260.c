// FUN_0063f260  0063f260

void __fastcall FUN_0063f260(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_005f5400(param_1);
  if (iVar1 == 4) {
    local_8 = 0;
    while( true ) {
      iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))();
      if (iVar1 <= local_8) break;
      if (*(int *)(*(int *)(*(int *)(DAT_0163068c + 0x1bc) + local_8 * 4) + 0x20) != 0) {
        FUN_00646c20(1);
      }
      local_8 = local_8 + 1;
    }
  }
  FUN_005ff730();
  return;
}

