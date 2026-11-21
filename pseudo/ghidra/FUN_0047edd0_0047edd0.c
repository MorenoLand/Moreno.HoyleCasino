// FUN_0047edd0  0047edd0

void __thiscall FUN_0047edd0(int param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_005e9f20("nCardIndex >= 0","..\\Casino\\PokerGame.cpp",0x80d);
  }
  if (4 < param_2) {
    FUN_005e9f20("nCardIndex <= 4","..\\Casino\\PokerGame.cpp",0x80e);
  }
  if (0 < param_2) {
    *(int *)(param_1 + 0x484) = param_2;
    (**(code **)(**(int **)(param_1 + 0x4a0) + 0x44))
              ((*(int *)(param_1 + 0x484) + -1) * 0xd + 0x56 +
               *(int *)(*(int *)(param_1 + 0x24) + 0x10),
               *(int *)(*(int *)(param_1 + 0x24) + 0x14) + -7);
    (**(code **)(**(int **)(param_1 + 0x4a0) + 0x74))();
  }
  return;
}

