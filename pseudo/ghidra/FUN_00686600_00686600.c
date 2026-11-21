// FUN_00686600  00686600

undefined4 FUN_00686600(int param_1,int param_2)

{
  param_2 = *(int *)(param_1 + 8) + param_2;
  if (*(int *)(param_1 + 4) < param_2) {
    return 0xffffffff;
  }
  *(int *)(param_1 + 8) = param_2;
  return 0;
}

