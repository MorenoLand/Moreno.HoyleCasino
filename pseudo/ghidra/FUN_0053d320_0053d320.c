// FUN_0053d320  0053d320

void __thiscall FUN_0053d320(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (param_2 == 0) {
    FUN_005408b0();
    (**(code **)(**(int **)(DAT_007933e8 + 4) + 8))(1,0);
  }
  else {
    (**(code **)(**(int **)(DAT_007933e8 + 4) + 8))(500,param_2);
  }
  return;
}

