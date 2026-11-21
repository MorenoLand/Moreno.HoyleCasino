// FUN_00610980  00610980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00610980(int *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  int iVar7;
  uint local_128;
  uint local_120;
  int local_11c;
  int local_114;
  int local_110;
  int local_10c;
  int local_24;
  int local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aaf5a;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_015e55f4 == 0) {
    local_10c = 0;
  }
  else {
    local_10c = (DAT_015e55f8 - DAT_015e55f4) / 0x48;
  }
  if (local_10c == 0) {
    local_114 = 0;
  }
  else {
    if (DAT_015e55f4 == 0) {
      local_110 = 0;
    }
    else {
      local_110 = (DAT_015e55f8 - DAT_015e55f4) / 0x48;
    }
    if (local_110 == 0) {
      _invalid_parameter_noinfo();
    }
    local_114 = DAT_015e55f4;
  }
  local_24 = 0;
  if (((*param_1 != 0) || (param_1[1] != 0)) &&
     (cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))(uVar2), cVar1 != '\0')) {
    local_20 = 0;
    while ((local_20 < local_10c && (cVar1 = FUN_00610810(), cVar1 == '\0'))) {
      local_20 = local_20 + 1;
    }
    if (local_20 < local_10c) {
      local_18 = local_20 * 0x48 + local_114;
      cVar1 = FUN_00609910();
      if (cVar1 == '\0') {
        cVar1 = FUN_00609650();
        if (cVar1 == '\0') {
          ExceptionList = local_10;
          return;
        }
        FUN_006127f0();
        local_18 = 0;
      }
    }
    else {
      local_18 = 0;
    }
    if (local_18 == 0) {
      FUN_006105e0();
      local_8 = 0;
      FUN_006117e0();
      local_8 = 0xffffffff;
      FUN_005be450();
      if (DAT_015e55f4 == 0) {
        local_11c = 0;
      }
      else {
        local_11c = (DAT_015e55f8 - DAT_015e55f4) / 0x48;
      }
      if (DAT_015e55f4 == 0) {
        local_120 = 0;
      }
      else {
        local_120 = (DAT_015e55f8 - DAT_015e55f4) / 0x48;
      }
      if (local_120 <= local_11c - 1U) {
        _invalid_parameter_noinfo();
      }
      local_18 = (local_11c - 1U) * 0x48 + DAT_015e55f4;
      local_24 = *param_1;
      if (param_1[1] != 0) {
        uVar3 = FUN_0062fbf0();
        if (*(int *)(local_18 + 0x24) == 0) {
          local_128 = 0;
        }
        else {
          local_128 = *(int *)(local_18 + 0x28) - *(int *)(local_18 + 0x24) >> 2;
        }
        if (local_128 <= uVar3) {
          _invalid_parameter_noinfo();
        }
        local_24 = *(int *)(*(int *)(local_18 + 0x24) + uVar3 * 4);
      }
      if (local_24 == 0) {
        ExceptionList = local_10;
        return;
      }
    }
    if (param_1[4] == 0) {
      iVar7 = param_1[6];
    }
    else {
      iVar7 = 0;
    }
    iVar4 = FUN_00686cc0();
    if (param_1[4] != 0) {
      uVar5 = FUN_005f3e50();
      *(undefined4 *)(local_18 + 0x34) = uVar5;
      *(undefined4 *)(local_18 + 0x3c) = 0;
      *(float *)(local_18 + 0x38) = (float)param_1[6] / (float)param_1[4];
      dVar6 = fabs((double)*(float *)(local_18 + 0x38));
      if ((float)dVar6 < (float)_DAT_006bc270) {
        FUN_005e9f20("fabs(it->mFadeRate) >= 0.01","..\\scilib\\sciSetup.cpp",0x121,uVar2,
                     (float)dVar6,iVar7);
      }
      *(int *)(local_18 + 0x40) = param_1[6];
      *(undefined4 *)(local_18 + 0x44) = 0;
    }
    if (*(int *)(local_18 + 0x30) < 0) {
      uVar5 = FUN_00608b50(local_24,param_1[2],1,((char)param_1[3] != '\0') - 1,(float)iVar4,
                           param_1[7],0);
      *(undefined4 *)(local_18 + 0x30) = uVar5;
      if (*(int *)(local_18 + 0x30) < 0) {
        FUN_006110a0(param_1,1);
      }
    }
    else {
      FUN_00608550(*(undefined4 *)(local_18 + 0x30),(float)iVar4);
      FUN_00609a80();
    }
  }
  ExceptionList = local_10;
  return;
}

