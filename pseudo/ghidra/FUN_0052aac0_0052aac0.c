// FUN_0052aac0  0052aac0

void __fastcall FUN_0052aac0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4284;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x184);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_005f5bf0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c + local_14 * 4) = local_24;
    FUN_005eae80(*(undefined4 *)(&DAT_00724d5c + local_14 * 4),0,*(undefined4 *)(param_1 + 0x100),
                 0x32,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x3c + local_14 * 4) + 0xb0))(0);
    *(undefined4 *)(*(int *)(param_1 + 0x3c + local_14 * 4) + 0x178) = 8;
    (**(code **)(**(int **)(param_1 + 0x3c + local_14 * 4) + 0x70))();
  }
  ExceptionList = local_10;
  return;
}

