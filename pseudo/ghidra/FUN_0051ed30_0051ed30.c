// FUN_0051ed30  0051ed30

void __fastcall FUN_0051ed30(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_114;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_005f83d0(0x30d4f2,0);
  FUN_005f89d0(0x14);
  pcVar1 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_ENDOFROUND_FORMAT",
                                *(undefined4 *)(param_1 + 0x1bc));
  sprintf(local_10c,pcVar1);
  FUN_005fa5b0(0,0,local_10c,0x49,0x14c,0x19,5,3,2,0x30,0xffffffff);
  uVar7 = 0xd;
  uVar6 = 0xffffffff;
  uVar5 = 0x4a;
  uVar4 = 0x4b;
  uVar3 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4e5,0x80,0xdc,2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  if (*(int *)(param_1 + 0x1bc) == 1) {
    pcVar1 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_3PLAYERSADVANCE_COLON");
    strcpy(local_10c,pcVar1);
  }
  else if (*(int *)(param_1 + 0x1bc) == 2) {
    pcVar1 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_2PLAYERSADVANCE_COLON");
    strcpy(local_10c,pcVar1);
  }
  FUN_005fa5b0(0,1,local_10c,0x1f,0x122,0x14,0x14,0x32,1,1,0xffffffff);
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    if (*(int *)(param_1 + 0x1c4) == -1) {
      if (*(int *)(param_1 + 0x1bc) == 1) {
        local_114 = FUN_00630f40("SID_POKERTOURNAMENT_THREE");
      }
      else {
        local_114 = FUN_00630f40("SID_POKERTOURNAMENT_TWO");
      }
      pcVar1 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_NOT_IN_TOP_FORMAT",param_1 + 0x1c8,
                                    local_114);
      sprintf(local_10c,pcVar1);
      FUN_005fa5b0(0,2,local_10c,0x1f,0x10e,0x14,0x14,0xa5,1,1,0xffffffff);
    }
    else {
      pcVar1 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_ELIMINATED_AT_HAND_FORMAT",param_1 + 0x1c8,
                                    *(undefined4 *)(param_1 + 0x1c4));
      sprintf(local_10c,pcVar1);
      FUN_005fa5b0(0,2,local_10c,0x1f,0x122,0x14,0x14,0xa5,1,1,0xffffffff);
    }
    pcVar1 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_ANDDOESNOTADVANCE");
    strcpy(local_10c,pcVar1);
    FUN_005fa5b0(0,3,local_10c,0x1f,0x122,0x14,0x14,0xb9,1,1,0xffffffff);
  }
  FUN_0051f000();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

