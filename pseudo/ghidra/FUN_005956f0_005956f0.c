// FUN_005956f0  005956f0

void __thiscall FUN_005956f0(int param_1,int param_2)

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
    FUN_00599210();
    (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(1,0);
  }
  else {
    (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(500,param_2);
  }
  return;
}

