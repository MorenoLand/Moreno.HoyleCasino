// FUN_005f4fc0  005f4fc0

void __thiscall FUN_005f4fc0(int *param_1,int param_2)

{
  if ((*(char *)((int)param_1 + 10) != '\0') && ((char)param_1[2] != '\0')) {
    (**(code **)(*param_1 + 0x44))
              (*(int *)(param_2 + 8) - param_1[0xb],*(int *)(param_2 + 0xc) - param_1[0xc]);
  }
  return;
}

