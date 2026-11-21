// FUN_0064ebc0  0064ebc0

void __fastcall FUN_0064ebc0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *_Format;
  undefined1 local_14c [64];
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(*param_1 + 0x80))();
  if (cVar1 == '\0') {
    uVar2 = FUN_005f3bf0(local_14c);
    (**(code **)(*DAT_0162ee84 + 0x338))(uVar2);
    _Format = (char *)FUN_00630f40("SID_SHELL_GAMEINPROGRESS_FORMAT",local_14c);
    sprintf(local_10c,_Format);
    uVar2 = FUN_00630f40("SID_SHELL_LEAVING",4);
    FUN_0062ff10(local_10c,uVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

