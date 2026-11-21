// FUN_005b40a0  005b40a0

void FUN_005b40a0(char *param_1,undefined4 param_2,int param_3,char param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  uVar4 = FUN_005b4f00();
  uVar5 = FUN_005b4e50(uVar4);
  cVar1 = FUN_005b3710(uVar4,uVar5);
  cVar2 = FUN_005b3430(uVar4);
  cVar3 = FUN_005b37f0(uVar4);
  switch(param_2) {
  case 4:
    if (cVar1 == '\0') {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else if (param_3 < 8) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION4_DEALERWEAK");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION4_DEALERSTRONG");
      strcpy(param_1,pcVar6);
    }
    break;
  case 5:
    pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
    strcpy(param_1,pcVar6);
    break;
  case 6:
    if (cVar1 == '\0') {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else if (param_3 < 8) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION6_DEALERWEAK");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION6_DEALERSTRONG");
      strcpy(param_1,pcVar6);
    }
    break;
  case 7:
    pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
    strcpy(param_1,pcVar6);
    break;
  case 8:
    if (cVar1 == '\0') {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else if (param_3 < 5) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION8_DEALERWEAK");
      strcpy(param_1,pcVar6);
    }
    else if (param_3 < 7) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION8_DEALERVERYWEAK");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION8_DEALERSTRONG");
      strcpy(param_1,pcVar6);
    }
    break;
  case 9:
    if (((cVar2 == '\0') || (param_3 < 3)) || (6 < param_3)) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION9_DEALERWEAK");
      strcpy(param_1,pcVar6);
    }
    break;
  case 10:
    if (cVar1 == '\0') {
      if (cVar2 == '\0') {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
        strcpy(param_1,pcVar6);
      }
      else if (param_3 < 10) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION10_STRONGHAND");
        strcpy(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION10_DEALERVERYSTRONG");
        strcpy(param_1,pcVar6);
      }
    }
    else if (param_3 < 10) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION10_DOUBLE");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION10_DEALERSTRONG");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0xb:
    if (cVar2 == '\0') {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else if (param_3 < 0xb) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION11_STRONGHAND");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION11_DEALERSTRONG");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0xc:
    if (param_4 == '\0') {
      if (cVar1 == '\0') {
        if (param_3 < 4) {
          pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION12_DEALERSTRONG_TAKEHIT_TRUECOUNTHIGH"
                                       );
          strcpy(param_1,pcVar6);
        }
        else if (param_3 < 7) {
          pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION12_DEALERWEAK_FORMAT",param_3 + 10);
          sprintf(param_1,pcVar6);
        }
        else if (param_3 < 0xb) {
          pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION12_DEALERSTRONG_FORMAT",param_3 + 10);
          sprintf(param_1,pcVar6);
        }
        else {
          pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION12_DEALERVERYSTRONG");
          strcpy(param_1,pcVar6);
        }
      }
      else if (param_3 < 7) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION12_DEALERWEAK");
        strcpy(param_1,pcVar6);
      }
      else if (param_3 < 0xb) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION12_DEALERSTRONG_DONTSPLIT_FORMAT",
                                      param_3 + 10);
        sprintf(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION12_DEALERVERYSTRONG_DONTSPLIT");
        strcpy(param_1,pcVar6);
      }
    }
    else if (cVar1 == '\0') {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION12_SPLITACES");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0xd:
    if (param_4 == '\0') {
      if (param_3 < 4) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION13_DEALERWEAK_TRUECOUNTLOW_FORMAT",
                                      param_3 + 10);
        sprintf(param_1,pcVar6);
      }
      else if (param_3 < 7) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION13_DEALERWEAK_FORMAT",param_3 + 10);
        sprintf(param_1,pcVar6);
      }
      else if (param_3 < 0xb) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_DEALERSTRONG_FORMAT",param_3 + 10);
        sprintf(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_DEALERVERYSTRONG");
        strcpy(param_1,pcVar6);
      }
    }
    else if (((cVar2 == '\0') || (param_3 != 5)) && (param_3 != 6)) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION13_DEALERWEAK_DOUBLEORHIT");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0xe:
    if (param_4 == '\0') {
      if (cVar1 == '\0') {
        if (param_3 < 7) {
          pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION14_DEALERWEAK_DONTHIT_FORMAT",
                                        param_3 + 10);
          sprintf(param_1,pcVar6);
        }
        else if (param_3 < 0xb) {
          pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION14_DEALERSTRONG_HIT_FORMAT",
                                        param_3 + 10);
          sprintf(param_1,pcVar6);
        }
        else {
          pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION14_DEALERVERYSTRONG_HIT");
          strcpy(param_1,pcVar6);
        }
      }
      else if (param_3 < 8) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION14_DEALERWEAK_SPLIT7");
        strcpy(param_1,pcVar6);
      }
      else if (param_3 < 0xb) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION14_DEALERSTRONG_DONTSPLIT7_FORMAT",
                                      param_3 + 10);
        sprintf(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION14_DEALERVERYSTRONG_DONTSPLIT7");
        strcpy(param_1,pcVar6);
      }
    }
    else if (((cVar2 == '\0') || (param_3 != 5)) && (param_3 != 6)) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION14_DEALERWEAK_DOUBLEORHIT");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0xf:
    if (param_4 == '\0') {
      if (param_3 < 7) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION15_DEALERWEAK_DONTHIT_FORMAT",
                                      param_3 + 10);
        sprintf(param_1,pcVar6);
      }
      else if ((param_3 == 10) && (cVar3 != '\0')) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION15_DEALERSTRONG_SURRENDERHALF");
        strcpy(param_1,pcVar6);
      }
      else if (param_3 < 0xb) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION15_DEALERSTRONG_HIT_FORMAT",param_3 + 10
                                     );
        sprintf(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION15_DEALERVERYSTRONG_HIT");
        strcpy(param_1,pcVar6);
      }
    }
    else if (param_3 < 4) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else if (param_3 < 7) {
      if (cVar2 == '\0') {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
        strcpy(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION15_DEALERVERYWEAK_DOUBLEORHIT");
        strcpy(param_1,pcVar6);
      }
    }
    else if (cVar2 == '\0') {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING_DONTDOUBLE");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0x10:
    if (param_4 == '\0') {
      if (cVar1 == '\0') {
        if (param_3 < 7) {
          pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION16_DEALERWEAK_DONTHIT_FORMAT",
                                        param_3 + 10);
          sprintf(param_1,pcVar6);
        }
        else if ((param_3 < 9) || (cVar3 == '\0')) {
          if (param_3 < 10) {
            pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION16_DEALERSTRONG_HIT_FORMAT",
                                          param_3 + 10);
            sprintf(param_1,pcVar6);
          }
          else if (param_3 == 10) {
            pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION16_DEALERVERYSTRONG_MORE",0x14);
            sprintf(param_1,pcVar6);
          }
          else {
            pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION16_DEALERVERYSTRONG_HIT");
            strcpy(param_1,pcVar6);
          }
        }
        else {
          pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION16_DEALERSTRONG_SURRENDERHALF");
          strcpy(param_1,pcVar6);
        }
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION16_AVOIDHAND");
        strcpy(param_1,pcVar6);
      }
    }
    else if (param_3 < 4) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else if (param_3 < 7) {
      if (cVar2 == '\0') {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
        strcpy(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION16_DEALERVERYWEAK_DOUBLEORHIT");
        strcpy(param_1,pcVar6);
      }
    }
    else if (cVar2 == '\0') {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_NORISKOFBUSTING_DONTDOUBLE");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0x11:
    if (param_4 == '\0') {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_GOODHAND_STAND");
      strcpy(param_1,pcVar6);
    }
    else if (param_3 == 2) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION17_HIT");
      strcpy(param_1,pcVar6);
    }
    else if (param_3 < 7) {
      if (cVar2 == '\0') {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION17_HIT");
        strcpy(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION17_DEALERWEAK_DOUBLEORHIT");
        strcpy(param_1,pcVar6);
      }
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION17_DEALERSTRONG");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0x12:
    if (param_4 == '\0') {
      if (cVar1 == '\0') {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_GOODHAND_STAND");
        strcpy(param_1,pcVar6);
      }
      else if (param_3 < 7) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_DEALERWEAK_SPLIT");
        strcpy(param_1,pcVar6);
      }
      else if (param_3 == 7) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_DEALERWEAK_DONTSPLIT");
        strcpy(param_1,pcVar6);
      }
      else if (param_3 == 8) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_SPLIT9SFOR10S_ELSEPUSH");
        strcpy(param_1,pcVar6);
      }
      else if (param_3 == 9) {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_SPLIT9SFOR10S_ELSELOSS");
        strcpy(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_DEALERVERYSTONG_STAND");
        strcpy(param_1,pcVar6);
      }
    }
    else if (param_3 == 2) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_DONTHIT");
      strcpy(param_1,pcVar6);
    }
    else if (param_3 < 7) {
      if (cVar2 == '\0') {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_DEALERWEAK_DONTHIT");
        strcpy(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_DEALERWEAK_DOUBLEORSTAND");
        strcpy(param_1,pcVar6);
      }
    }
    else if (param_3 < 9) {
      if (cVar2 == '\0') {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_SOFT_FORMAT",param_3 + 10);
        sprintf(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_SOFT_DONTDOUBLE_FORMAT",param_3 + 10)
        ;
        sprintf(param_1,pcVar6);
      }
    }
    else if (param_3 < 0xb) {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_ONEHIT_FORMAT",param_3 + 10);
      sprintf(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION18_ONEHIT");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0x13:
    if (param_4 == '\0') {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_GOODHAND_STAND");
      strcpy(param_1,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION19_DONTHIT");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0x14:
    if (param_4 == '\0') {
      if (cVar1 == '\0') {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_GOODHAND_STAND");
        strcpy(param_1,pcVar6);
      }
      else {
        pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION20_DONTSPLIT");
        strcpy(param_1,pcVar6);
      }
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION20_DONTHIT");
      strcpy(param_1,pcVar6);
    }
    break;
  case 0x15:
    pcVar6 = (char *)FUN_00630f40("SID_ROYALMATCH_ACTION21");
    strcpy(param_1,pcVar6);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\royalmatchstate.cpp",0x342);
  }
  return;
}

