// FUN_0056ae50  0056ae50

void FUN_0056ae50(undefined4 param_1)

{
  int extraout_EDX;
  int iVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  short local_18 [6];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_0056adb0(param_1,local_18);
  local_8 = 0;
  iVar1 = extraout_EDX;
  uVar2 = extraout_var;
  while (local_8 < 5) {
    if (local_18[local_8] != 0) {
      FUN_0056b490(param_1,local_8);
    }
    iVar1 = local_8 + 1;
    local_8 = iVar1;
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc,iVar1,uVar2);
  return;
}

