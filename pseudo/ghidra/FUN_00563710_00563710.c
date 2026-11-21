// FUN_00563710  00563710

void __fastcall FUN_00563710(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5a74;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = local_38;
  FUN_005eae80(0x312237,0,0,0x708,0xffffffff);
  iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x54))();
  (**(code **)(**(int **)(param_1 + 4) + 0x50))(iVar3 + 0x9a);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 8 + local_14 * 4) = local_3c;
    FUN_005eae80(0x312238,*(undefined4 *)(&DAT_00744034 + local_14 * 4),0x10c,0x709,0xffffffff);
    (**(code **)(**(int **)(param_1 + 8 + local_14 * 4) + 0x50))(0x104);
  }
  pvVar2 = operator_new(0x10);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_005666e0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = local_40;
  FUN_005667d0();
  FUN_00566a60(6);
  FUN_00566970(0x70a);
  ExceptionList = local_10;
  return;
}

