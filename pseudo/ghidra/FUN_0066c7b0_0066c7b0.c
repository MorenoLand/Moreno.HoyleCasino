// FUN_0066c7b0  0066c7b0

void __thiscall FUN_0066c7b0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if ((((DAT_00795f95 == '\0') || (param_2 < 0)) ||
      (iVar2 = (**(code **)(*DAT_0162ee84 + 0xec))(), iVar2 <= param_2)) ||
     (cVar1 = (**(code **)(*DAT_0162ee84 + 0x340))(param_2), cVar1 != '\0')) {
    if (param_2 == 2000) {
      (**(code **)(*DAT_0162ee84 + 0x34c))(&DAT_007953c8,2000,param_1);
    }
    else if (param_2 == 0x7d1) {
      FUN_006375b0();
      piVar4 = (int *)FUN_0063aac0();
      if (*piVar4 == 3) {
        FUN_006375b0();
        uVar3 = FUN_0057a470();
        FUN_0064f470(uVar3);
      }
      else {
        FUN_0064f470(0);
      }
    }
    else {
      (**(code **)(*DAT_0162ee84 + 0x348))(param_2);
    }
  }
  else {
    (**(code **)(*DAT_0162ee84 + 0x338))(param_2,local_10c);
    puVar5 = local_10c;
    uVar3 = FUN_00630f40("SID_SHELL_PLAYDEMO",puVar5);
    FUN_00635cd0(uVar3,puVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

