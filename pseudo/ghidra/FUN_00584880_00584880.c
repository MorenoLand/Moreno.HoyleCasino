// FUN_00584880  00584880

void __fastcall FUN_00584880(int param_1)

{
  FUN_005f6490(0,0,0);
  FUN_005f5010();
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 4) = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x78) == 0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 200))(0x30d4cb);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x5c) + 200))(*(undefined4 *)(param_1 + 0x78));
  }
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x40))();
  *(undefined4 *)(*(int *)(param_1 + 0x60) + 4) = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x7c) == 0) {
    (**(code **)(**(int **)(param_1 + 0x60) + 200))(0x30d4cc);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x60) + 200))(*(undefined4 *)(param_1 + 0x7c));
  }
  (**(code **)(**(int **)(param_1 + 0x60) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x60) + 0x40))();
  *(undefined4 *)(*(int *)(param_1 + 100) + 4) = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_005eaf00(0x30d4cf);
  }
  else {
    FUN_005eaf00(*(undefined4 *)(param_1 + 0x80));
  }
  (**(code **)(**(int **)(param_1 + 100) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 100) + 0x40))();
  FUN_00585070();
  return;
}

