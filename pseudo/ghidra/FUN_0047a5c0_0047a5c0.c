// FUN_0047a5c0  0047a5c0

void __fastcall FUN_0047a5c0(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_34 [9];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069fecc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_34[0] = 1;
  local_34[1] = 2;
  local_34[2] = 3;
  local_34[3] = 4;
  local_34[4] = 5;
  local_34[5] = 0xffffffff;
  local_34[6] = 6;
  local_34[7] = 7;
  pvVar1 = operator_new(0x42c);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_5c = 0;
  }
  else {
    local_5c = FUN_004c5750(0xffffffff);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = local_5c;
  FUN_004c70f0(0xffffffff);
  FUN_004c6d90(1);
  FUN_004c62d0(1);
  pvVar1 = operator_new(0x42c);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_004c5750(0);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = local_60;
  FUN_004c70f0(5);
  FUN_004c62d0(0);
  local_34[8] = 0;
  while (iVar2 = FUN_0047f950(), local_34[8] < iVar2) {
    if (local_34[8] != 5) {
      pvVar1 = operator_new(0x42c);
      local_8 = 2;
      if (pvVar1 == (void *)0x0) {
        local_64 = 0;
      }
      else {
        local_64 = FUN_004c5750(local_34[local_34[8]]);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 4 + local_34[8] * 4) = local_64;
      FUN_004c70f0(local_34[8]);
      FUN_004c62d0(0);
    }
    local_34[8] = local_34[8] + 1;
  }
  pvVar1 = operator_new(0x10);
  local_8 = 3;
  if (pvVar1 == (void *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_0060c5f0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = local_68;
  local_34[8] = FUN_0047f950();
  while (local_34[8] = local_34[8] + -1, -1 < local_34[8]) {
    FUN_0060c7d0(*(undefined4 *)(param_1 + 4 + local_34[8] * 4));
  }
  ExceptionList = local_10;
  return;
}

