// FUN_00685e10  00685e10

int FUN_00685e10(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (param_2 < 0) {
      if (*(int *)(param_1 + 0x58) < 3) goto LAB_00685e3d;
      param_2 = *(int *)(param_1 + 0x60);
    }
    else if (*(int *)(param_1 + 0x34) <= param_2) {
      return 0;
    }
    return param_2 * 0x10 + *(int *)(param_1 + 0x4c);
  }
LAB_00685e3d:
  return *(int *)(param_1 + 0x4c);
}

