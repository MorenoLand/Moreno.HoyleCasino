// FUN_0051ecb0  0051ecb0

void __thiscall FUN_0051ecb0(int param_1,char *param_2,undefined4 param_3)

{
  if (3 < *(int *)(param_1 + 0x22c)) {
    FUN_005e9f20("nPlayersToAdvance < 4","..\\Casino\\PokerTournDialog.cpp",0x551);
  }
  strcpy((char *)(param_1 + 0x230 + *(int *)(param_1 + 0x22c) * 100),param_2);
  *(undefined4 *)(param_1 + 0x3c0 + *(int *)(param_1 + 0x22c) * 4) = param_3;
  *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
  return;
}

