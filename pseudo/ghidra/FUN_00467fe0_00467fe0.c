// FUN_00467fe0  00467fe0

void __thiscall FUN_00467fe0(int param_1,int param_2,char param_3,char param_4,short param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  size_t sVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_304;
  undefined4 local_2fc;
  undefined1 local_2ec [11];
  char local_2e1;
  undefined1 local_2e0 [9];
  char local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5;
  undefined1 local_2d4 [4];
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [4];
  undefined1 local_2c4 [8];
  undefined1 local_2bc [11];
  undefined1 local_2b1;
  undefined1 local_2b0 [4];
  undefined1 local_2ac [9];
  undefined1 local_2a3;
  undefined1 local_2a2;
  undefined1 local_2a1;
  undefined1 local_2a0;
  undefined1 local_29f;
  undefined1 local_29e;
  undefined1 local_29d;
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  undefined1 local_299;
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296;
  char local_295;
  short local_294;
  short local_290;
  char local_289;
  undefined4 local_288;
  undefined1 local_284 [8];
  undefined4 local_27c;
  undefined4 local_278;
  undefined1 local_274 [8];
  undefined1 local_26c [4];
  char local_268 [104];
  int local_200;
  int local_1fc;
  char local_1f8 [256];
  char local_f8 [104];
  char local_90 [108];
  uint local_24;
  undefined4 local_20;
  int local_1c;
  short local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f69c;
  local_10 = ExceptionList;
  local_24 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = FUN_004f67d0(local_24);
  local_200 = FUN_0047bc20();
  local_200 = iVar3 * local_200;
  iVar3 = FUN_0047bd60();
  local_1c = FUN_0047bc20();
  local_1c = iVar3 * local_1c;
  local_20 = FUN_0047e3b0();
  local_1fc = FUN_004c6a70();
  uVar14 = 3;
  uVar13 = 0;
  uVar12 = 0x49;
  uVar4 = FUN_00630f40("SID_POKER_BETTING",0x49,0,3);
  FUN_005f73e0(uVar4,uVar12,uVar13,uVar14);
  if (local_1fc < local_200) {
    local_200 = local_1fc;
  }
  uVar4 = (**(code **)(**(int **)(DAT_00791364 + 0xe4) + 0xb8))();
  FUN_005fb5a0(10,uVar4);
  FUN_0057ab80(0xb,&DAT_0071b110);
  FUN_0047aab0(1,local_200 == 0);
  FUN_00519a40(0);
  uVar4 = FUN_00630f40("SID_POKER_CALL");
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0xe0))(uVar4);
  FUN_00467f50();
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0xcc))();
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0x70))();
  if (local_200 < 1000000) {
    if (local_200 < 1000) {
      if (local_200 < 1) {
        uVar4 = FUN_00630f40("SID_POKER_CHECK");
        (**(code **)(**(int **)(param_1 + 0x1e0) + 0xe0))(uVar4);
        if (param_3 == '\0') {
          FUN_00467ec0();
        }
        local_1f8[0] = '\0';
      }
      else {
        sprintf(local_1f8,"$%d",local_200);
      }
    }
    else {
      sprintf(local_1f8,"$%d,%.3d",local_200 / 1000,local_200 % 1000);
    }
  }
  else {
    sprintf(local_1f8,"$%d,%.3d,%.3d",local_200 / 1000000,(local_200 % 1000000) / 1000,
            local_200 % 1000);
  }
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0xb4))(local_1f8);
  if (local_1fc < 1000000) {
    if (local_1fc < 1000) {
      if (local_1fc < 1) {
        local_f8[0] = '\0';
      }
      else {
        sprintf(local_f8,"$%d",local_1fc);
      }
    }
    else {
      sprintf(local_f8,"$%d,%.3d",local_1fc / 1000,local_1fc % 1000);
    }
  }
  else {
    sprintf(local_f8,"$%d,%.3d,%.3d",local_1fc / 1000000,(local_1fc % 1000000) / 1000,
            local_1fc % 1000);
  }
  (**(code **)(**(int **)(param_1 + 0x200) + 0xb4))(local_f8);
  if ((local_200 == 0) && (param_3 == '\0')) {
    sprintf(local_268,(char *)&PTR_006b27f8);
  }
  else {
    sprintf(local_268,(char *)&PTR_006b27f8);
  }
  if (param_2 < *(int *)(DAT_00791364 + 0x410)) {
    param_2 = *(int *)(DAT_00791364 + 0x410);
  }
  if ((param_2 < 1) || ((cVar1 = FUN_004f66e0(), cVar1 == '\0' && (local_200 != 0)))) {
    sprintf(local_90,local_268);
  }
  else if (param_2 < 1000000) {
    if (param_2 < 1000) {
      sprintf(local_90,"%s$%d",local_268,param_2);
    }
    else {
      sprintf(local_90,"%s$%d,%.3d",local_268,param_2 / 1000,param_2 % 1000);
    }
  }
  else {
    sprintf(local_90,"%s$%d,%.3d,%.3d",local_268,param_2 / 1000000,(param_2 % 1000000) / 1000,
            param_2 % 1000);
  }
  if ((param_2 == -1) && (local_1fc - local_200 < local_1c)) {
    (**(code **)(**(int **)(param_1 + 0x204) + 0xb4))(local_90);
    (**(code **)(**(int **)(param_1 + 0x1e4) + 0xd0))();
    if (*(int *)(param_1 + 0x1ec) != 0) {
      (**(code **)(**(int **)(param_1 + 0x1ec) + 0xd0))();
    }
    if (*(int *)(param_1 + 0x1f0) != 0) {
      (**(code **)(**(int **)(param_1 + 0x1f0) + 0xd0))();
    }
  }
  else {
    cVar1 = FUN_004f6640();
    if (cVar1 == '\0') {
      if ((param_2 == 0) || (cVar1 = FUN_004f66e0(), cVar1 == '\0')) {
        (**(code **)(**(int **)(param_1 + 0x204) + 0xb4))(local_90);
        (**(code **)(**(int **)(param_1 + 0x1e4) + 0xd0))();
        if (*(int *)(param_1 + 0x1ec) != 0) {
          (**(code **)(**(int **)(param_1 + 0x1ec) + 0xd0))();
        }
        if (*(int *)(param_1 + 0x1f0) != 0) {
          (**(code **)(**(int **)(param_1 + 0x1f0) + 0xd0))();
        }
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x204) + 0xb4))(local_90);
        (**(code **)(**(int **)(param_1 + 0x1e4) + 0xcc))();
        if (*(int *)(param_1 + 0x1ec) != 0) {
          (**(code **)(**(int **)(param_1 + 0x1ec) + 0xcc))();
        }
        if (*(int *)(param_1 + 0x1f0) != 0) {
          (**(code **)(**(int **)(param_1 + 0x1f0) + 0xcc))();
        }
      }
    }
    else if (param_4 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x204) + 0xb4))(local_90);
      (**(code **)(**(int **)(param_1 + 0x1e4) + 0xcc))();
      if (*(int *)(param_1 + 0x1ec) != 0) {
        (**(code **)(**(int **)(param_1 + 0x1ec) + 0xcc))();
      }
      if (*(int *)(param_1 + 0x1f0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x1f0) + 0xcc))();
      }
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x204) + 0xb4))(local_90);
      (**(code **)(**(int **)(param_1 + 0x1e4) + 0xd0))();
      if (*(int *)(param_1 + 0x1ec) != 0) {
        (**(code **)(**(int **)(param_1 + 0x1ec) + 0xd0))();
      }
      if (*(int *)(param_1 + 0x1f0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x1f0) + 0xd0))();
      }
    }
  }
  cVar1 = FUN_006026d0();
  if (cVar1 == '\0') {
    piVar5 = (int *)FUN_005f2a60(0x30e79f,0);
    (**(code **)(*piVar5 + 0xd0))();
  }
  else {
    piVar5 = (int *)FUN_005f2a60(0x30e79f,0);
    (**(code **)(*piVar5 + 0xcc))();
  }
  if ((param_5 == 2) && (cVar1 = FUN_006026d0(), cVar1 == '\0')) {
    param_5 = 1;
  }
  FUN_005f85d0();
  (**(code **)(*DAT_0162ee84 + 0x3b4))(*(undefined4 *)(DAT_00791364 + 0xcc),local_1f8);
  pcVar6 = (char *)FUN_00630f40("SID_POKER_HINTINSTRUCTIONS_FORMAT",local_1f8);
  sprintf(&DAT_007907b8,pcVar6);
  FUN_0057be80(10,0,&DAT_007907b8);
  pcVar6 = (char *)FUN_00630f40("SID_POKER_CHECK");
  pcVar7 = (char *)FUN_00602b70();
  iVar3 = strcmp(pcVar7,pcVar6);
  if (iVar3 == 0) {
    pcVar6 = (char *)FUN_00630f40("SID_POKER_CHECKINSTRUCTIONS");
    strcpy(&DAT_007907b8,pcVar6);
  }
  else {
    pcVar6 = (char *)FUN_00630f40("SID_POKER_CALLINSTRUCTIONS");
    strcpy(&DAT_007907b8,pcVar6);
  }
  pcVar6 = (char *)FUN_00630f40("SID_POKER_OPEN");
  pcVar7 = (char *)FUN_00602b70();
  iVar3 = strcmp(pcVar7,pcVar6);
  if (iVar3 == 0) {
    pcVar6 = (char *)FUN_00630f40("SID_POKER_OPENINSTRUCTIONS_FORMAT");
    strcat(&DAT_007907b8,pcVar6);
  }
  else {
    cVar1 = FUN_006026d0();
    if (cVar1 == '\0') {
      pcVar6 = (char *)FUN_00630f40("SID_POKER_CANTRAISE_FORMAT");
      strcat(&DAT_007907b8,pcVar6);
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_POKER_RAISEINSTRUCTIONS_FORMAT");
      strcat(&DAT_007907b8,pcVar6);
    }
  }
  pcVar6 = (char *)FUN_00630f40("SID_POKER_CALL");
  pcVar7 = (char *)FUN_00602b70();
  iVar3 = strcmp(pcVar7,pcVar6);
  if (iVar3 == 0) {
    pcVar6 = (char *)FUN_00630f40("SID_POKER_FOLDINSTRUCTIONS_FORMAT");
    strcat(&DAT_007907b8,pcVar6);
  }
  FUN_0057be80(0,0,&DAT_007907b8);
  iVar3 = FUN_0047e1d0();
  if (iVar3 != 0) goto LAB_00469490;
  if (DAT_007912e9 == '\0') {
    iVar3 = FUN_0047e280();
    if (iVar3 == 0) {
      local_278 = FUN_0047e3b0();
      FUN_004c7c40(local_274);
      local_8 = 0;
      FUN_00485940(local_26c,1,1,1,1,0,0,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar4 = DAT_00791398;
      FUN_004a2160(&local_296);
      cVar1 = FUN_004a1e10(uVar4);
      if (cVar1 == '\0') {
        uVar4 = DAT_007913d4;
        FUN_004a2160(&local_297);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') goto LAB_00468cc7;
        uVar4 = DAT_007913a0;
        FUN_004a2160(&local_298);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') goto LAB_00468cc7;
        uVar4 = DAT_0079140c;
        FUN_004a2160(&local_299);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') goto LAB_00468cc7;
        uVar4 = DAT_00791394;
        FUN_004a2160(&local_29a);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') goto LAB_00468cc7;
        uVar4 = DAT_00791418;
        FUN_004a2160(&local_29b);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') goto LAB_00468cc7;
        uVar4 = DAT_00791380;
        FUN_004a2160(&local_2a2);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 == '\0') {
          uVar4 = DAT_007913b0;
          FUN_004a2160(&local_2a3);
          cVar1 = FUN_004a1e10(uVar4);
          if (cVar1 == '\0') {
            pcVar6 = (char *)FUN_00630f40("SID_POKER_HINT_HIGHCARD_FORMAT");
            strcpy(&DAT_007907b8,pcVar6);
          }
          else {
            pcVar6 = (char *)FUN_00630f40("SID_POKER_HINT_ONEPAIR_FORMAT");
            strcpy(&DAT_007907b8,pcVar6);
          }
        }
        else {
          pcVar6 = (char *)FUN_00630f40("SID_POKER_HINT_TWOPAIR_FORMAT");
          strcpy(&DAT_007907b8,pcVar6);
        }
      }
      else {
LAB_00468cc7:
        uVar4 = DAT_00791398;
        FUN_004a2160(&local_29c);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') {
          pcVar6 = (char *)FUN_00630f40("SID_POKER_HAND_ASTRAIGHTFLUSH");
          strcpy(local_1f8,pcVar6);
        }
        uVar4 = DAT_007913d4;
        FUN_004a2160(&local_29d);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') {
          pcVar6 = (char *)FUN_00630f40("SID_POKER_HAND_AFULLHOUSE");
          strcpy(local_1f8,pcVar6);
        }
        uVar4 = DAT_007913a0;
        FUN_004a2160(&local_29e);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') {
          pcVar6 = (char *)FUN_00630f40("SID_POKER_HAND_AFLUSH");
          strcpy(local_1f8,pcVar6);
        }
        uVar4 = DAT_0079140c;
        FUN_004a2160(&local_29f);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') {
          pcVar6 = (char *)FUN_00630f40("SID_POKER_HAND_ASTRAIGHT");
          strcpy(local_1f8,pcVar6);
        }
        uVar4 = DAT_00791394;
        FUN_004a2160(&local_2a0);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') {
          pcVar6 = (char *)FUN_00630f40("SID_POKER_HAND_FOUROFAKIND");
          strcpy(local_1f8,pcVar6);
        }
        uVar4 = DAT_00791418;
        FUN_004a2160(&local_2a1);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 != '\0') {
          pcVar6 = (char *)FUN_00630f40("SID_POKER_HAND_THREEOFAKIND");
          strcpy(local_1f8,pcVar6);
        }
        pcVar6 = (char *)FUN_00630f40("SID_POKER_HINT_RAISE_FORMAT",local_1f8);
        sprintf(&DAT_007907b8,pcVar6);
      }
      local_8 = local_8 & 0xffffff00;
      FUN_004a20f0();
      local_8 = 0xffffffff;
      FUN_00484470();
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_POKER_HINT_BEFOREDRAW");
      strcpy(&DAT_007907b8,pcVar6);
    }
  }
  else {
    iVar3 = FUN_0047e280();
    if (iVar3 == 0) {
      pcVar6 = (char *)FUN_00630f40("SID_POKER_SUMMARY_FIRSTROUND");
      strcpy(&DAT_007907b8,pcVar6);
      for (local_18 = 0; iVar11 = (int)local_18, iVar3 = FUN_0047f950(), iVar11 < iVar3;
          local_18 = local_18 + 1) {
        local_14 = FUN_0047e390((int)local_18);
        iVar3 = FUN_004c6cb0();
        if ((iVar3 != 2) &&
           ((iVar3 = FUN_004c7010(), iVar3 == 1 || (iVar3 = FUN_004c7010(), iVar3 == 2)))) {
          if (*(char *)(local_14 + 0x1c) == '\0') {
            local_2fc = FUN_00630f40("SID_POKER_FORCEDBET");
          }
          else {
            local_2fc = FUN_00630f40("SID_POKER_UNFORCEDBET");
          }
          uVar4 = FUN_004c6150(local_2fc);
          pcVar6 = (char *)FUN_00630f40("SID_POKER_PLAYERNAMES_FORMAT",uVar4);
          sprintf(local_1f8,pcVar6);
          if (*(int *)(local_14 + 0x18) == 0) {
            pcVar6 = (char *)FUN_00630f40("SID_POKER_STOODPAT");
            strcat(local_1f8,pcVar6);
          }
          else {
            pcVar6 = (char *)FUN_00630f40("SID_POKER_DREWCOUNT_FORMAT",
                                          *(undefined4 *)(local_14 + 0x18));
            sVar10 = strlen(local_1f8);
            sprintf(local_1f8 + sVar10,pcVar6);
          }
          strcat(&DAT_007907b8,local_1f8);
          switch(*(undefined4 *)(local_14 + 0x18)) {
          case 0:
            pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND0");
            strcat(&DAT_007907b8,pcVar6);
            break;
          case 1:
            if (*(char *)(local_14 + 0x1c) == '\0') {
              pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND2");
              strcat(&DAT_007907b8,pcVar6);
            }
            else {
              pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND1");
              strcat(&DAT_007907b8,pcVar6);
            }
            break;
          case 2:
            if (*(char *)(local_14 + 0x1c) == '\0') {
              pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND4");
              strcat(&DAT_007907b8,pcVar6);
            }
            else {
              pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND3");
              strcat(&DAT_007907b8,pcVar6);
            }
            break;
          case 3:
            if (*(char *)(local_14 + 0x1c) == '\0') {
              pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND6");
              strcat(&DAT_007907b8,pcVar6);
            }
            else {
              pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND5");
              strcat(&DAT_007907b8,pcVar6);
            }
            break;
          default:
            FUN_005e9f20("false","..\\Casino\\PokerDialog.cpp",0x354);
          }
        }
      }
    }
    else {
      pcVar6 = (char *)FUN_00630f40("SID_POKER_SUMMARY_FIRSTROUND");
      strcpy(&DAT_007907b8,pcVar6);
      for (local_18 = 0; iVar11 = (int)local_18, iVar3 = FUN_0047f950(), iVar11 < iVar3;
          local_18 = local_18 + 1) {
        local_14 = FUN_0047e390((int)local_18);
        iVar3 = FUN_004c6cb0();
        if ((iVar3 != 2) &&
           ((iVar3 = FUN_004c7010(), iVar3 == 1 || (iVar3 = FUN_004c7010(), iVar3 == 2)))) {
          if (*(char *)(local_14 + 0x1c) == '\0') {
            local_304 = FUN_00630f40("SID_POKER_FORCEDBET");
          }
          else {
            local_304 = FUN_00630f40("SID_POKER_UNFORCEDBET");
          }
          uVar4 = FUN_004c6150(local_304);
          pcVar6 = (char *)FUN_00630f40("SID_POKER_PLAYERNAMES_FORMAT",uVar4);
          sprintf(local_1f8,pcVar6);
          if (*(int *)(local_14 + 0x18) == 0) {
            pcVar6 = (char *)FUN_00630f40("SID_POKER_STOODPAT_FORMAT");
            strcat(local_1f8,pcVar6);
          }
          else {
            pcVar6 = (char *)FUN_00630f40("SID_POKER_DREWCOUNT_FORMAT",
                                          *(undefined4 *)(local_14 + 0x18));
            sVar10 = strlen(local_1f8);
            sprintf(local_1f8 + sVar10,pcVar6);
          }
          strcat(&DAT_007907b8,local_1f8);
          switch(*(undefined4 *)(local_14 + 0x18)) {
          case 0:
            if (*(char *)(local_14 + 0x1c) == '\0') {
              pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND8");
              strcat(&DAT_007907b8,pcVar6);
            }
            else {
              pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND7");
              strcat(&DAT_007907b8,pcVar6);
            }
            break;
          case 1:
            if (*(char *)(local_14 + 0x1c) == '\0') {
              pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND10");
              strcat(&DAT_007907b8,pcVar6);
            }
            else {
              pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND9");
              strcat(&DAT_007907b8,pcVar6);
            }
            break;
          case 2:
            pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND11");
            strcat(&DAT_007907b8,pcVar6);
            break;
          case 3:
            pcVar6 = (char *)FUN_00630f40("SID_POKER_LIKELYHAND12");
            strcat(&DAT_007907b8,pcVar6);
            break;
          default:
            FUN_005e9f20("false","..\\Casino\\PokerDialog.cpp",0x37b);
          }
        }
      }
    }
  }
  FUN_0057be80(1,0,&DAT_007907b8);
LAB_00469490:
  iVar3 = FUN_0047e1d0();
  if (iVar3 == 1) {
    local_294 = 0;
    local_290 = 0;
    FUN_004a20d0();
    local_8 = 2;
    FUN_004a20d0();
    local_8._0_1_ = 3;
    puVar9 = local_284;
    FUN_0047e3b0(puVar9);
    FUN_004c7c40(puVar9);
    local_8 = CONCAT31(local_8._1_3_,4);
    local_289 = '\0';
    for (local_18 = 0; iVar11 = (int)local_18, iVar3 = FUN_0047f950(), iVar11 < iVar3;
        local_18 = local_18 + 1) {
      local_14 = FUN_0047e390((int)local_18);
      iVar3 = FUN_004c7010();
      if ((iVar3 == 1) || (iVar3 = FUN_004c7010(), iVar3 == 2)) {
        FUN_004c8300(local_2ac);
        local_8._0_1_ = 5;
        puVar8 = (undefined4 *)FUN_00485940(local_2b0,1,1,1,1,0,0,0);
        local_27c = *puVar8;
        FUN_004a20f0();
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_00484470();
        if (local_289 == '\0') {
          local_288 = local_27c;
          local_294 = local_18;
          local_289 = '\x01';
        }
        else {
          cVar1 = FUN_004a2440(&local_288);
          if (cVar1 != '\0') {
            local_288 = local_27c;
            local_294 = local_18;
          }
        }
      }
    }
    local_14 = FUN_0047e390((int)local_294);
    local_295 = FUN_005f54a0();
    puVar9 = (undefined1 *)FUN_004a2160(&local_2b1);
    FUN_004da4d0(*puVar9);
    pcVar6 = (char *)(**(code **)(**(int **)(local_14 + 0x24) + 0xb8))();
    strcpy(local_1f8,pcVar6);
    if (local_295 == '\0') {
      FUN_004da890();
    }
    uVar4 = FUN_004c6150(local_1f8);
    pcVar6 = (char *)FUN_00630f40("SID_POKER_HIGHESTHAND_FORMAT",uVar4);
    sprintf(&DAT_007907b8,pcVar6);
    iVar3 = FUN_0047e280();
    if (iVar3 != 0) {
      local_289 = '\0';
      for (local_18 = 0; iVar11 = (int)local_18, iVar3 = FUN_0047f950(), iVar11 < iVar3;
          local_18 = local_18 + 1) {
        local_14 = FUN_0047e390((int)local_18);
        iVar3 = FUN_004c7010();
        if ((iVar3 == 1) || (iVar3 = FUN_004c7010(), iVar3 == 2)) {
          FUN_004c8300(local_2bc);
          local_8._0_1_ = 6;
          local_290 = FUN_00484810();
          local_8._0_1_ = 4;
          FUN_00484470();
          FUN_004c8300(local_2c4);
          local_8._0_1_ = 7;
          puVar8 = (undefined4 *)FUN_00485940(local_2c8,0,1,1,0,0,0,0);
          local_27c = *puVar8;
          FUN_004a20f0();
          local_8 = CONCAT31(local_8._1_3_,4);
          FUN_00484470();
          if (local_289 == '\0') {
            local_288 = local_27c;
            local_294 = local_18;
            local_289 = '\x01';
          }
          else {
            cVar1 = FUN_004a2550(&local_288);
            if (cVar1 != '\0') {
              local_288 = local_27c;
              local_294 = local_18;
            }
          }
        }
      }
      local_14 = FUN_0047e390((int)local_294);
      local_295 = FUN_005f54a0();
      FUN_004db070(local_288);
      pcVar6 = (char *)(**(code **)(**(int **)(local_14 + 0x2c) + 0xb8))();
      strcpy(local_1f8,pcVar6);
      if (local_295 == '\0') {
        FUN_004db610();
      }
      if (1 < local_290) {
        uVar4 = FUN_004a2100(DAT_00791390,DAT_00791410,DAT_007913f8,DAT_00791404,DAT_007913a4,
                             &DAT_007913ff);
        cVar1 = FUN_004a2570(uVar4);
        if (cVar1 != '\0') {
          uVar4 = FUN_004c6150(local_1f8);
          pcVar6 = (char *)FUN_00630f40("SID_POKER_LOWESTHAND_FORMAT",uVar4);
          sVar10 = strlen(&DAT_007907b8);
          sprintf(&DAT_007907b8 + sVar10,pcVar6);
        }
      }
    }
    sVar2 = FUN_00484810();
    if (4 < sVar2) {
      for (local_18 = 0; iVar11 = (int)local_18, iVar3 = FUN_0047f950(), iVar11 < iVar3;
          local_18 = local_18 + 1) {
        local_14 = FUN_0047e390((int)local_18);
        iVar3 = FUN_004c7010();
        if ((iVar3 == 1) || (iVar3 = FUN_004c7010(), iVar3 == 2)) {
          local_1f8[0] = '\0';
          FUN_004c8300(local_2d0);
          local_8._0_1_ = 8;
          puVar8 = (undefined4 *)FUN_00485940(local_2d4,1,1,1,1,0,0,0);
          local_27c = *puVar8;
          FUN_004a20f0();
          local_8 = CONCAT31(local_8._1_3_,4);
          FUN_00484470();
          uVar4 = DAT_00791418;
          FUN_004a2160(&local_2d5);
          cVar1 = FUN_004a1e10(uVar4);
          if (cVar1 != '\0') {
            pcVar6 = (char *)FUN_00630f40("SID_POKER_MAYBE_FOUROFAKINDFULLHOUSE");
            strcpy(local_1f8,pcVar6);
          }
          uVar4 = DAT_00791380;
          FUN_004a2160(&local_2d6);
          cVar1 = FUN_004a1e10(uVar4);
          if (cVar1 != '\0') {
            pcVar6 = (char *)FUN_00630f40("SID_POKER_MAYBE_FULLHOUSE");
            strcpy(local_1f8,pcVar6);
          }
          FUN_004c8300(local_2e0);
          local_8._0_1_ = 9;
          sVar2 = FUN_00484bf0();
          local_2d7 = 2 < sVar2;
          local_8 = CONCAT31(local_8._1_3_,4);
          FUN_00484470();
          if (local_2d7 != '\0') {
            pcVar6 = (char *)FUN_00630f40("SID_POKER_MAYBE_FLUSH");
            strcpy(local_1f8,pcVar6);
          }
          FUN_004c8300(local_2ec);
          local_8._0_1_ = 10;
          sVar2 = FUN_00484db0();
          local_2e1 = sVar2 < 2;
          local_8 = CONCAT31(local_8._1_3_,4);
          FUN_00484470();
          if (local_2e1 != '\0') {
            pcVar6 = (char *)FUN_00630f40("SID_POKER_MAYBE_STRAIGHT");
            strcpy(local_1f8,pcVar6);
          }
          if (local_1f8[0] != '\0') {
            uVar4 = FUN_004c6150(local_1f8);
            pcVar6 = (char *)FUN_00630f40("SID_POKER_PLAYERNAME_FORMAT",uVar4);
            sVar10 = strlen(&DAT_007907b8);
            sprintf(&DAT_007907b8 + sVar10,pcVar6);
          }
        }
      }
    }
    FUN_0057be80(1,0,&DAT_007907b8);
    local_8._0_1_ = 3;
    FUN_00484470();
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004a20f0();
    local_8 = 0xffffffff;
    FUN_004a20f0();
  }
  *(short *)(param_1 + 500) = param_5;
  if (*(int *)(param_1 + 0x1ec) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1ec) + 0x74))();
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0x74))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffffc);
  return;
}

