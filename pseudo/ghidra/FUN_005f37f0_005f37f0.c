// FUN_005f37f0  005f37f0

void __thiscall FUN_005f37f0(int param_1,int param_2)

{
  if (((*(char *)(param_1 + 0x25) == '\0') || (*(char *)(param_1 + 0x26) != '\0')) ||
     ((*(int *)(param_2 + 0x18) != 0x15 &&
      (((*(int *)(param_2 + 0x18) != 0x16 && (*(int *)(param_2 + 0x18) != 4)) &&
       (*(int *)(param_2 + 0x18) != 1)))))) {
    if ((*(int *)(param_1 + 0x38) == 0) ||
       (((*(int *)(param_2 + 0x18) != 0x15 && (*(int *)(param_2 + 0x18) != 0x16)) &&
        (*(int *)(param_2 + 0x18) != 4)))) {
      if (DAT_015e55e4 != (int *)0x0) {
        (**(code **)(*DAT_015e55e4 + 8))(param_2);
      }
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x3c))(param_2);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x26) = 1;
    *(undefined1 *)(param_2 + 4) = 1;
  }
  return;
}

