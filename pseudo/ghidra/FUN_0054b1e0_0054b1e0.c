// FUN_0054b1e0  0054b1e0

/* WARNING: Removing unreachable block (ram,0x0054b9e9) */
/* WARNING: Removing unreachable block (ram,0x0054bb7b) */

void FUN_0054b1e0(char *param_1,short param_2,short param_3,char param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  
  cVar1 = FUN_00549ad0();
  uVar4 = extraout_var;
  cVar2 = FUN_005497a0();
  switch(param_2 + -4) {
  case 0:
    if (cVar1 == '\0') {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else if (param_3 < 8) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION4_DEALERWEAK");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION4_DEALERSTRONG");
      strcpy(param_1,pcVar3);
    }
    break;
  case 1:
    pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
    strcpy(param_1,pcVar3);
    break;
  case 2:
    if (cVar1 == '\0') {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else if (param_3 < 8) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION6_DEALERWEAK");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION6_DEALERSTRONG");
      strcpy(param_1,pcVar3);
    }
    break;
  case 3:
    pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
    strcpy(param_1,pcVar3);
    break;
  case 4:
    if (cVar1 == '\0') {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else if (param_3 < 5) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION8_DEALERWEAK");
      strcpy(param_1,pcVar3);
    }
    else if (param_3 < 7) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION8_DEALERVERYWEAK");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION8_DEALERSTRONG");
      strcpy(param_1,pcVar3);
    }
    break;
  case 5:
    if (((cVar2 == '\0') || (param_3 < 3)) || (6 < param_3)) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION9_DEALERWEAK");
      strcpy(param_1,pcVar3);
    }
    break;
  case 6:
    if (cVar1 == '\0') {
      if (cVar2 == '\0') {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
        strcpy(param_1,pcVar3);
      }
      else if (param_3 < 10) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION10_STRONGHAND");
        strcpy(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION10_DEALERVERYSTRONG");
        strcpy(param_1,pcVar3);
      }
    }
    else if (param_3 < 10) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION10_DOUBLE");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION10_DEALERSTRONG");
      strcpy(param_1,pcVar3);
    }
    break;
  case 7:
    if (cVar2 == '\0') {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else if (param_3 < 0xb) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION11_STRONGHAND");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION11_DEALERSTRONG");
      strcpy(param_1,pcVar3);
    }
    break;
  case 8:
    if (param_4 == '\0') {
      if (cVar1 == '\0') {
        if (param_3 < 4) {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION12_DEALERSTRONG_TAKEHIT_TRUECOUNTHIGH"
                                       );
          strcpy(param_1,pcVar3);
        }
        else if (param_3 < 7) {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION12_DEALERWEAK_FORMAT",param_3 + 10);
          sprintf(param_1,pcVar3);
        }
        else if (param_3 < 0xb) {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION12_DEALERSTRONG_FORMAT",param_3 + 10);
          sprintf(param_1,pcVar3);
        }
        else {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION12_DEALERVERYSTRONG");
          strcpy(param_1,pcVar3);
        }
      }
      else if (param_3 < 7) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION12_DEALERWEAK");
        strcpy(param_1,pcVar3);
      }
      else if (param_3 < 0xb) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION12_DEALERSTRONG_DONTSPLIT_FORMAT",
                                      param_3 + 10);
        sprintf(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION12_DEALERVERYSTRONG_DONTSPLIT");
        strcpy(param_1,pcVar3);
      }
    }
    else if (cVar1 == '\0') {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION12_SPLITACES");
      strcpy(param_1,pcVar3);
    }
    break;
  case 9:
    if (param_4 == '\0') {
      if (param_3 < 4) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION13_DEALERWEAK_TRUECOUNTLOW_FORMAT",
                                      param_3 + 10);
        sprintf(param_1,pcVar3);
      }
      else if (param_3 < 7) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION13_DEALERWEAK_FORMAT",param_3 + 10);
        sprintf(param_1,pcVar3);
      }
      else if (param_3 < 0xb) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_DEALERSTRONG_FORMAT",param_3 + 10);
        sprintf(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_DEALERVERYSTRONG");
        strcpy(param_1,pcVar3);
      }
    }
    else if (((cVar2 == '\0') || (param_3 != 5)) && (param_3 != 6)) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION13_DEALERWEAK_DOUBLEORHIT");
      strcpy(param_1,pcVar3);
    }
    break;
  case 10:
    if (param_4 == '\0') {
      if (cVar1 == '\0') {
        if (param_3 < 7) {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION14_DEALERWEAK_DONTHIT_FORMAT",
                                        param_3 + 10);
          sprintf(param_1,pcVar3);
        }
        else if (param_3 < 0xb) {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION14_DEALERSTRONG_HIT_FORMAT",
                                        param_3 + 10);
          sprintf(param_1,pcVar3);
        }
        else {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION14_DEALERVERYSTRONG_HIT");
          strcpy(param_1,pcVar3);
        }
      }
      else if (param_3 < 8) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION14_DEALERWEAK_SPLIT7");
        strcpy(param_1,pcVar3);
      }
      else if (param_3 < 0xb) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION14_DEALERSTRONG_DONTSPLIT7_FORMAT",
                                      param_3 + 10);
        sprintf(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION14_DEALERVERYSTRONG_DONTSPLIT7");
        strcpy(param_1,pcVar3);
      }
    }
    else if (((cVar2 == '\0') || (param_3 != 5)) && (param_3 != 6)) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION14_DEALERWEAK_DOUBLEORHIT");
      strcpy(param_1,pcVar3);
    }
    break;
  case 0xb:
    if (param_4 == '\0') {
      if (param_3 < 7) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION15_DEALERWEAK_DONTHIT_FORMAT",
                                      param_3 + 10);
        sprintf(param_1,pcVar3);
      }
      else if (param_3 < 0xb) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION15_DEALERSTRONG_HIT_FORMAT",param_3 + 10
                                     );
        sprintf(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION15_DEALERVERYSTRONG_HIT");
        strcpy(param_1,pcVar3);
      }
    }
    else if (param_3 < 4) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else if (param_3 < 7) {
      if (cVar2 == '\0') {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
        strcpy(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION15_DEALERVERYWEAK_DOUBLEORHIT");
        strcpy(param_1,pcVar3);
      }
    }
    else if (cVar2 == '\0') {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING_DONTDOUBLE");
      strcpy(param_1,pcVar3);
    }
    break;
  case 0xc:
    if (param_4 == '\0') {
      if (cVar1 == '\0') {
        if (param_3 < 7) {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION16_DEALERWEAK_DONTHIT_FORMAT",
                                        param_3 + 10);
          sprintf(param_1,pcVar3);
        }
        else if (param_3 < 10) {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION16_DEALERSTRONG_HIT_FORMAT",
                                        param_3 + 10);
          sprintf(param_1,pcVar3);
        }
        else if (param_3 == 10) {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION16_DEALERVERYSTRONG_MORE",0x14);
          sprintf(param_1,pcVar3);
        }
        else {
          pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION16_DEALERVERYSTRONG_HIT");
          strcpy(param_1,pcVar3);
        }
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION16_AVOIDHAND");
        strcpy(param_1,pcVar3);
      }
    }
    else if (param_3 < 4) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else if (param_3 < 7) {
      if (cVar2 == '\0') {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
        strcpy(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION16_DEALERVERYWEAK_DOUBLEORHIT");
        strcpy(param_1,pcVar3);
      }
    }
    else if (cVar2 == '\0') {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_NORISKOFBUSTING_DONTDOUBLE");
      strcpy(param_1,pcVar3);
    }
    break;
  case 0xd:
    if (param_4 == '\0') {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_GOODHAND_STAND");
      strcpy(param_1,pcVar3);
    }
    else if (param_3 == 2) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION17_HIT");
      strcpy(param_1,pcVar3);
    }
    else if (param_3 < 7) {
      if (cVar2 == '\0') {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION17_HIT");
        strcpy(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION17_DEALERWEAK_DOUBLEORHIT");
        strcpy(param_1,pcVar3);
      }
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION17_DEALERSTRONG");
      strcpy(param_1,pcVar3);
    }
    break;
  case 0xe:
    if (param_4 == '\0') {
      if (cVar1 == '\0') {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_GOODHAND_STAND");
        strcpy(param_1,pcVar3);
      }
      else if (param_3 < 7) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_DEALERWEAK_SPLIT");
        strcpy(param_1,pcVar3);
      }
      else if (param_3 == 7) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_DEALERWEAK_DONTSPLIT");
        strcpy(param_1,pcVar3);
      }
      else if (param_3 == 8) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_SPLIT9SFOR10S_ELSEPUSH");
        strcpy(param_1,pcVar3);
      }
      else if (param_3 == 9) {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_SPLIT9SFOR10S_ELSELOSS");
        strcpy(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_DEALERVERYSTONG_STAND");
        strcpy(param_1,pcVar3);
      }
    }
    else if (param_3 == 2) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_DONTHIT");
      strcpy(param_1,pcVar3);
    }
    else if (param_3 < 7) {
      if (cVar2 == '\0') {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_DEALERWEAK_DONTHIT");
        strcpy(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_DEALERWEAK_DOUBLEORSTAND");
        strcpy(param_1,pcVar3);
      }
    }
    else if (param_3 < 9) {
      if (cVar2 == '\0') {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_SOFT_FORMAT",param_3 + 10);
        sprintf(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_SOFT_DONTDOUBLE_FORMAT",param_3 + 10)
        ;
        sprintf(param_1,pcVar3);
      }
    }
    else if (param_3 < 0xb) {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_ONEHIT_FORMAT",param_3 + 10);
      sprintf(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION18_ONEHIT");
      strcpy(param_1,pcVar3);
    }
    break;
  case 0xf:
    if (param_4 == '\0') {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_GOODHAND_STAND");
      strcpy(param_1,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION19_DONTHIT");
      strcpy(param_1,pcVar3);
    }
    break;
  case 0x10:
    if (param_4 == '\0') {
      if (cVar1 == '\0') {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_GOODHAND_STAND");
        strcpy(param_1,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION20_DONTSPLIT");
        strcpy(param_1,pcVar3);
      }
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION20_DONTHIT");
      strcpy(param_1,pcVar3);
    }
    break;
  case 0x11:
    pcVar3 = (char *)FUN_00630f40("SID_VBLACKJACK_ACTION21");
    strcpy(param_1,pcVar3);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\videoblackjackstate.cpp",0x64b,param_2 + -4,uVar4);
  }
  return;
}

