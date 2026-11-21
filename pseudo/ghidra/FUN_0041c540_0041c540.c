// FUN_0041c540  0041c540

void __thiscall
FUN_0041c540(int param_1,char *param_2,undefined2 param_3,short param_4,char param_5)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  int local_1c;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 0x4d0);
  if (iVar1 == -1) {
    local_14 = -1;
  }
  else {
    if (iVar1 == 4) {
      local_1c = 0;
    }
    else {
      local_1c = (int)*(char *)(param_1 + 0x119 + iVar1 * 0x118);
    }
    local_14 = local_1c;
  }
  cVar2 = FUN_0041ade0(iVar1,local_14);
  cVar3 = FUN_0041a960(iVar1);
  cVar4 = FUN_0041aec0(iVar1);
  switch(param_3) {
  case 4:
    if (cVar2 == '\0') {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else if (param_4 < 8) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION4_DEALERWEAK");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION4_DEALERSTRONG");
      strcpy(param_2,pcVar5);
    }
    break;
  case 5:
    pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
    strcpy(param_2,pcVar5);
    break;
  case 6:
    if (cVar2 == '\0') {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else if (param_4 < 8) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION6_DEALERWEAK");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION6_DEALERSTRONG");
      strcpy(param_2,pcVar5);
    }
    break;
  case 7:
    pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
    strcpy(param_2,pcVar5);
    break;
  case 8:
    if (cVar2 == '\0') {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else if (param_4 < 5) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION8_DEALERWEAK");
      strcpy(param_2,pcVar5);
    }
    else if (param_4 < 7) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION8_DEALERVERYWEAK");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION8_DEALERSTRONG");
      strcpy(param_2,pcVar5);
    }
    break;
  case 9:
    if (((cVar3 == '\0') || (param_4 < 3)) || (6 < param_4)) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION9_DEALERWEAK");
      strcpy(param_2,pcVar5);
    }
    break;
  case 10:
    if (cVar2 == '\0') {
      if (cVar3 == '\0') {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
        strcpy(param_2,pcVar5);
      }
      else if (param_4 < 10) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION10_STRONGHAND");
        strcpy(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION10_DEALERVERYSTRONG");
        strcpy(param_2,pcVar5);
      }
    }
    else if (param_4 < 10) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION10_DOUBLE");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION10_DEALERSTRONG");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0xb:
    if (cVar3 == '\0') {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else if (param_4 < 0xb) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION11_STRONGHAND");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION11_DEALERSTRONG");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0xc:
    if (param_5 == '\0') {
      if (cVar2 == '\0') {
        if (param_4 < 4) {
          pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION12_DEALERSTRONG_TAKEHIT_TRUECOUNTHIGH")
          ;
          strcpy(param_2,pcVar5);
        }
        else if (param_4 < 7) {
          pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION12_DEALERWEAK_FORMAT",param_4 + 10);
          sprintf(param_2,pcVar5);
        }
        else if (param_4 < 0xb) {
          pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION12_DEALERSTRONG_FORMAT",param_4 + 10);
          sprintf(param_2,pcVar5);
        }
        else {
          pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION12_DEALERVERYSTRONG");
          strcpy(param_2,pcVar5);
        }
      }
      else if (param_4 < 7) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION12_DEALERWEAK");
        strcpy(param_2,pcVar5);
      }
      else if (param_4 < 0xb) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION12_DEALERSTRONG_DONTSPLIT_FORMAT",
                                      param_4 + 10);
        sprintf(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION12_DEALERVERYSTRONG_DONTSPLIT");
        strcpy(param_2,pcVar5);
      }
    }
    else if (cVar2 == '\0') {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION12_SPLITACES");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0xd:
    if (param_5 == '\0') {
      if (param_4 < 4) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION13_DEALERWEAK_TRUECOUNTLOW_FORMAT",
                                      param_4 + 10);
        sprintf(param_2,pcVar5);
      }
      else if (param_4 < 7) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION13_DEALERWEAK_FORMAT",param_4 + 10);
        sprintf(param_2,pcVar5);
      }
      else if (param_4 < 0xb) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_DEALERSTRONG_FORMAT",param_4 + 10);
        sprintf(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_DEALERVERYSTRONG");
        strcpy(param_2,pcVar5);
      }
    }
    else if (((cVar3 == '\0') || (param_4 != 5)) && (param_4 != 6)) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION13_DEALERWEAK_DOUBLEORHIT");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0xe:
    if (param_5 == '\0') {
      if (cVar2 == '\0') {
        if (param_4 < 7) {
          pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION14_DEALERWEAK_DONTHIT_FORMAT",
                                        param_4 + 10);
          sprintf(param_2,pcVar5);
        }
        else if (param_4 < 0xb) {
          pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION14_DEALERSTRONG_HIT_FORMAT",
                                        param_4 + 10);
          sprintf(param_2,pcVar5);
        }
        else {
          pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION14_DEALERVERYSTRONG_HIT");
          strcpy(param_2,pcVar5);
        }
      }
      else if (param_4 < 8) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION14_DEALERWEAK_SPLIT7");
        strcpy(param_2,pcVar5);
      }
      else if (param_4 < 0xb) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION14_DEALERSTRONG_DONTSPLIT7_FORMAT",
                                      param_4 + 10);
        sprintf(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION14_DEALERVERYSTRONG_DONTSPLIT7");
        strcpy(param_2,pcVar5);
      }
    }
    else if (((cVar3 == '\0') || (param_4 != 5)) && (param_4 != 6)) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION14_DEALERWEAK_DOUBLEORHIT");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0xf:
    if (param_5 == '\0') {
      if (param_4 < 7) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION15_DEALERWEAK_DONTHIT_FORMAT",
                                      param_4 + 10);
        sprintf(param_2,pcVar5);
      }
      else if ((param_4 == 10) && (cVar4 != '\0')) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION15_DEALERSTRONG_SURRENDERHALF");
        strcpy(param_2,pcVar5);
      }
      else if (param_4 < 0xb) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION15_DEALERSTRONG_HIT_FORMAT",param_4 + 10)
        ;
        sprintf(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION15_DEALERVERYSTRONG_HIT");
        strcpy(param_2,pcVar5);
      }
    }
    else if (param_4 < 4) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else if (param_4 < 7) {
      if (cVar3 == '\0') {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
        strcpy(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION15_DEALERVERYWEAK_DOUBLEORHIT");
        strcpy(param_2,pcVar5);
      }
    }
    else if (cVar3 == '\0') {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING_DONTDOUBLE");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0x10:
    if (param_5 == '\0') {
      if (cVar2 == '\0') {
        if (param_4 < 7) {
          pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION16_DEALERWEAK_DONTHIT_FORMAT",
                                        param_4 + 10);
          sprintf(param_2,pcVar5);
        }
        else if ((param_4 < 9) || (cVar4 == '\0')) {
          if (param_4 < 10) {
            pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION16_DEALERSTRONG_HIT_FORMAT",
                                          param_4 + 10);
            sprintf(param_2,pcVar5);
          }
          else if (param_4 == 10) {
            pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION16_DEALERVERYSTRONG_MORE",0x14);
            sprintf(param_2,pcVar5);
          }
          else {
            pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION16_DEALERVERYSTRONG_HIT");
            strcpy(param_2,pcVar5);
          }
        }
        else {
          pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION16_DEALERSTRONG_SURRENDERHALF");
          strcpy(param_2,pcVar5);
        }
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION16_AVOIDHAND");
        strcpy(param_2,pcVar5);
      }
    }
    else if (param_4 < 4) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else if (param_4 < 7) {
      if (cVar3 == '\0') {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
        strcpy(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION16_DEALERVERYWEAK_DOUBLEORHIT");
        strcpy(param_2,pcVar5);
      }
    }
    else if (cVar3 == '\0') {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_NORISKOFBUSTING_DONTDOUBLE");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0x11:
    if (param_5 == '\0') {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_GOODHAND_STAND");
      strcpy(param_2,pcVar5);
    }
    else if (param_4 == 2) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION17_HIT");
      strcpy(param_2,pcVar5);
    }
    else if (param_4 < 7) {
      if (cVar3 == '\0') {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION17_HIT");
        strcpy(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION17_DEALERWEAK_DOUBLEORHIT");
        strcpy(param_2,pcVar5);
      }
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION17_DEALERSTRONG");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0x12:
    if (param_5 == '\0') {
      if (cVar2 == '\0') {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_GOODHAND_STAND");
        strcpy(param_2,pcVar5);
      }
      else if (param_4 < 7) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_DEALERWEAK_SPLIT");
        strcpy(param_2,pcVar5);
      }
      else if (param_4 == 7) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_DEALERWEAK_DONTSPLIT");
        strcpy(param_2,pcVar5);
      }
      else if (param_4 == 8) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_SPLIT9SFOR10S_ELSEPUSH");
        strcpy(param_2,pcVar5);
      }
      else if (param_4 == 9) {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_SPLIT9SFOR10S_ELSELOSS");
        strcpy(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_DEALERVERYSTONG_STAND");
        strcpy(param_2,pcVar5);
      }
    }
    else if (param_4 == 2) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_DONTHIT");
      strcpy(param_2,pcVar5);
    }
    else if (param_4 < 7) {
      if (cVar3 == '\0') {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_DEALERWEAK_DONTHIT");
        strcpy(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_DEALERWEAK_DOUBLEORSTAND");
        strcpy(param_2,pcVar5);
      }
    }
    else if (param_4 < 9) {
      if (cVar3 == '\0') {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_SOFT_FORMAT",param_4 + 10);
        sprintf(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_SOFT_DONTDOUBLE_FORMAT",param_4 + 10);
        sprintf(param_2,pcVar5);
      }
    }
    else if (param_4 < 0xb) {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_ONEHIT_FORMAT",param_4 + 10);
      sprintf(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION18_ONEHIT");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0x13:
    if (param_5 == '\0') {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_GOODHAND_STAND");
      strcpy(param_2,pcVar5);
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION19_DONTHIT");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0x14:
    if (param_5 == '\0') {
      if (cVar2 == '\0') {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_GOODHAND_STAND");
        strcpy(param_2,pcVar5);
      }
      else {
        pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION20_DONTSPLIT");
        strcpy(param_2,pcVar5);
      }
    }
    else {
      pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION20_DONTHIT");
      strcpy(param_2,pcVar5);
    }
    break;
  case 0x15:
    pcVar5 = (char *)FUN_00630f40("SID_BLACKJACK_ACTION21");
    strcpy(param_2,pcVar5);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x711);
  }
  return;
}

