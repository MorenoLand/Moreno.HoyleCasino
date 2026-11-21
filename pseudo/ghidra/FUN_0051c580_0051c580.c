// FUN_0051c580  0051c580

undefined4 __fastcall FUN_0051c580(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1bc) == -1) {
    FUN_005e9f20("false","..\\Casino\\PokerTournDialog.cpp",0x26f);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1bc);
  }
  return uVar1;
}

