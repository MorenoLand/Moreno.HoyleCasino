// FUN_004412f0  004412f0

void __fastcall FUN_004412f0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e9eb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 4 + local_14 * 4) == 0) {
      pvVar2 = operator_new(0x184);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_3c = 0;
      }
      else {
        local_3c = FUN_005f5bf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 4 + local_14 * 4) = local_3c;
      FUN_0043fab0(local_14,0);
      (**(code **)(**(int **)(param_1 + 4 + local_14 * 4) + 0x40))();
      FUN_005f53e0(local_14);
    }
    (**(code **)(**(int **)(param_1 + 4 + local_14 * 4) + 0x70))(uVar1);
    (**(code **)(**(int **)(param_1 + 4 + local_14 * 4) + 0x6c))(10 - local_14);
    (**(code **)(**(int **)(param_1 + 4 + local_14 * 4) + 0xb0))(0);
    if (*(int *)(param_1 + 0xb4 + local_14 * 4) == 0) {
      pvVar2 = operator_new(0x178);
      local_8 = 1;
      if (pvVar2 == (void *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0xb4 + local_14 * 4) = local_40;
      FUN_005eae80(0x1d4f9,0,0,local_14 + 0x1a,0xffffffff);
    }
    (**(code **)(**(int **)(param_1 + 0xb4 + local_14 * 4) + 0xb0))(local_14 * -2 + 8);
    (**(code **)(**(int **)(param_1 + 0xb4 + local_14 * 4) + 0x70))();
  }
  if (*(int *)(param_1 + 0xa8) == 0) {
    pvVar2 = operator_new(0x178);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_44 = 0;
    }
    else {
      local_44 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa8) = local_44;
    FUN_005eae80(0x1d4e9,0,0,0x19,0xffffffff);
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    pvVar2 = operator_new(0x178);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = local_48;
    FUN_005eae80(0x1d4ef,0,0,0x19,0xffffffff);
  }
  ExceptionList = local_10;
  return;
}

