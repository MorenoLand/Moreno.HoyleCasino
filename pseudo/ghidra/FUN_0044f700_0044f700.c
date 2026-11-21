// FUN_0044f700  0044f700

undefined4 __thiscall FUN_0044f700(int param_1,int param_2)

{
  if ((param_2 < 1) || (0xe < param_2)) {
    FUN_005e9f20("rank > 0 && rank < 15","..\\Casino\\paigowai.cpp",0x152);
  }
  if (param_2 == 1) {
    param_2 = 0xe;
  }
  return *(undefined4 *)(param_1 + 0x18 + param_2 * 0x2c);
}

