// FUN_005d8710  005d8710

void __fastcall FUN_005d8710(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *_Format;
  uint extraout_EDX;
  ulonglong uVar5;
  undefined1 local_14c [64];
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar5 = (**(code **)(*param_1 + 0x80))();
  uVar2 = (uint)(uVar5 >> 0x20);
  if ((uVar5 & 0xff) == 0) {
    uVar2 = FUN_005da810();
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 0) {
      cVar1 = FUN_005da7b0();
      if ((cVar1 == '\0') || (cVar1 = FUN_00635cb0(0xb), cVar1 != '\0')) {
        uVar3 = FUN_005f3bf0(local_14c);
        (**(code **)(*DAT_0162ee84 + 0x338))(uVar3);
        _Format = (char *)FUN_00630f40("SID_CASINO_GAMEINPROGRESS_MESSAGE_FORMAT",local_14c);
        sprintf(local_10c,_Format);
        uVar3 = FUN_00630f40("SID_CASINO_LEAVING",4);
        FUN_0062ff10(local_10c,uVar3);
        uVar2 = extraout_EDX;
      }
      else {
        uVar3 = FUN_00630f40("SID_CASINO_LEAVING",4);
        uVar3 = FUN_00630f40("SID_CASINO_TOURNAMENTINPROGRESS_MESSAGE",uVar3);
        iVar4 = FUN_0062ff10(uVar3);
        uVar2 = (uint)(iVar4 == 6);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}

