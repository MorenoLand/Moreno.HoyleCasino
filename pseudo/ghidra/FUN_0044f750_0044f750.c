// FUN_0044f750  0044f750

undefined4 __thiscall FUN_0044f750(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 1) || (0xe < param_2)) {
    FUN_005e9f20("rank > 0 && rank < 15","..\\Casino\\paigowai.cpp",0x15b);
  }
  if ((param_3 < 0) || (4 < param_3)) {
    FUN_005e9f20("suit > -1 && suit < 5","..\\Casino\\paigowai.cpp",0x15c);
  }
  if (param_2 == 1) {
    param_2 = 0xe;
  }
  iVar1 = FUN_0044f700(param_2);
  if ((iVar1 == 0) || (*(int *)(param_1 + param_2 * 0x2c + 0x1c + param_3 * 4) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

