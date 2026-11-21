// FUN_00482e10  00482e10

void __thiscall FUN_00482e10(undefined4 param_1,int param_2,int param_3,int param_4)

{
  if (param_3 == 2) {
    *(undefined1 *)(param_4 + 8 + param_2 * 0x14) = 1;
    *(undefined4 *)(param_4 + param_2 * 0x14) = 0xffffffff;
  }
  else if (param_3 == 3) {
    *(undefined4 *)(param_4 + 4 + param_2 * 0x14) = 3;
  }
  else {
    FUN_005e9f20("false","..\\Casino\\PokerGame.cpp",0xeb0,param_1);
  }
  return;
}

