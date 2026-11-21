// FUN_00464ed0  00464ed0

int * __thiscall FUN_00464ed0(int *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int local_8;
  
  if (param_2 < 1) {
    FUN_005e9f20("lObjectsAvailableIn > 0","..\\Casino\\PokerCombinations.cpp",9);
  }
  if (param_3 < 1) {
    FUN_005e9f20("lGetHowManyIn > 0","..\\Casino\\PokerCombinations.cpp",10);
  }
  if (param_2 < param_3) {
    FUN_005e9f20("lObjectsAvailableIn >= lGetHowManyIn","..\\Casino\\PokerCombinations.cpp",0xb);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  pvVar1 = operator_new(-(uint)((int)((ulonglong)(uint)param_1[1] * 4 >> 0x20) != 0) |
                        (uint)((ulonglong)(uint)param_1[1] * 4));
  param_1[2] = (int)pvVar1;
  if (param_1[2] == 0) {
    FUN_005e9f20("plIndices","..\\Casino\\PokerCombinations.cpp",0x11);
  }
  for (local_8 = 0; local_8 < param_1[1]; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1[2] + local_8 * 4) = 0;
  }
  *(undefined4 *)param_1[2] = 0xffffffff;
  return param_1;
}

