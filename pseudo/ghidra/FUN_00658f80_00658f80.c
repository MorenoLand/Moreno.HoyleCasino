// FUN_00658f80  00658f80

void __fastcall FUN_00658f80(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_30;
  undefined4 local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac68d;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x608) == 0) {
    pvVar2 = operator_new(0x58);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_006061c0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x608) = local_2c;
    *(int *)(*(int *)(param_1 + 0x608) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x608) + 0x40))();
  }
  (**(code **)(**(int **)(param_1 + 0x608) + 0x70))(uVar1);
  FUN_006067e0();
  FUN_00606830();
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x60c + local_14 * 4) == 0) {
      pvVar2 = operator_new(0x23c);
      local_8 = 1;
      if (pvVar2 == (void *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_0065a750();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x60c + local_14 * 4) = local_30;
    }
    FUN_005f53e0(local_14);
    FUN_006062a0(*(undefined4 *)(param_1 + 0x60c + local_14 * 4));
    FUN_005eae80(0x1e84a5,(local_14 % 6) * 0x67 + 0xc,((5 < local_14) - 1 & 0xffffffa9) + 0x5b,2,
                 local_14);
    FUN_005fff90(0,1,2,3,1,1,1,1);
    FUN_0065adb0();
  }
  (**(code **)(**(int **)(param_1 + 0x608) + 0x74))();
  ExceptionList = local_10;
  return;
}

