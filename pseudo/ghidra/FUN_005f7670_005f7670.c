// FUN_005f7670  005f7670

undefined4 * __thiscall
FUN_005f7670(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa11c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciPlane::vftable;
  FUN_0060c5f0();
  local_8._0_1_ = 1;
  FUN_0060c5f0();
  local_8._0_1_ = 2;
  FUN_0060c5f0();
  local_8._0_1_ = 3;
  FUN_0060c5f0();
  local_8._0_1_ = 4;
  FUN_0060c5f0();
  local_8._0_1_ = 5;
  FUN_0060c5f0();
  local_8._0_1_ = 6;
  FUN_0060c5f0();
  local_8._0_1_ = 7;
  FUN_0060c5f0();
  local_8._0_1_ = 8;
  FUN_0060c5f0();
  local_8._0_1_ = 9;
  FUN_0060c5f0();
  local_8._0_1_ = 10;
  FUN_0060c5f0();
  local_8._0_1_ = 0xb;
  FUN_0060c5f0();
  local_8._0_1_ = 0xc;
  FUN_0060c5f0();
  local_8._0_1_ = 0xd;
  FUN_0060c5f0();
  local_8._0_1_ = 0xe;
  FUN_0060c5f0();
  local_8._0_1_ = 0xf;
  FUN_0060c5f0();
  local_8._0_1_ = 0x10;
  FUN_0060c5f0();
  local_8._0_1_ = 0x11;
  FUN_0060c5f0();
  local_8 = CONCAT31(local_8._1_3_,0x12);
  param_1[0x69] = param_3;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x47) = param_2;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  FUN_005f9b00();
  param_1[0x45] = 0xffffffff;
  param_1[0x46] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = param_5;
  param_1[0x44] = param_4;
  param_1[0x5b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x48] = 0x1c;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)((int)param_1 + 0x1b1) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  memset(param_1 + 0x60,0,0x10);
  memset(param_1 + 100,0,0x10);
  if (param_1[0x69] == 0) {
    uVar1 = (**(code **)(*DAT_007960d8 + 0x18))();
    param_1[0x6a] = uVar1;
    DAT_007960d8[4] = param_1[0x6a];
    (**(code **)(*(int *)param_1[0x6a] + 4))(param_4,param_5);
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  else {
    param_1[0x6a] = *(undefined4 *)(param_1[0x69] + 0x1a8);
    *(undefined1 *)(param_1 + 0x5a) = 0;
  }
  ExceptionList = local_10;
  return param_1;
}

