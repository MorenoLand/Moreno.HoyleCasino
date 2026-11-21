// FUN_00609d20  00609d20

int __thiscall FUN_00609d20(int param_1,int param_2)

{
  int local_8;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) != '\0') {
      return -1;
    }
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      if (*(int *)(&DAT_00796d28 + local_8 * 0x74) == param_2) {
        return local_8;
      }
    }
  }
  return -1;
}

