// FUN_00465110  00465110

undefined4 __thiscall FUN_00465110(int param_1,int param_2)

{
  if (**(int **)(param_1 + 8) == -1) {
    FUN_005e9f20("plIndices[0] != -1L","..\\Casino\\PokerCombinations.cpp",0x42);
  }
  if (param_2 < 0) {
    FUN_005e9f20("lIndex>=0","..\\Casino\\PokerCombinations.cpp",0x43);
  }
  if (*(int *)(param_1 + 4) <= param_2) {
    FUN_005e9f20("lIndex<lGetHowMany","..\\Casino\\PokerCombinations.cpp",0x44);
  }
  return *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4);
}

