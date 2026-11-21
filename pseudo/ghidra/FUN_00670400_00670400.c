// FUN_00670400  00670400

bool __thiscall FUN_00670400(int param_1,int param_2)

{
  if ((param_2 < 0) || (699 < param_2)) {
    FUN_005e9f20("id >= 0 && id < REWARDS_CHECKLIST_SIZE","..\\casinoShell\\rewards.cpp",0x16a);
  }
  return *(int *)(param_1 + 4 + param_2 * 4) != 0;
}

