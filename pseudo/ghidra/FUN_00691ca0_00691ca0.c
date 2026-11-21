// FUN_00691ca0  00691ca0

undefined4 FUN_00691ca0(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x18) + param_2)) {
    return 0xffffff7d;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  return 0;
}

