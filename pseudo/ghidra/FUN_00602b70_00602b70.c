// FUN_00602b70  00602b70

undefined ** __fastcall FUN_00602b70(int param_1)

{
  undefined **ppuVar1;
  
  if (*(int *)(param_1 + 400) == 0) {
    ppuVar1 = &PTR_006b27f8;
  }
  else {
    ppuVar1 = (undefined **)(**(code **)(**(int **)(param_1 + 400) + 0xb8))();
  }
  return ppuVar1;
}

