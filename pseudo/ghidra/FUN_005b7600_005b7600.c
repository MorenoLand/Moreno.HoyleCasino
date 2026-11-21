// FUN_005b7600  005b7600

void FUN_005b7600(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_674;
  undefined1 local_66c [8];
  char local_664 [16];
  undefined1 local_654 [512];
  int local_454;
  int local_450;
  char local_44c [1028];
  char local_48 [8];
  undefined4 local_40;
  short local_3c;
  char local_35;
  undefined4 local_34;
  undefined1 local_30 [16];
  char local_20 [16];
  uint local_10;
  undefined4 local_c;
  short local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_c = FUN_005b4f00();
  local_40 = FUN_005b4e50(local_c);
  local_8 = FUN_005b4f50(local_c,local_40);
  local_3c = FUN_005b5f60(4,0,1);
  iVar1 = FUN_005b5260(local_c,local_40);
  iVar2 = FUN_005b5040(local_c,local_40);
  local_35 = iVar1 != iVar2;
  if (local_3c == 1) {
    local_3c = 0xb;
  }
  if (((local_8 < 0x14) && (local_8 != 10)) && (local_8 != 0xb)) {
    if ((((0x11 < local_8) || (local_8 == 8)) || (local_8 == 9)) ||
       (((0xb < local_8 && (local_8 < 0x14)) && ((bool)local_35)))) {
      pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_STRONG");
      strcpy(local_664,pcVar3);
    }
    else if (((local_8 == 0x11) || (local_8 == 0xc)) || (local_8 == 7)) {
      pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_NEUTRAL");
      strcpy(local_664,pcVar3);
    }
    else if (local_8 < 7) {
      pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_WEAK");
      strcpy(local_664,pcVar3);
    }
    else if ((local_8 < 0xd) || (0x10 < local_8)) {
      FUN_005e9f20("false","..\\Casino\\royalmatchstate.cpp",0x7f3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_VERYWEAK");
      strcpy(local_664,pcVar3);
    }
  }
  else {
    pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_VERYSTRONG");
    strcpy(local_664,pcVar3);
  }
  if (local_3c < 10) {
    if ((local_3c == 8) || (local_3c == 9)) {
      pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_STRONG");
      strcpy(local_20,pcVar3);
    }
    else if ((local_3c == 7) || (local_3c == 2)) {
      pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_NEUTRAL");
      strcpy(local_20,pcVar3);
    }
    else if ((local_3c == 4) || (local_3c == 3)) {
      pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_WEAK");
      strcpy(local_20,pcVar3);
    }
    else if ((local_3c == 5) || (local_3c == 6)) {
      pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_VERYWEAK");
      strcpy(local_20,pcVar3);
    }
    else {
      FUN_005e9f20("false","..\\Casino\\royalmatchstate.cpp",0x80c);
    }
  }
  else {
    pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_VERYSTRONG");
    strcpy(local_20,pcVar3);
  }
  FUN_005b5db0(local_30,&local_34);
  FUN_005b40a0(local_654,(int)local_8,(int)local_3c,local_35);
  piVar4 = (int *)FUN_005b59a0(local_66c,local_34,(int)local_8,(int)local_3c);
  local_454 = *piVar4 + 0x27;
  local_450 = piVar4[1] + 0x3c;
  if (local_3c == 0xb) {
    pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_A");
    strcpy(local_48,pcVar3);
  }
  else {
    sprintf(local_48,"%hd",(int)local_3c);
  }
  if (local_35 == '\0') {
    local_674 = FUN_00630f40("SID_ROYALMATCH_HARD");
  }
  else {
    local_674 = FUN_00630f40("SID_ROYALMATCH_SOFT");
  }
  pcVar3 = (char *)FUN_00630f40("SID_ROYALMATCH_HANDSUMMARY_FORMAT",local_674,(int)local_8,local_664
                                ,local_48,local_20,local_30,local_654);
  sprintf(local_44c,pcVar3);
  pcVar3 = local_44c;
  uVar5 = FUN_00630f40("SID_ROYALMATCH_STRATEGY",pcVar3);
  FUN_0057be80(1,uVar5,pcVar3);
  FUN_0057c0b0(1,local_34,0x139b,local_454,local_450);
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

