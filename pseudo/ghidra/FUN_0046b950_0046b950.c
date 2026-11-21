// FUN_0046b950  0046b950

void __thiscall FUN_0046b950(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined1 local_4ac;
  undefined1 local_4ab;
  undefined1 local_4aa;
  undefined1 local_4a9;
  undefined1 local_4a8;
  undefined1 local_4a7;
  undefined1 local_4a6;
  undefined1 local_4a5;
  undefined1 local_4a4;
  undefined1 local_4a3;
  undefined1 local_4a2;
  undefined1 local_4a1;
  char local_4a0 [108];
  undefined4 local_434;
  undefined4 local_430;
  undefined1 local_42c [8];
  undefined4 local_424;
  char local_420 [1028];
  uint local_1c;
  undefined1 local_18 [4];
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f7c6;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = uVar2;
  if (param_2 < 1) {
    FUN_005e9f20("nDiscardLimitIn >= 1","..\\Casino\\PokerDialog.cpp",0x533,uVar2);
  }
  if (5 < param_2) {
    FUN_005e9f20("nDiscardLimitIn <= 5","..\\Casino\\PokerDialog.cpp",0x534,uVar2);
  }
  FUN_0057ab80(0xb,&DAT_0071c920);
  *(int *)(param_1 + 0x21c) = param_2;
  *(undefined4 *)(param_1 + 0x220) = 0;
  local_430 = FUN_0047e3b0();
  (**(code **)(**(int **)(param_1 + 0x1e0) + 200))(0x186a1);
  FUN_0060ca40(4);
  local_424 = FUN_00463e50();
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0xb0))(local_424);
  FUN_006023d0(local_424,local_424,local_424,local_424);
  *(undefined1 *)(*(int *)(param_1 + 0x1e0) + 0x1dc) = 0;
  uVar3 = FUN_00630f40("SID_POKER_HOLD");
  (**(code **)(**(int **)(param_1 + 500) + 0xb4))(uVar3);
  (**(code **)(**(int **)(param_1 + 0x208) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1e4) + 200))(0x186a1);
  FUN_0060ca40(3);
  local_424 = FUN_00463e50();
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0xb0))(local_424);
  FUN_006023d0(local_424,local_424,local_424,local_424);
  *(undefined1 *)(*(int *)(param_1 + 0x1e4) + 0x1dc) = 0;
  uVar3 = FUN_00630f40("SID_POKER_HOLD");
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0xb4))(uVar3);
  (**(code **)(**(int **)(param_1 + 0x20c) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1e8) + 200))(0x186a1);
  FUN_0060ca40(2);
  local_424 = FUN_00463e50();
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0xb0))(local_424);
  FUN_006023d0(local_424,local_424,local_424,local_424);
  *(undefined1 *)(*(int *)(param_1 + 0x1e8) + 0x1dc) = 0;
  uVar3 = FUN_00630f40("SID_POKER_HOLD");
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0xb4))(uVar3);
  (**(code **)(**(int **)(param_1 + 0x210) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1ec) + 200))(0x186a1);
  FUN_0060ca40(1);
  local_424 = FUN_00463e50();
  (**(code **)(**(int **)(param_1 + 0x1ec) + 0xb0))(local_424);
  FUN_006023d0(local_424,local_424,local_424,local_424);
  *(undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x1dc) = 0;
  uVar3 = FUN_00630f40("SID_POKER_HOLD");
  (**(code **)(**(int **)(param_1 + 0x200) + 0xb4))(uVar3);
  (**(code **)(**(int **)(param_1 + 0x214) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1f0) + 200))(0x186a1);
  FUN_0060ca40(0);
  local_424 = FUN_00463e50();
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0xb0))(local_424);
  FUN_006023d0(local_424,local_424,local_424,local_424);
  *(undefined1 *)(*(int *)(param_1 + 0x1f0) + 0x1dc) = 0;
  uVar3 = FUN_00630f40("SID_POKER_HOLD");
  (**(code **)(**(int **)(param_1 + 0x204) + 0xb4))(uVar3);
  (**(code **)(**(int **)(param_1 + 0x218) + 0x70))();
  FUN_005f85d0();
  (**(code **)(*DAT_0162ee84 + 0x3b4))(*(undefined4 *)(DAT_00791364 + 0xcc),local_4a0);
  pcVar4 = (char *)FUN_00630f40("SID_POKER_HINT_CHARACTERMOVE",local_4a0);
  sprintf(local_420,pcVar4);
  FUN_0057be80(10,0,local_420);
  pcVar4 = (char *)FUN_00630f40("SID_POKER_DISCARDINSTRUCTIONS");
  strcpy(local_420,pcVar4);
  FUN_0057be80(0,0,local_420);
  local_434 = FUN_0047e3b0();
  FUN_004c7c40(local_42c);
  local_8 = 0;
  FUN_00485940(local_18,1,1,1,1,0,0,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar3 = DAT_00791398;
  FUN_004a2160(&local_4a1);
  cVar1 = FUN_004a1e10(uVar3);
  if (cVar1 == '\0') {
    uVar3 = DAT_007913d4;
    FUN_004a2160(&local_4a2);
    cVar1 = FUN_004a1e10(uVar3);
    if (cVar1 == '\0') {
      uVar3 = DAT_007913a0;
      FUN_004a2160(&local_4a3);
      cVar1 = FUN_004a1e10(uVar3);
      if (cVar1 == '\0') {
        uVar3 = DAT_0079140c;
        FUN_004a2160(&local_4a4);
        cVar1 = FUN_004a1e10(uVar3);
        if (cVar1 == '\0') {
          uVar3 = DAT_00791394;
          FUN_004a2160(&local_4a9);
          cVar1 = FUN_004a1e10(uVar3);
          if (cVar1 == '\0') {
            uVar3 = DAT_00791418;
            FUN_004a2160(&local_4aa);
            cVar1 = FUN_004a1e10(uVar3);
            if (cVar1 == '\0') {
              uVar3 = DAT_00791380;
              FUN_004a2160(&local_4ab);
              cVar1 = FUN_004a1e10(uVar3);
              if (cVar1 == '\0') {
                uVar3 = DAT_007913b0;
                FUN_004a2160(&local_4ac);
                cVar1 = FUN_004a1e10(uVar3);
                if (cVar1 == '\0') {
                  pcVar4 = (char *)FUN_00630f40("SID_POKER_HINT_HIGHCARD");
                  strcpy(local_420,pcVar4);
                }
                else {
                  pcVar4 = (char *)FUN_00630f40("SID_POKER_HINT_ONEPAIR");
                  strcpy(local_420,pcVar4);
                }
              }
              else {
                pcVar4 = (char *)FUN_00630f40("SID_POKER_HINT_TWOPAIR");
                strcpy(local_420,pcVar4);
              }
            }
            else {
              pcVar4 = (char *)FUN_00630f40("SID_POKER_HINT_THREEOFAKIND");
              strcpy(local_420,pcVar4);
            }
          }
          else {
            pcVar4 = (char *)FUN_00630f40("SID_POKER_HINT_FOUROFAKIND");
            strcpy(local_420,pcVar4);
          }
          goto LAB_0046c2d1;
        }
      }
    }
  }
  uVar3 = DAT_00791398;
  FUN_004a2160(&local_4a5);
  cVar1 = FUN_004a1e10(uVar3);
  if (cVar1 != '\0') {
    pcVar4 = (char *)FUN_00630f40("SID_POKER_HAND_STRAIGHTFLUSH");
    strcpy(local_4a0,pcVar4);
  }
  uVar3 = DAT_007913d4;
  FUN_004a2160(&local_4a6);
  cVar1 = FUN_004a1e10(uVar3);
  if (cVar1 != '\0') {
    pcVar4 = (char *)FUN_00630f40("SID_POKER_HAND_FULLHOUSE");
    strcpy(local_4a0,pcVar4);
  }
  uVar3 = DAT_007913a0;
  FUN_004a2160(&local_4a7);
  cVar1 = FUN_004a1e10(uVar3);
  if (cVar1 != '\0') {
    pcVar4 = (char *)FUN_00630f40("SID_POKER_HAND_FLUSH");
    strcpy(local_4a0,pcVar4);
  }
  uVar3 = DAT_0079140c;
  FUN_004a2160(&local_4a8);
  cVar1 = FUN_004a1e10(uVar3);
  if (cVar1 != '\0') {
    pcVar4 = (char *)FUN_00630f40("SID_POKER_HAND_STRAIGHT");
    strcpy(local_4a0,pcVar4);
  }
  pcVar4 = (char *)FUN_00630f40("SID_POKER_HINT_GREATHAND_FORMAT",local_4a0);
  sprintf(local_420,pcVar4);
LAB_0046c2d1:
  iVar5 = FUN_0047e280();
  if (iVar5 == 1) {
    pcVar4 = (char *)FUN_00630f40("SID_POKER_HINT_LOW");
    strcpy(local_420,pcVar4);
  }
  FUN_0057be80(1,0,local_420);
  if (param_3 == 0) {
    FUN_005e9f20("bDefault","..\\Casino\\PokerDialog.cpp",0x591);
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      *(undefined1 *)(param_1 + 0x224 + (int)local_14) = 0;
    }
  }
  else {
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      *(undefined1 *)(param_1 + 0x224 + (int)local_14) = *(undefined1 *)(param_3 + local_14);
    }
  }
  local_8 = local_8 & 0xffffff00;
  FUN_004a20f0();
  local_8 = 0xffffffff;
  FUN_00484470();
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

