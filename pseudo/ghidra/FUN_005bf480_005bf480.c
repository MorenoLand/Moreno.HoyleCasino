// FUN_005bf480  005bf480

void __thiscall FUN_005bf480(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_c4;
  int *local_c0;
  int *local_bc;
  int local_44;
  void *local_40;
  undefined4 local_3c;
  void *local_38;
  int *local_34;
  void *local_30;
  int *local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8338;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 3;
  if ((param_2 < 0x3158d1) || (0x3158d5 < param_2)) {
    *(undefined4 **)(param_1 + 0x14) = &DAT_007592d0;
  }
  else {
    *(int *)(param_1 + 0x14) = param_2 * 0x90 + -0x1b4c62c0;
  }
  local_30 = operator_new(0x178);
  local_8 = 0;
  if (local_30 == (void *)0x0) {
    local_bc = (int *)0x0;
  }
  else {
    local_bc = (int *)FUN_005eaaf0(uVar1);
  }
  local_2c = local_bc;
  local_8 = 0xffffffff;
  local_20 = local_bc;
  FUN_005f9ce0(local_bc,100,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),0,0,100,0,0xff,0);
  FUN_005eb000(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18));
  (**(code **)(*local_20 + 0xb0))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1c));
  local_38 = operator_new(0x178);
  local_8 = 1;
  if (local_38 == (void *)0x0) {
    local_c0 = (int *)0x0;
  }
  else {
    local_c0 = (int *)FUN_005eaaf0();
  }
  local_34 = local_c0;
  local_8 = 0xffffffff;
  local_24 = local_c0;
  FUN_005f9ce0(local_c0,0xca,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x20),
               *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x30),
               *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x34),0xca,0,0xff,0);
  FUN_005eb000(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24));
  (**(code **)(*local_24 + 0xb0))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x28));
  local_1c = 0;
  for (local_14 = 0; local_14 < *(int *)(*(int *)(param_1 + 0x14) + 4); local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < **(int **)(param_1 + 0x14); local_18 = local_18 + 1) {
      local_40 = operator_new(0x1dc);
      local_8 = 2;
      if (local_40 == (void *)0x0) {
        local_c4 = 0;
      }
      else {
        local_c4 = FUN_00601a80();
      }
      local_3c = local_c4;
      local_8 = 0xffffffff;
      local_28 = local_c4;
      FUN_005f9de0(local_c4,local_1c + 0x65,*(undefined4 *)(*(int *)(param_1 + 0x14) + 8),
                   local_18 * *(int *)(*(int *)(param_1 + 0x14) + 0x48) +
                   *(int *)(*(int *)(param_1 + 0x14) + 0x40),
                   local_14 * *(int *)(*(int *)(param_1 + 0x14) + 0x4c) +
                   *(int *)(*(int *)(param_1 + 0x14) + 0x44),local_1c + 0x65,&PTR_006b27f8,
                   0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
      FUN_005eb700(*(undefined1 *)(*(int *)(param_1 + 0x14) + 0x2c));
      uVar2 = FUN_005eb130();
      uVar2 = FUN_0062fbf0(uVar2);
      FUN_005eb000(uVar2);
      local_1c = local_1c + 1;
    }
  }
  for (local_1c = 0; *(int *)(local_1c * 0x10 + *(int *)(*(int *)(param_1 + 0x14) + 0x3c)) != -100;
      local_1c = local_1c + 1) {
    local_44 = local_1c * 0x10 + *(int *)(*(int *)(param_1 + 0x14) + 0x3c);
    FUN_005bfd30(&local_44);
  }
  FUN_005bfc00();
  ExceptionList = local_10;
  return;
}

