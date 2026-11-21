// FUN_0044f7e0  0044f7e0

undefined4 __thiscall FUN_0044f7e0(int param_1,int param_2,int param_3)

{
  if ((param_2 < 1) || (0xe < param_2)) {
    FUN_005e9f20("rank > 0 && rank < 15","..\\Casino\\paigowai.cpp",0x169);
  }
  if (param_2 == 1) {
    param_2 = 0xe;
  }
  return *(undefined4 *)(param_1 + param_2 * 0x2c + 0x30 + param_3 * 4);
}

