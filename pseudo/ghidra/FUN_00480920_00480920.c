// FUN_00480920  00480920

undefined4 __fastcall FUN_00480920(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((iVar1 < 0) || (4 < iVar1)) {
    FUN_005e9f20("(0<=x) && (x<=4)","..\\Casino\\PokerGame.cpp",0xaab);
  }
  return *(undefined4 *)(&DAT_0071e3b0 + iVar1 * 4);
}

