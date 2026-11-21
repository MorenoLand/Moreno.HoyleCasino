// FUN_0049db00  0049db00

void __thiscall FUN_0049db00(int *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  int local_3c;
  int local_38;
  int local_34;
  short local_30;
  short local_2c;
  undefined1 local_28 [4];
  char acStack_24 [8];
  uint local_1c;
  short local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0fde;
  local_10 = ExceptionList;
  local_1c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((short)param_1[1] != 7) {
    FUN_005e9f20("shSize == 7","..\\Casino\\PokerHand.cpp",0x1ba3,local_1c);
  }
  FUN_00485940(local_28,1,1,1,1,0,0,0);
  local_8 = 0;
  FUN_00485940(local_14,0,1,1,0,0,0,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
    acStack_24[local_18] = '\0';
  }
  uVar2 = DAT_00791390;
  FUN_004a2160(&local_3d);
  cVar1 = FUN_004a1e10(uVar2);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 1;
    param_2[2] = 2;
  }
  else {
    for (local_18 = 0; local_18 < (short)param_1[1]; local_18 = local_18 + 1) {
      uVar2 = FUN_004a2200(&local_40);
      puVar3 = &local_3f;
      FUN_00464480(&local_3e);
      FUN_00463fd0(puVar3);
      cVar1 = FUN_004a1fb0(uVar2);
      if (cVar1 != '\0') {
        acStack_24[local_18] = '\x01';
        break;
      }
    }
    for (local_18 = 0; local_18 < (short)param_1[1]; local_18 = local_18 + 1) {
      uVar2 = FUN_004a2250(&local_43);
      puVar3 = &local_42;
      FUN_00464480(&local_41);
      FUN_00463fd0(puVar3);
      cVar1 = FUN_004a1fb0(uVar2);
      if (cVar1 != '\0') {
        acStack_24[local_18] = '\x01';
        break;
      }
    }
    for (local_18 = 0; local_18 < (short)param_1[1]; local_18 = local_18 + 1) {
      uVar2 = FUN_004a22a0(&local_46);
      puVar3 = &local_45;
      FUN_00464480(&local_44);
      FUN_00463fd0(puVar3);
      cVar1 = FUN_004a1fb0(uVar2);
      if (cVar1 != '\0') {
        acStack_24[local_18] = '\x01';
        break;
      }
    }
    for (local_18 = 0; local_18 < (short)param_1[1]; local_18 = local_18 + 1) {
      uVar2 = FUN_004a22f0(&local_49);
      puVar3 = &local_48;
      FUN_00464480(&local_47);
      FUN_00463fd0(puVar3);
      cVar1 = FUN_004a1fb0(uVar2);
      if (cVar1 != '\0') {
        acStack_24[local_18] = '\x01';
        break;
      }
    }
    local_2c = 0;
    for (local_30 = 0; local_30 < 7; local_30 = local_30 + 1) {
      if (acStack_24[local_30] == '\0') {
        if (2 < local_2c) {
          FUN_005e9f20("shIndex<3","..\\Casino\\PokerHand.cpp",0x1bd8);
        }
        param_2[local_2c] = 6 - local_30;
        local_2c = local_2c + 1;
      }
    }
    if (local_2c != 3) {
      FUN_005e9f20("shIndex == 3","..\\Casino\\PokerHand.cpp",0x1bdd);
    }
  }
  if (param_2[1] < param_2[2]) {
    local_34 = param_2[2];
    param_2[2] = param_2[1];
    param_2[1] = local_34;
  }
  if (*param_2 < param_2[2]) {
    local_38 = param_2[2];
    param_2[2] = *param_2;
    *param_2 = local_38;
  }
  if (*param_2 < param_2[1]) {
    local_3c = param_2[1];
    param_2[1] = *param_2;
    *param_2 = local_3c;
  }
  FUN_00484b80();
  FUN_00484490(param_1);
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    FUN_00484830(*param_1 + param_2[local_18]);
    FUN_00484ad0(*param_1 + param_2[local_18]);
  }
  if (*(short *)(param_3 + 4) != 3) {
    FUN_005e9f20("phPassed.shSize == 3","..\\Casino\\PokerHand.cpp",0x1c01);
  }
  if (*(short *)(param_4 + 4) != 4) {
    FUN_005e9f20("phKept.shSize == 4","..\\Casino\\PokerHand.cpp",0x1c02);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_004a20f0();
  local_8 = 0xffffffff;
  FUN_004a20f0();
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

