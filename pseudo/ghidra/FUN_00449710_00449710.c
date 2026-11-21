// FUN_00449710  00449710

void __thiscall FUN_00449710(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (param_2 == 0) {
    FUN_0044ca20();
    (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(1,0);
  }
  else {
    (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(500,param_2);
  }
  return;
}

