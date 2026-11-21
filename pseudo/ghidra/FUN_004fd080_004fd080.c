// FUN_004fd080  004fd080

void __thiscall FUN_004fd080(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a28b3;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc3a0(param_2);
  switch(param_1[5]) {
  case 0:
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 1:
    FUN_004fce80();
    cVar1 = FUN_005da830();
    if ((cVar1 == '\0') || (cVar1 = (**(code **)(*DAT_00791eb8 + 0x2d0))(), cVar1 == '\0')) {
      (**(code **)(*param_1 + 4))(2);
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_004fcb30(2);
    }
    break;
  case 2:
    (**(code **)(*param_1 + 4))(3);
    cVar1 = FUN_005da7b0();
    if (cVar1 == '\0') {
      FUN_0047ac50();
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_00481150();
    }
    break;
  case 3:
    cVar1 = FUN_004fcdd0();
    if (cVar1 == '\0') {
      FUN_00466e90();
    }
    (**(code **)(*param_1 + 4))(4);
    break;
  case 4:
    iVar3 = FUN_0047e1d0();
    if (iVar3 == 0) {
      puStack_58 = operator_new(0x20);
      uStack_8 = 2;
      if (puStack_58 == (undefined4 *)0x0) {
        puStack_58 = (undefined4 *)0x0;
      }
      else {
        FUN_005fc0d0(0);
        *puStack_58 = PokerDrawPlayScript::vftable;
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(puStack_58);
    }
    else if (iVar3 == 1) {
      puStack_50 = operator_new(0x20);
      uStack_8 = 0;
      if (puStack_50 == (undefined4 *)0x0) {
        puStack_50 = (undefined4 *)0x0;
      }
      else {
        FUN_005fc0d0(0);
        *puStack_50 = PokerStudPlayScript::vftable;
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(puStack_50);
    }
    else if (iVar3 == 2) {
      puStack_54 = operator_new(0x20);
      uStack_8 = 1;
      if (puStack_54 == (undefined4 *)0x0) {
        puStack_54 = (undefined4 *)0x0;
      }
      else {
        FUN_005fc0d0(0);
        *puStack_54 = PokerHoldemPlayScript::vftable;
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(puStack_54);
    }
    else {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerRoom.cpp",0x541);
    }
    (**(code **)(*param_1 + 4))(5);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 5:
    (**(code **)(*param_1 + 4))(6);
    cVar1 = FUN_005da7b0();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      DAT_00791ec0 = FUN_00480cc0();
      if (DAT_00791ec0 == 1) {
        puStack_60 = operator_new(0x24);
        uStack_8 = 3;
        if (puStack_60 == (undefined4 *)0x0) {
          puStack_60 = (undefined4 *)0x0;
        }
        else {
          FUN_005fc0d0(0);
          *puStack_60 = PokerTournamentComment_EndOfRoundScript::vftable;
        }
        uStack_8 = 0xffffffff;
        FUN_005fc420(puStack_60);
      }
      else if (DAT_00791ec0 == 3) {
        puStack_64 = operator_new(0x20);
        uStack_8 = 4;
        if (puStack_64 == (undefined4 *)0x0) {
          puStack_64 = (undefined4 *)0x0;
        }
        else {
          FUN_005fc0d0(0);
          *puStack_64 = PokerTournamentComment_EndOfHandScript::vftable;
        }
        uStack_8 = 0xffffffff;
        FUN_005fc420(puStack_64);
      }
      else if (DAT_00791ec0 == 4) {
        puStack_68 = operator_new(0x20);
        uStack_8 = 5;
        if (puStack_68 == (undefined4 *)0x0) {
          puStack_68 = (undefined4 *)0x0;
        }
        else {
          FUN_005fc0d0(0);
          *puStack_68 = PokerTournamentComment_EndOfTournamentScript::vftable;
        }
        uStack_8 = 0xffffffff;
        FUN_005fc420(puStack_68);
      }
      else {
        (**(code **)(*param_1 + 0x1c))(0);
      }
    }
    break;
  case 6:
    (**(code **)(*param_1 + 4))(7);
    cVar1 = FUN_005da7b0();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_00483790();
    }
    break;
  case 7:
    (**(code **)(*param_1 + 8))(2,0);
    cVar1 = FUN_005da7b0();
    if (cVar1 != '\0') {
      FUN_004fc6a0();
    }
    break;
  case 8:
    (**(code **)(*DAT_0162ee84 + 0x34))(0xb,uVar2);
  }
  ExceptionList = local_10;
  return;
}

