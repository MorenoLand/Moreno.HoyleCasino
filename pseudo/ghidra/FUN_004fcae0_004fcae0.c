// FUN_004fcae0  004fcae0

void __fastcall FUN_004fcae0(int param_1)

{
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_005f8990();
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x1c))(0);
  return;
}

