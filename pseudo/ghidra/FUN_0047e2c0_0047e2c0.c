// FUN_0047e2c0  0047e2c0

undefined4 __fastcall FUN_0047e2c0(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x45c)) {
  case 0:
  case 7:
    uVar1 = 0;
    break;
  case 1:
  case 8:
    uVar1 = 6;
    break;
  case 2:
  case 9:
    uVar1 = 2;
    break;
  case 3:
  case 10:
    uVar1 = 7;
    break;
  case 4:
  case 0xb:
    uVar1 = 1;
    break;
  case 5:
  case 0xc:
    uVar1 = 5;
    break;
  case 6:
  case 0xd:
    uVar1 = 3;
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\PokerGame.cpp",0x713);
    uVar1 = 0;
  }
  return uVar1;
}

