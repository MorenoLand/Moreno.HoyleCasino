// FUN_00479960  00479960

undefined4 __fastcall FUN_00479960(undefined4 param_1)

{
  int iVar1;
  int local_10 [2];
  int local_8;
  
  if ((*(char *)(DAT_00791364 + 0x39) != '\0') && (iVar1 = FUN_004f6840(param_1), iVar1 != 0)) {
    return 1;
  }
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0047f950();
    if (iVar1 <= local_8) {
      return 0;
    }
    (**(code **)(*DAT_00791eb8 + 0x27c))(local_8,local_10);
    if (local_10[0] != 0) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

