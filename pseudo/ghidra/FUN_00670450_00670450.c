// FUN_00670450  00670450

void __thiscall FUN_00670450(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int local_c;
  
  if ((param_2 < 0) || (699 < param_2)) {
    FUN_005e9f20("id >= 0 && id < REWARDS_CHECKLIST_SIZE","..\\casinoShell\\rewards.cpp",0x171);
  }
  if (param_3 == '\0') {
    local_c = 0;
  }
  else {
    local_c = *(int *)(param_1 + 4 + param_2 * 4) + 1;
  }
  *(int *)(param_1 + 4 + param_2 * 4) = local_c;
  if (param_3 != '\0') {
    uVar1 = FUN_00634310(param_2,1);
    FUN_00670380(uVar1);
  }
  return;
}

