// FUN_00480ee0  00480ee0

undefined4 __fastcall FUN_00480ee0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  if ((iVar1 < 1) || (3 < iVar1)) {
    FUN_005e9f20("(1<=currentRound) && (currentRound<=3)","..\\Casino\\PokerGame.cpp",0xb4d);
  }
  return *(undefined4 *)(param_1 + 0x104 + iVar1 * 4);
}

