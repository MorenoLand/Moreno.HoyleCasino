// FUN_0052e2b0  0052e2b0

void __fastcall FUN_0052e2b0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_34;
  undefined4 local_30;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a452a;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0xcc + local_14 * 4) + 0x70))();
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0xe0 + local_14 * 4) + 0x70))();
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0xb4 + local_14 * 4) + 0x70))();
  }
  FUN_0052abe0(uVar1);
  FUN_00609870(*(undefined4 *)(param_1 + 0x60),1);
  FUN_00609870(*(undefined4 *)(param_1 + 100),1);
  FUN_005f5d50(0);
  (**(code **)(**(int **)(param_1 + 0xc0) + 0x70))();
  FUN_005f5d50(0);
  (**(code **)(**(int **)(param_1 + 200) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0xc4) + 0xb0))(0);
  if (*(int *)(DAT_007947e0 + 0x4f14) == 10) {
    pvVar2 = operator_new(0x1c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_00601690();
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_30);
    *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x178) = 4;
  }
  else {
    pvVar2 = operator_new(0x1c);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = FUN_00600a70(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_34);
  }
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x74))();
  *(undefined1 *)(DAT_0079338c + 0x7d) = 1;
  ExceptionList = local_10;
  return;
}

