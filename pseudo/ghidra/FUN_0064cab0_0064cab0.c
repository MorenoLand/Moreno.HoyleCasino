// FUN_0064cab0  0064cab0

void FUN_0064cab0(char *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  int local_40;
  char local_38 [8];
  int local_30;
  size_t local_2c;
  int local_28;
  char local_24 [28];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_1 == (char *)0x0) {
    FUN_0064c8a0(0,0);
    uVar4 = extraout_EDX;
  }
  else {
    bVar1 = false;
    local_2c = strlen(param_1);
    local_30 = 0;
    local_28 = 0;
    for (local_40 = 0; local_40 < (int)local_2c; local_40 = local_40 + 1) {
      if (param_1[local_40] == '.') {
        bVar1 = true;
      }
      else if (('/' < param_1[local_40]) && (param_1[local_40] < ':')) {
        if (bVar1) {
          local_38[local_28] = param_1[local_40];
          local_28 = local_28 + 1;
        }
        else {
          local_24[local_30] = param_1[local_40];
          local_30 = local_30 + 1;
        }
      }
    }
    local_24[local_30] = '\0';
    local_38[local_28] = '\0';
    iVar2 = atoi(local_38);
    iVar3 = atoi(local_24);
    FUN_0064c8a0(iVar3,iVar2);
    uVar4 = extraout_EDX_00;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}

