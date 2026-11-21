// FUN_00670380  00670380

void __thiscall FUN_00670380(int param_1,int param_2)

{
  *(int *)(param_1 + 0xaf4) = *(int *)(param_1 + 0xaf4) + param_2;
  if (*(int *)(param_1 + 0xaf4) < 0) {
    FUN_005e9f20("rewBalance >= 0","..\\casinoShell\\rewards.cpp",0x15d);
  }
  if (0 < param_2) {
    *(int *)(param_1 + 0xaf8) = *(int *)(param_1 + 0xaf8) + param_2;
  }
  return;
}

