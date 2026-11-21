// FUN_0045b260  0045b260

void __thiscall FUN_0045b260(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (param_2 == 0) {
    FUN_0045ffe0();
    (**(code **)(**(int **)(DAT_00790734 + 4) + 8))(1,0);
  }
  else {
    (**(code **)(**(int **)(DAT_00790734 + 4) + 8))(500,param_2);
  }
  return;
}

