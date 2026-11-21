// FUN_00685dd0  00685dd0

int FUN_00685dd0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (param_2 < 0) {
      if (*(int *)(param_1 + 0x58) < 3) goto LAB_00685dfd;
      param_2 = *(int *)(param_1 + 0x60);
    }
    else if (*(int *)(param_1 + 0x34) <= param_2) {
      return 0;
    }
    return param_2 * 0x20 + *(int *)(param_1 + 0x48);
  }
LAB_00685dfd:
  return *(int *)(param_1 + 0x48);
}

