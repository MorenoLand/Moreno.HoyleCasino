// FUN_0041c0a0  0041c0a0

void __fastcall FUN_0041c0a0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *piVar3;
  undefined4 uVar4;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 local_678;
  int local_674;
  undefined1 local_66c [8];
  char local_664 [16];
  undefined1 local_654 [512];
  int local_454;
  int local_450;
  char local_44c [1028];
  char local_48 [8];
  int local_40;
  short local_3c;
  char local_35;
  undefined4 local_34;
  undefined1 local_30 [16];
  char local_20 [16];
  uint local_10;
  short local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = *(int *)(param_1 + 0x4d0);
  if (local_8 == -1) {
    local_40 = -1;
  }
  else {
    if (local_8 == 4) {
      local_674 = 0;
    }
    else {
      local_674 = (int)*(char *)(param_1 + 0x119 + local_8 * 0x118);
    }
    local_40 = local_674;
  }
  local_c = FUN_00419980(local_8,local_40);
  local_3c = FUN_00419780(4,0,1);
  iVar1 = FUN_004198d0(local_8,local_40);
  local_35 = iVar1 != local_c;
  if (local_3c == 1) {
    local_3c = 0xb;
  }
  if (((local_c < 0x14) && (local_c != 10)) && (local_c != 0xb)) {
    if ((((0x11 < local_c) || (local_c == 8)) || (local_c == 9)) ||
       (((0xb < local_c && (local_c < 0x14)) && ((bool)local_35)))) {
      pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_STRONG");
      strcpy(local_664,pcVar2);
    }
    else if (((local_c == 0x11) || (local_c == 0xc)) || (local_c == 7)) {
      pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_NEUTRAL");
      strcpy(local_664,pcVar2);
    }
    else if (local_c < 7) {
      pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_WEAK");
      strcpy(local_664,pcVar2);
    }
    else if ((local_c < 0xd) || (0x10 < local_c)) {
      FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x5d6);
    }
    else {
      pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_VERYWEAK");
      strcpy(local_664,pcVar2);
    }
  }
  else {
    pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_VERYSTRONG");
    strcpy(local_664,pcVar2);
  }
  if (local_3c < 10) {
    if ((local_3c == 8) || (local_3c == 9)) {
      pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_STRONG");
      strcpy(local_20,pcVar2);
    }
    else if ((local_3c == 7) || (local_3c == 2)) {
      pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_NEUTRAL");
      strcpy(local_20,pcVar2);
    }
    else if ((local_3c == 4) || (local_3c == 3)) {
      pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_WEAK");
      strcpy(local_20,pcVar2);
    }
    else if ((local_3c == 5) || (local_3c == 6)) {
      pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_VERYWEAK");
      strcpy(local_20,pcVar2);
    }
    else {
      FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x5e3);
    }
  }
  else {
    pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_VERYSTRONG");
    strcpy(local_20,pcVar2);
  }
  FUN_0041d3c0(local_30,&local_34);
  FUN_0041c540(local_654,CONCAT22(extraout_var_01,local_c),CONCAT22(extraout_var,local_3c),local_35)
  ;
  piVar3 = (int *)FUN_0041d5a0(local_66c,local_34,CONCAT22(extraout_var_02,local_c),
                               CONCAT22(extraout_var_00,local_3c));
  local_454 = *piVar3 + 0x27;
  local_450 = piVar3[1] + 0x3c;
  if (local_3c == 0xb) {
    pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_A");
    strcpy(local_48,pcVar2);
  }
  else {
    sprintf(local_48,"%hd",(int)local_3c);
  }
  if (local_35 == '\0') {
    local_678 = FUN_00630f40("SID_BLACKJACK_HARD");
  }
  else {
    local_678 = FUN_00630f40("SID_BLACKJACK_SOFT");
  }
  pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_HANDSUMMARY_FORMAT",local_678,(int)local_c,local_664,
                                local_48,local_20,local_30,local_654);
  sprintf(local_44c,pcVar2);
  pcVar2 = local_44c;
  uVar4 = FUN_00630f40("SID_BLACKJACK_STRATEGY",pcVar2);
  FUN_0057be80(1,uVar4,pcVar2);
  FUN_0057c0b0(1,local_34,0x139b,local_454,local_450);
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

