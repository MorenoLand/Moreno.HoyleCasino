// FUN_0062dca0  0062dca0

int FUN_0062dca0(int param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; *(char *)(param_1 + local_8) != '\0'; local_8 = local_8 + 1) {
    if (param_2 < local_8) {
      *(undefined1 *)(param_1 + local_8 + -1) = *(undefined1 *)(param_1 + local_8);
    }
  }
  if (param_2 < local_8) {
    *(undefined1 *)(param_1 + local_8 + -1) = 0;
  }
  return param_1;
}

