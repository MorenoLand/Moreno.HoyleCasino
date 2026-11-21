// FUN_00588500  00588500

void __fastcall FUN_00588500(int param_1)

{
  if (*(int *)(param_1 + 0x3c0c) == 0) {
    FUN_005f8340();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x3c0c) + 8))();
  }
  return;
}

