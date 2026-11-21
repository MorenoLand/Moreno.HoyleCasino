// FUN_005c4ba0  005c4ba0

void __thiscall FUN_005c4ba0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_a4;
  int local_a0;
  uint local_9c;
  undefined1 local_38 [8];
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a86c8;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    local_9c = 0;
  }
  else {
    local_9c = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
  }
  if (local_9c < param_2) {
    if (*(int *)(param_1 + 4) == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
    }
    uVar1 = *(uint *)(param_1 + 8);
    local_18 = 0;
    if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1)) {
      _invalid_parameter_noinfo();
    }
    local_18 = param_1;
    local_14 = uVar1;
    FUN_005c5670(param_1,uVar1,param_2 - local_a0,&stack0x00000008,uVar2);
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      local_a4 = 0;
    }
    else {
      local_a4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
    }
    if (param_2 < local_a4) {
      uVar2 = *(uint *)(param_1 + 8);
      local_20 = 0;
      if (((param_1 == 0) || (uVar2 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar2))
      {
        _invalid_parameter_noinfo();
      }
      uVar1 = *(uint *)(param_1 + 4);
      local_28 = 0;
      local_20 = param_1;
      local_1c = uVar2;
      if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1))
      {
        _invalid_parameter_noinfo();
      }
      local_28 = param_1;
      local_24 = uVar1;
      FUN_005c6160(param_2);
      local_30 = param_1;
      local_2c = uVar1;
      FUN_005c55a0(local_38,param_1,uVar1,local_20,local_1c);
    }
  }
  local_8 = 0xffffffff;
  FUN_005c3980();
  ExceptionList = local_10;
  return;
}

