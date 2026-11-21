// FUN_0040c770  0040c770

void __fastcall FUN_0040c770(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d9d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24[0] = 1;
  local_24[1] = 2;
  local_24[2] = 0;
  local_24[3] = 3;
  uVar1 = FUN_00630f40("SID_BLACKJACK",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(0x138d);
  for (local_24[4] = 0; local_24[4] < 5; local_24[4] = local_24[4] + 1) {
    pvVar2 = operator_new(0x188);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_5c = 0;
    }
    else {
      local_5c = FUN_0040dc70();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_24[4] * 4) = local_5c;
    FUN_0040de70(local_24[4]);
  }
  for (local_24[4] = 0; local_24[4] < 4; local_24[4] = local_24[4] + 1) {
    pvVar2 = operator_new(0xcc0);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = FUN_0040eca0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18 + local_24[4] * 4) = local_60;
    FUN_005eae80(0x138e,0,0,1,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x18 + local_24[4] * 4) + 0xb0))(local_24[local_24[4]]);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_00790324 + 0x468 + local_24[4] * 4));
    (**(code **)(**(int **)(param_1 + 0x18 + local_24[4] * 4) + 0x74))();
  }
  local_64 = operator_new(0x198);
  local_8 = 2;
  if (local_64 == (undefined4 *)0x0) {
    local_64 = (undefined4 *)0x0;
  }
  else {
    FUN_005cd6a0();
    *local_64 = BlackjackDealerDisplay::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x2c) = local_64;
  FUN_005eae80(0,0,0,0,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = local_68;
  FUN_005eae80(0x13a2,0,0,0x96,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 4;
  if (pvVar2 == (void *)0x0) {
    local_6c = 0;
  }
  else {
    local_6c = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = local_6c;
  FUN_005eae80(0x13a3,0,0,0x97,0xffffffff);
  pvVar2 = operator_new(0x178);
  local_8 = 5;
  if (pvVar2 == (void *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = local_70;
  FUN_005eae80(0x13a1,0,0,10,0xffffffff);
  ExceptionList = local_10;
  return;
}

