// FUN_00447f70  00447f70

void __thiscall FUN_00447f70(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_50;
  undefined4 local_4c;
  int local_34 [9];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ec98;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34[0] = 0x134;
  local_34[1] = 0x11b;
  local_34[2] = 0x10a;
  local_34[3] = 0x11e;
  local_34[4] = 0x19e;
  local_34[5] = 0xf2;
  local_34[6] = 0x84;
  local_34[7] = 0xe7;
  *(undefined4 *)(param_1 + 4) = param_2;
  for (local_34[8] = 0; local_34[8] < 5; local_34[8] = local_34[8] + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_4c = 0;
    }
    else {
      local_4c = FUN_005eaaf0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 8 + local_34[8] * 4) = local_4c;
    (**(code **)(**(int **)(param_1 + 8 + local_34[8] * 4) + 0x40))();
  }
  pvVar2 = operator_new(0x178);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = local_50;
  FUN_005eae80(0x13b2,local_34[*(int *)(param_1 + 4) * 2],local_34[*(int *)(param_1 + 4) * 2 + 1],
               0x50,0xffffffff);
  ExceptionList = local_10;
  return;
}

