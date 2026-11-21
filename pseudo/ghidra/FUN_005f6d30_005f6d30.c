// FUN_005f6d30  005f6d30

void __fastcall FUN_005f6d30(int param_1)

{
  void *pvVar1;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9fbe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5010(DAT_00781870 ^ (uint)&stack0xfffffffc);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    pvVar1 = operator_new(0x5c);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_005f6130();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48 + local_14 * 4) = local_24;
    *(undefined4 *)(*(int *)(param_1 + 0x48 + local_14 * 4) + 4) = *(undefined4 *)(param_1 + 4);
    (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0x40))();
  }
  ExceptionList = local_10;
  return;
}

