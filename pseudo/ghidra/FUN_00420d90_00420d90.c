// FUN_00420d90  00420d90

void __fastcall FUN_00420d90(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_50 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e14a;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50[4] = 0x92;
  local_50[5] = 0x88;
  local_50[6] = 0x7d;
  local_50[7] = 0x71;
  local_50[8] = 0x66;
  local_50[9] = 0x5b;
  local_50[10] = 0x4f;
  local_50[0xb] = 0x44;
  local_50[0xc] = 0x39;
  local_50[0xd] = 0x2d;
  local_50[0xe] = 0x22;
  local_50[0xf] = 0x17;
  local_50[0] = 0x76;
  local_50[1] = 0x54;
  local_50[2] = 0x30;
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = local_80;
  FUN_005eae80(0x3106dc,local_50[10],0x29,1,0xffffffff);
  for (local_50[3] = 0; local_50[3] < 3; local_50[3] = local_50[3] + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_84 = 0;
    }
    else {
      local_84 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 8 + local_50[3] * 4) = local_84;
    FUN_005eae80(0x3106dd,local_50[local_50[3]],0x2d,1,0xffffffff);
  }
  for (local_50[3] = 0; local_50[3] < 0xc; local_50[3] = local_50[3] + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_88 = 0;
    }
    else {
      local_88 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14 + local_50[3] * 4) = local_88;
    FUN_005eae80(0x3106de,local_50[local_50[3] + 4],0x2b,1,0xffffffff);
  }
  pvVar2 = operator_new(0x188);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_8c = 0;
  }
  else {
    local_8c = FUN_004212a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = local_8c;
  FUN_005eae80(0x3106e1,0x9b,0x2e,1,0xffffffff);
  pvVar2 = operator_new(0x1c);
  local_8 = 4;
  if (pvVar2 == (void *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = FUN_00600a70(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_90);
  ExceptionList = local_10;
  return;
}

