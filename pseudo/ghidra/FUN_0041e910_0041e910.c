// FUN_0041e910  0041e910

void __fastcall FUN_0041e910(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_84 [29];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069df94;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_84[0xc] = 2;
  local_84[0xd] = 3;
  local_84[0xe] = 4;
  local_84[0xf] = 5;
  local_84[0x10] = 0;
  local_84[0x11] = 1;
  local_84[0x12] = 6;
  local_84[0x13] = 7;
  local_84[8] = 0x3106d8;
  local_84[9] = 0x3106d9;
  local_84[10] = 0x3106d7;
  local_84[0xb] = 0x3106da;
  local_84[0x14] = 0x168;
  local_84[0x15] = 0xf5;
  local_84[0x16] = 0xef;
  local_84[0x17] = 0xf4;
  local_84[0x18] = 0x1da;
  local_84[0x19] = 0xc1;
  local_84[0x1a] = 0x75;
  local_84[0x1b] = 0xc2;
  local_84[0] = 0x151;
  local_84[1] = 0x10b;
  local_84[2] = 0xf0;
  local_84[3] = 0x10b;
  local_84[4] = 0x1c1;
  local_84[5] = 0xd8;
  local_84[6] = 0x76;
  local_84[7] = 0xd9;
  uVar1 = FUN_00630f40("SID_CARIBBEANSTUD",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(0x3106c8);
  FUN_005f2ba0(0x3106cb);
  FUN_005f2ba0(0x3106cc);
  for (local_84[0x1c] = 0; local_84[0x1c] < 5; local_84[0x1c] = local_84[0x1c] + 1) {
    pvVar2 = operator_new(0x24);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_d8 = 0;
    }
    else {
      local_d8 = FUN_0041fd80();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_84[0x1c] * 4) = local_d8;
    FUN_0041fef0(local_84[0x1c]);
    pvVar2 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_dc = 0;
    }
    else {
      local_dc = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 100 + local_84[0x1c] * 4) = local_dc;
    FUN_005ec8f0(&PTR_006b27f8,0x38,200,0x14,0,0,0x51,0x30,0xffffffff);
  }
  for (local_84[0x1c] = 0; local_84[0x1c] < 8; local_84[0x1c] = local_84[0x1c] + 1) {
    pvVar2 = operator_new(0xae4);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_e0 = 0;
    }
    else {
      local_e0 = FUN_00420950();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18 + local_84[0x1c] * 4) = local_e0;
    *(int *)(*(int *)(param_1 + 0x18 + local_84[0x1c] * 4) + 0xae0) = local_84[0x1c];
    FUN_005eae80(0x3106ce,0,0,2,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x18 + local_84[0x1c] * 4) + 0xb0))
              (local_84[local_84[0x1c] + 0xc]);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_00790358 + 8 + local_84[0x1c] * 4));
    (**(code **)(**(int **)(param_1 + 0x18 + local_84[0x1c] * 4) + 0x74))();
  }
  for (local_84[0x1c] = 0; local_84[0x1c] < 4; local_84[0x1c] = local_84[0x1c] + 1) {
    pvVar2 = operator_new(0x1dc);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_e4 = 0;
    }
    else {
      local_e4 = FUN_00601a80();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44 + local_84[0x1c] * 4) = local_e4;
    FUN_005eae80(local_84[local_84[0x1c] + 8],local_84[local_84[0x1c] * 2],
                 local_84[local_84[0x1c] * 2 + 1],1,0xffffffff);
    FUN_005f53e0(local_84[0x1c]);
    FUN_00602eb0();
    *(undefined4 *)(*(int *)(param_1 + 0x44 + local_84[0x1c] * 4) + 0x178) = 3;
    *(undefined1 *)(*(int *)(param_1 + 0x44 + local_84[0x1c] * 4) + 0x1b5) = 1;
    (**(code **)(**(int **)(param_1 + 0x44 + local_84[0x1c] * 4) + 0x74))();
    local_e8 = operator_new(0x184);
    local_8 = 4;
    if (local_e8 == (undefined4 *)0x0) {
      local_e8 = (undefined4 *)0x0;
    }
    else {
      FUN_005f5bf0();
      *local_e8 = CaribbeanStudJackpotCoinBet::vftable;
    }
    local_8 = 0xffffffff;
    *(undefined4 **)(param_1 + 0x54 + local_84[0x1c] * 4) = local_e8;
    FUN_005eae80(0x3106db,local_84[local_84[0x1c] * 2 + 0x14],local_84[local_84[0x1c] * 2 + 0x15],2,
                 local_84[0x1c]);
  }
  pvVar2 = operator_new(0x48);
  local_8 = 5;
  if (pvVar2 == (void *)0x0) {
    local_ec = 0;
  }
  else {
    local_ec = FUN_00420bb0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = local_ec;
  FUN_00420d90();
  FUN_00421070();
  local_f0 = operator_new(0x198);
  local_8 = 6;
  if (local_f0 == (undefined4 *)0x0) {
    local_f0 = (undefined4 *)0x0;
  }
  else {
    FUN_005cd6a0();
    *local_f0 = CaribbeanStudDealerDisplay::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x38) = local_f0;
  FUN_005eae80(0,0,0,0,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 7;
  if (pvVar2 == (void *)0x0) {
    local_f4 = 0;
  }
  else {
    local_f4 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = local_f4;
  FUN_005eae80(0x13a2,0,0,0x32,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 8;
  if (pvVar2 == (void *)0x0) {
    local_f8 = 0;
  }
  else {
    local_f8 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = local_f8;
  FUN_005eae80(0x13a3,0,0,0x33,0xffffffff);
  ExceptionList = local_10;
  return;
}

