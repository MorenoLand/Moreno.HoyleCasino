// FUN_0047fb00  0047fb00

void __thiscall FUN_0047fb00(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  char *_Format;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_004fb890(param_1);
  if (param_2 != '\0') {
    uVar1 = FUN_004fc290();
    _Format = (char *)FUN_00630f40("SID_POKERTOURNAMENT_GAMESAVED_FORMAT",uVar1);
    sprintf(local_10c,_Format);
    uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_GAMESAVED_TITLE",0);
    FUN_0062ff10(local_10c,uVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

