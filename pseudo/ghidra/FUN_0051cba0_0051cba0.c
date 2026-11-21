// FUN_0051cba0  0051cba0

void __fastcall FUN_0051cba0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int local_40;
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(DAT_00791364 + 0xfc);
  local_40 = 0;
  if (iVar1 == 1) {
    local_40 = 0xe;
  }
  else if (iVar1 == 2) {
    local_40 = 0x1c;
  }
  if (local_40 == 0) {
    uVar2 = FUN_00480ee0(param_1);
    pcVar3 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_STATUS_ROUND3_FORMAT",iVar1,uVar2);
    sprintf(local_3c,pcVar3);
  }
  else {
    uVar2 = FUN_00480ee0(local_40);
    pcVar3 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_STATUS_FORMAT",iVar1,uVar2);
    sprintf(local_3c,pcVar3);
  }
  FUN_0051cc60(local_3c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

