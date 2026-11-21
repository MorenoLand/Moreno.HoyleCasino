// FUN_0041bc50  0041bc50

void FUN_0041bc50(short param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  char *local_5d0;
  char *local_5cc;
  char *local_5c8;
  char *local_5c4;
  char local_5bc [256];
  char local_4bc [1024];
  char local_bc [32];
  char local_9c [16];
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)FUN_00630f40("SID_BLACKJACK_10RICH10POOR");
  strcpy(local_5bc,pcVar1);
  if (param_1 < 2) {
    if (param_1 < -1) {
      if (param_1 < 5) {
        local_5cc = (char *)FUN_00630f40("SID_BLACKJACK_10POOR");
      }
      else {
        local_5cc = (char *)FUN_00630f40("SID_BLACKJACK_VERY10POOR");
      }
      strcpy(local_9c,local_5cc);
      if (param_1 < 5) {
        local_5d0 = (char *)FUN_00630f40("SID_BLACKJACK_CONSERVATIVE");
      }
      else {
        local_5d0 = (char *)FUN_00630f40("SID_BLACKJACK_VERYCONSERVATIVE");
      }
      strcpy(local_bc,local_5d0);
    }
    else {
      pcVar1 = (char *)FUN_00630f40("SID_BLACKJACK_10NEUTRAL");
      strcpy(local_9c,pcVar1);
      pcVar1 = (char *)FUN_00630f40("SID_BLACKJACK_NORMAL");
      strcpy(local_bc,pcVar1);
    }
  }
  else {
    if (param_1 < 5) {
      local_5c4 = (char *)FUN_00630f40("SID_BLACKJACK_10RICH");
    }
    else {
      local_5c4 = (char *)FUN_00630f40("SID_BLACKJACK_VERY10RICH");
    }
    strcpy(local_9c,local_5c4);
    if (param_1 < 5) {
      local_5c8 = (char *)FUN_00630f40("SID_BLACKJACK_AGGRESSIVE");
    }
    else {
      local_5c8 = (char *)FUN_00630f40("SID_BLACKJACK_VERYAGGRESSIVE");
    }
    strcpy(local_bc,local_5c8);
  }
  pcVar1 = (char *)FUN_00630f40("SID_BLACKJACK_CURRENTDECK_FORMAT",local_9c,local_bc,(int)param_1);
  sprintf(local_8c,pcVar1);
  if (param_1 < 2) {
    if (param_1 < -1) {
      pcVar1 = (char *)FUN_00630f40("SID_BLACKJACK_ABOUT10POOR",local_5bc,local_8c);
      sprintf(local_4bc,pcVar1);
    }
    else {
      pcVar1 = (char *)FUN_00630f40("SID_BLACKJACK_ABOUT10NEUTRAL",local_5bc,local_8c);
      sprintf(local_4bc,pcVar1);
    }
  }
  else {
    pcVar1 = (char *)FUN_00630f40("SID_BLACKJACK_ABOUT10RICH",local_5bc,local_8c);
    sprintf(local_4bc,pcVar1);
  }
  pcVar1 = local_4bc;
  uVar2 = FUN_00630f40("SID_BLACKJACK_STRATEGY",pcVar1);
  FUN_0057be80(1,uVar2,pcVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

