// FUN_005f83d0  005f83d0

void __thiscall FUN_005f83d0(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x114) != param_2) || (*(int *)(param_1 + 0x118) != param_3)) {
    *(int *)(param_1 + 0x114) = param_2;
    *(int *)(param_1 + 0x118) = param_3;
    FUN_005f95e0();
  }
  return;
}

