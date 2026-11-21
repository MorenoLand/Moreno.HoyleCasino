// FUN_0067b450  0067b450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067b450(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006ad98f;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006044b0(0x20564157,0x1f57,0);
  FUN_006044b0(0x20564157,0x1f58,0);
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    FUN_006044b0(0x20584554,local_14 + 0x249f2d,0);
  }
  FUN_006044b0(0x20584554,0x249f2c,0);
  switch(param_2) {
  case 0:
    DAT_016306e4 = 0;
    pvVar2 = operator_new(400);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_88 = 0;
    }
    else {
      local_88 = FUN_005f5f50();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x240) = local_88;
    *(undefined4 *)(*(int *)(param_1 + 0x240) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f2c);
    (**(code **)(**(int **)(param_1 + 0x240) + 0x40))();
    FUN_005eae80(0x249f2c,0,0x95,60000,0);
    (**(code **)(**(int **)(param_1 + 0x240) + 0x74))();
    *(undefined4 *)(*(int *)(param_1 + 0x240) + 0x184) = 3;
    *(undefined4 *)(*(int *)(param_1 + 0x240) + 0x188) = 10;
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      pvVar2 = operator_new(400);
      local_8 = 1;
      if (pvVar2 == (void *)0x0) {
        local_8c = 0;
      }
      else {
        local_8c = FUN_005f5f50();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x234 + local_14 * 4) = local_8c;
      *(undefined4 *)(*(int *)(param_1 + 0x234 + local_14 * 4) + 4) = *(undefined4 *)(param_1 + 4);
      FUN_005eaf00(local_14 + 0x249f2d);
      (**(code **)(**(int **)(param_1 + 0x234 + local_14 * 4) + 0x40))();
      *(undefined4 *)(*(int *)(param_1 + 0x234 + local_14 * 4) + 0x184) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x234 + local_14 * 4) + 0x188) = 3;
    }
    FUN_005eae80(0x249f2d,0,0xffffffd5,60000,0);
    FUN_005eae80(0x249f2e,0xffffffd5,0,59000,0);
    FUN_005eae80(0x249f2f,0x2b,0,59000,0);
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      (**(code **)(**(int **)(param_1 + 0x234 + local_14 * 4) + 0x74))();
    }
    (**(code **)(*DAT_0162ee84 + 0x80))
              (*(undefined4 *)(param_1 + 0x2a0),0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(1,0x1e);
    break;
  case 1:
    pvVar2 = operator_new(0x2c);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = FUN_00606e60(0,0,0,0);
    }
    local_8 = 0xffffffff;
    FUN_005f6050(local_90);
    pvVar2 = operator_new(0x2c);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_94 = 0;
    }
    else {
      local_94 = FUN_00606e60(0,0,0,0);
    }
    local_8 = 0xffffffff;
    FUN_005f6050(local_94);
    pvVar2 = operator_new(0x2c);
    local_8 = 4;
    if (pvVar2 == (void *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = FUN_00606e60(0,0,0,0);
    }
    local_8 = 0xffffffff;
    FUN_005f6050(local_98);
    pvVar2 = operator_new(0x2c);
    local_8 = 5;
    if (pvVar2 == (void *)0x0) {
      local_9c = 0;
    }
    else {
      local_9c = FUN_00606e60(0,0,0,0);
    }
    local_8 = 0xffffffff;
    FUN_005f6050(local_9c);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(2,0x5a);
    break;
  case 2:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x1f58,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    pvVar2 = operator_new(0x20);
    local_8 = 6;
    if (pvVar2 == (void *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = FUN_00600f30(3,*(undefined4 *)(param_1 + 0x17c));
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_a0);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(0x1e);
    break;
  case 4:
    if (DAT_016306e4 == 0xd) {
      DAT_016306e4 = DAT_016306e4 + 1;
      (**(code **)(**(int **)(param_1 + 0x17c) + 8))(5,0);
    }
    else {
      DAT_016306e4 = DAT_016306e4 + 1;
      (**(code **)(**(int **)(param_1 + 0x240) + 0xb0))(8);
      (**(code **)(**(int **)(param_1 + 0x17c) + 8))(3,10);
    }
    break;
  case 5:
    pvVar2 = operator_new(0x20);
    local_8 = 8;
    if (pvVar2 == (void *)0x0) {
      local_a8 = 0;
    }
    else {
      local_a8 = FUN_00600f90(*(undefined4 *)(param_1 + 0x17c));
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_a8);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(6,0x1e);
    break;
  case 6:
    pvVar2 = operator_new(0x2c);
    local_8 = 9;
    if (pvVar2 == (void *)0x0) {
      local_ac = 0;
    }
    else {
      local_ac = FUN_00606e60(0,0,0x95,0);
    }
    local_8 = 0xffffffff;
    FUN_005f6050(local_ac);
    pvVar2 = operator_new(0x2c);
    local_8 = 10;
    if (pvVar2 == (void *)0x0) {
      local_b0 = 0;
    }
    else {
      local_b0 = FUN_00606e60(0,0,0xffffffd5,0);
    }
    local_8 = 0xffffffff;
    FUN_005f6050(local_b0);
    pvVar2 = operator_new(0x2c);
    local_8 = 0xb;
    if (pvVar2 == (void *)0x0) {
      local_b4 = 0;
    }
    else {
      local_b4 = FUN_00606e60(0,0xffffffd5,0,0);
    }
    local_8 = 0xffffffff;
    FUN_005f6050(local_b4);
    pvVar2 = operator_new(0x2c);
    local_8 = 0xc;
    if (pvVar2 == (void *)0x0) {
      local_b8 = 0;
    }
    else {
      local_b8 = FUN_00606e60(0,0x2b,0,0);
    }
    local_8 = 0xffffffff;
    FUN_005f6050(local_b8);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(7,6);
    break;
  case 7:
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(8,0x3c);
    break;
  case 8:
    FUN_00650550(0);
    break;
  case 0x1e:
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x240) + 0xb0))(4);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x28,10);
    break;
  case 0x28:
    if (DAT_016306e4 == 4) {
      DAT_016306e4 = DAT_016306e4 + 1;
      (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x32,0);
    }
    else {
      DAT_016306e4 = DAT_016306e4 + 1;
      (**(code **)(**(int **)(param_1 + 0x240) + 0xb0))(5,uVar1);
      (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x1e,10);
    }
    break;
  case 0x32:
    pvVar2 = operator_new(0x20);
    local_8 = 7;
    if (pvVar2 == (void *)0x0) {
      local_a4 = 0;
    }
    else {
      local_a4 = FUN_00600f30(6,*(undefined4 *)(param_1 + 0x17c));
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_a4);
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))(3);
  case 3:
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x240) + 0xb0))(7);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(4,10);
  }
  ExceptionList = local_10;
  return;
}

