// FUN_005b90d0  005b90d0

void __fastcall FUN_005b90d0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006a7ee6;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = InfoScreenController::vftable;
  local_8 = 1;
  local_14 = 0;
  while( true ) {
    if (param_1[2] == 0) {
      local_7c = 0;
    }
    else {
      local_7c = (int)(param_1[3] - param_1[2]) >> 4;
    }
    if (local_7c <= (int)local_14) break;
    iVar2 = FUN_005b9320(local_14);
    if (iVar2 != 0) {
      if (param_1[2] == 0) {
        local_80 = 0;
      }
      else {
        local_80 = (int)(param_1[3] - param_1[2]) >> 4;
      }
      if (local_80 <= local_14) {
        _invalid_parameter_noinfo();
      }
      iVar3 = local_14 * 0x10 + param_1[2];
      if (*(int *)(iVar3 + 4) == 0) {
        local_84 = 0;
      }
      else {
        local_84 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2;
      }
      for (local_1c = 0; (int)local_1c < local_84; local_1c = local_1c + 1) {
        if (param_1[2] == 0) {
          local_88 = 0;
        }
        else {
          local_88 = (int)(param_1[3] - param_1[2]) >> 4;
        }
        if (local_88 <= local_14) {
          _invalid_parameter_noinfo();
        }
        iVar3 = local_14 * 0x10 + param_1[2];
        if (*(int *)(iVar3 + 4) == 0) {
          local_8c = 0;
        }
        else {
          local_8c = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2;
        }
        if (local_8c <= local_1c) {
          _invalid_parameter_noinfo();
        }
        FUN_006104c0(*(undefined4 *)(*(int *)(iVar3 + 4) + local_1c * 4),iVar2);
      }
    }
    local_14 = local_14 + 1;
  }
  FUN_006104c0(0x315927,param_1[5],uVar1);
  FUN_006104c0(0x315929,param_1[5]);
  FUN_006104c0(0x315928,param_1[5]);
  local_8 = local_8 & 0xffffff00;
  FUN_005b9f10();
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

