// FUN_0054ad80  0054ad80

void __fastcall FUN_0054ad80(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *piVar3;
  undefined4 uVar4;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 local_66c;
  undefined1 local_664 [8];
  char local_65c [16];
  undefined1 local_64c [512];
  int local_44c;
  int local_448;
  char local_444 [1028];
  char local_40 [8];
  short local_38;
  char local_31;
  undefined4 local_30;
  undefined1 local_2c [16];
  char local_1c [16];
  uint local_c;
  short local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = FUN_00549e80(*(undefined4 *)(param_1 + 0x20),1);
  iVar1 = FUN_00549fa0(*(undefined4 *)(param_1 + 0x20));
  local_31 = iVar1 != local_8;
  local_38 = FUN_00641280(CONCAT22(local_8 >> 0xf,*(undefined2 *)(param_1 + 0x2a)));
  if (local_38 == 0xe) {
    local_38 = 0xb;
  }
  else {
    local_38 = FUN_0054a0c0(0,1);
  }
  if (((local_8 < 0x14) && (local_8 != 10)) && (local_8 != 0xb)) {
    if ((((local_8 < 0x12) && (local_8 != 8)) && (local_8 != 9)) &&
       (((local_8 < 0xc || (0x13 < local_8)) || (local_31 == '\0')))) {
      if (((local_8 == 0x11) || (local_8 == 0xc)) || (local_8 == 7)) {
        pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_NEUTRAL");
        strcpy(local_65c,pcVar2);
      }
      else if (local_8 < 7) {
        pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_WEAK");
        strcpy(local_65c,pcVar2);
      }
      else if ((local_8 < 0xd) || (0x10 < local_8)) {
        FUN_005e9f20("false","..\\Casino\\videoblackjackstate.cpp",0x510);
      }
      else {
        pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_VERYWEAK");
        strcpy(local_65c,pcVar2);
      }
    }
    else {
      pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_STRONG");
      strcpy(local_65c,pcVar2);
    }
  }
  else {
    pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_VERYSTRONG");
    strcpy(local_65c,pcVar2);
  }
  if (local_38 < 10) {
    if ((local_38 == 8) || (local_38 == 9)) {
      pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_STRONG");
      strcpy(local_1c,pcVar2);
    }
    else if ((local_38 == 7) || (local_38 == 2)) {
      pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_NEUTRAL");
      strcpy(local_1c,pcVar2);
    }
    else if ((local_38 == 4) || (local_38 == 3)) {
      pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_WEAK");
      strcpy(local_1c,pcVar2);
    }
    else if ((local_38 == 5) || (local_38 == 6)) {
      pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_VERYWEAK");
      strcpy(local_1c,pcVar2);
    }
    else {
      FUN_005e9f20("false","..\\Casino\\videoblackjackstate.cpp",0x51d);
    }
  }
  else {
    pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_VERYSTRONG");
    strcpy(local_1c,pcVar2);
  }
  FUN_0054c000(local_2c,&local_30);
  FUN_0054b1e0(local_64c,CONCAT22(extraout_var,local_8),CONCAT22(extraout_var_01,local_38),local_31)
  ;
  piVar3 = (int *)FUN_0054c170(local_664,local_30,CONCAT22(extraout_var_00,local_8),
                               CONCAT22(extraout_var_02,local_38));
  local_44c = *piVar3 + 0x27;
  local_448 = piVar3[1] + 0x3c;
  if (local_38 == 0xb) {
    pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_A");
    strcpy(local_40,pcVar2);
  }
  else {
    sprintf(local_40,"%hd",(int)local_38);
  }
  if (local_31 == '\0') {
    local_66c = FUN_00630f40("SID_VBLACKJACK_HARD");
  }
  else {
    local_66c = FUN_00630f40("SID_VBLACKJACK_SOFT");
  }
  pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_HANDSUMMARY_FORMAT",local_66c,(int)local_8,local_65c
                                ,local_40,local_1c,local_2c,local_64c);
  sprintf(local_444,pcVar2);
  pcVar2 = local_444;
  uVar4 = FUN_00630f40("SID_VBLACKJACK_STRATEGY",pcVar2);
  FUN_0057be80(1,uVar4,pcVar2);
  FUN_0057c0b0(1,local_30,0x139b,local_44c,local_448);
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

