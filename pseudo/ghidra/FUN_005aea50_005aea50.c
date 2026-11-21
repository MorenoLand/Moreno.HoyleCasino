// FUN_005aea50  005aea50

void __thiscall FUN_005aea50(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0xb) == '\0') {
    *(undefined1 *)(param_1 + 0xb) = 1;
    FUN_005b7310(10,4);
    (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
  }
  else if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    FUN_005b7310(3,param_2);
    (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_005b3e60(param_2);
    (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
  }
  return;
}

