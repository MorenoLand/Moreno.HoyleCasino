// FUN_0047fb90  0047fb90

void __thiscall FUN_0047fb90(undefined4 param_1,int param_2)

{
  char cVar1;
  
  param_2 = param_2 + -1;
  switch(param_2) {
  case 0:
    (**(code **)(*DAT_007947e0 + 0x334))(0x30d401,0xffffffff);
    break;
  case 1:
    FUN_00480c10(0);
    FUN_0047fb00(0);
    (**(code **)(*DAT_007947e0 + 0x334))(0x30d401,0xffffffff);
    break;
  case 2:
    FUN_0047ffc0(param_2,param_1);
    FUN_00480c10(0);
    FUN_00480710(1);
    FUN_0047fb00(0);
    (**(code **)(*DAT_007947e0 + 0x334))(0x30d401,0xffffffff);
    break;
  case 3:
    cVar1 = FUN_00480f80();
    if (cVar1 == '\0') {
      FUN_005e9f20("HumanWasEliminated()","..\\Casino\\PokerGame.cpp",0x938);
    }
    FUN_0047ffc0();
    FUN_00480c10(0);
    FUN_00480710(0);
    FUN_0047fb00(0);
    (**(code **)(*DAT_007947e0 + 0x334))(0x30d401,0xffffffff);
    break;
  case 4:
    FUN_0047ffc0(param_2,param_1);
    FUN_00480c10(0);
    FUN_0047fb00(0);
    (**(code **)(*DAT_007947e0 + 0x34))(0x44c);
    break;
  case 5:
    FUN_0047fb00(1);
    (**(code **)(*DAT_007947e0 + 0x34))(0x44c);
    break;
  case 6:
    FUN_00480c10(0);
    FUN_0047fb00(0);
    (**(code **)(*DAT_007947e0 + 0x34))(0x44c);
    break;
  case 7:
    FUN_00480c10(0);
    FUN_0047fb00(0);
    (**(code **)(*DAT_007947e0 + 0x334))(DAT_007947e0[0x13cb],DAT_007947e0[0x13cc]);
    break;
  case 8:
    FUN_0047fb00(0);
    break;
  case 9:
    FUN_0047fb00(1);
  }
  return;
}

