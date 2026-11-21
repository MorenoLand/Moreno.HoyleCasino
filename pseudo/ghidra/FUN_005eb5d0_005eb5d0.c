// FUN_005eb5d0  005eb5d0

void __thiscall FUN_005eb5d0(int *param_1,char param_2)

{
  if ((char)param_1[0x5b] != param_2) {
    *(char *)(param_1 + 0x5b) = param_2;
    (**(code **)(*param_1 + 0xac))();
  }
  return;
}

