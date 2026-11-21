// FUN_005e63b0  005e63b0

void __thiscall FUN_005e63b0(int param_1,int param_2)

{
  FUN_005d7f40(param_2);
  if ((*(int *)(param_1 + 4) != 0) &&
     (((*(char *)(param_2 + 4) == '\0' && (*(int *)(param_2 + 0x18) == 1)) ||
      (*(int *)(param_2 + 0x18) == 4)))) {
    (**(code **)(**(int **)(param_1 + 4) + 8))(4,0);
    *(undefined1 *)(param_2 + 4) = 1;
  }
  return;
}

