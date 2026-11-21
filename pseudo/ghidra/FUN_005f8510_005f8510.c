// FUN_005f8510  005f8510

void __thiscall FUN_005f8510(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x108) + param_2;
  *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x104) + param_3;
  FUN_005f9a80();
  return;
}

