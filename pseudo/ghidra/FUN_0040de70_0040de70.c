// FUN_0040de70  0040de70

void __thiscall FUN_0040de70(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dab4;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 4) = param_2;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 0x16; local_18 = local_18 + 1) {
      pvVar2 = operator_new(0x178);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x28 + local_14 * 0x58 + local_18 * 4) = local_38;
      (**(code **)(**(int **)(param_1 + 0x28 + local_14 * 0x58 + local_18 * 4) + 0x40))();
    }
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x1d4);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_005cd360(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 8 + local_14 * 4) = local_3c;
    FUN_005ec8f0(&PTR_006b27f8,4,0x1e,0xf,0,0,0x78,0x30,0xffffffff);
    FUN_005ee8c0(0xff,0xff,0xcc);
    pvVar2 = operator_new(0x178);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18 + local_14 * 4) = local_40;
    FUN_005eae80(0x13b2,0,0,0x50,0xffffffff);
  }
  ExceptionList = local_10;
  return;
}

