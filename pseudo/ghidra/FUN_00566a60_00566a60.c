// FUN_00566a60  00566a60

void __thiscall FUN_00566a60(undefined1 *param_1,int param_2)

{
  FUN_00565a50(param_2);
  if (param_2 == 5) {
    (**(code **)(**(int **)(param_1 + 8) + 0x44))(0x9f,0x120);
    *param_1 = 1;
  }
  else {
    (**(code **)(**(int **)(param_1 + 8) + 0x44))(0x9f,0x13c);
    *param_1 = 0;
    (**(code **)(**(int **)(param_1 + 4) + 0x70))();
  }
  return;
}

