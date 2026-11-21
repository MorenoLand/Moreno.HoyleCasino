// FUN_0041fef0  0041fef0

void __thiscall FUN_0041fef0(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_54 [17];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e042;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54[0] = 0x134;
  local_54[1] = 0x11b;
  local_54[2] = 0x10a;
  local_54[3] = 0x11e;
  local_54[4] = 0x19e;
  local_54[5] = 0xf2;
  local_54[6] = 0x84;
  local_54[7] = 0xe7;
  local_54[9] = 0x12f;
  local_54[10] = 0x154;
  local_54[0xb] = 0xf6;
  local_54[0xc] = 0x17b;
  local_54[0xd] = 0x1b9;
  local_54[0xe] = 0x11f;
  local_54[0xf] = 0x23;
  local_54[0x10] = 0x13c;
  *(undefined4 *)(param_1 + 4) = param_2;
  for (local_54[8] = 0; local_54[8] < 5; local_54[8] = local_54[8] + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_74 = 0;
    }
    else {
      local_74 = FUN_005eaaf0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 8 + local_54[8] * 4) = local_74;
    (**(code **)(**(int **)(param_1 + 8 + local_54[8] * 4) + 0x40))();
  }
  pvVar2 = operator_new(0x178);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = local_78;
  FUN_005eae80(0x13b2,local_54[*(int *)(param_1 + 4) * 2],local_54[*(int *)(param_1 + 4) * 2 + 1],
               0x50,0xffffffff);
  pvVar2 = operator_new(0x178);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_7c = 0;
  }
  else {
    local_7c = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = local_7c;
  FUN_005eae80(0x13b2,local_54[*(int *)(param_1 + 4) * 2 + 9],
               local_54[*(int *)(param_1 + 4) * 2 + 10],0x50,0xffffffff);
  ExceptionList = local_10;
  return;
}

