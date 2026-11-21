// FUN_0056e1a0  0056e1a0

void __thiscall FUN_0056e1a0(int param_1,int param_2)

{
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + param_2;
  if (999999999 < *(int *)(param_1 + 0xa8)) {
    FUN_005e9f20("false","..\\Casino\\roadkillslot.cpp",0x24a);
    *(undefined4 *)(param_1 + 0xa8) = 999999999;
  }
  FUN_005709b0(*(undefined4 *)(param_1 + 0xa8));
  if (0 < param_2) {
    FUN_0056df70(param_2);
  }
  return;
}

