// FUN_00528b60  00528b60

void __thiscall FUN_00528b60(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00607960("RouletteWinningNumber",0xfffffc18);
  if (iVar1 != -1000) {
    param_2 = iVar1;
  }
  if ((param_2 < -1) || (0x25 < param_2)) {
    FUN_005e9f20("theNumber > -2 && theNumber < 38","..\\Casino\\roulettestate.cpp",0x1c2);
  }
  *(int *)(param_1 + 0xd3c) = param_2;
  return;
}

