// FUN_0060fb30  0060fb30

void __thiscall FUN_0060fb30(int param_1,int param_2,char param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_3c;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aae74;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 1;
  if (param_2 != *(int *)(param_1 + 0x188)) {
    for (local_18 = 0; local_18 < *(short *)(param_1 + 0x184); local_18 = local_18 + 1) {
      local_14 = local_14 * 10;
    }
    if (param_2 < 0) {
      FUN_005e9f20("false","..\\scilib\\sciOdometer.cpp",0xb9,uVar1);
      param_2 = 0;
    }
    if (local_14 + -1 < param_2) {
      FUN_005e9f20("false","..\\scilib\\sciOdometer.cpp",0xbd,uVar1);
      param_2 = local_14 + -1;
    }
    if (param_3 == '\0') {
      pvVar2 = operator_new(0x38);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_3c = 0;
      }
      else {
        local_3c = FUN_0060fd70(param_2,param_1);
      }
      local_8 = 0xffffffff;
      FUN_005f5df0(local_3c);
    }
    else {
      FUN_005f5df0(0);
      local_1c = 0;
      for (local_24 = param_2; local_24 != 0; local_24 = local_24 / 10) {
        local_1c = local_1c + 1;
      }
      if (local_1c < 1) {
        local_1c = 1;
      }
      local_20 = param_2;
      for (local_28 = 0; local_28 < *(short *)(param_1 + 0x184); local_28 = local_28 + 1) {
        local_2c = local_20 % 10 << 1;
        if (local_1c <= local_28) {
          local_2c = 0x14;
        }
        (**(code **)(**(int **)(*(int *)(param_1 + 0x18c) + local_28 * 4) + 0xb0))(local_2c);
        local_20 = local_20 / 10;
      }
    }
    *(int *)(param_1 + 0x188) = param_2;
  }
  ExceptionList = local_10;
  return;
}

