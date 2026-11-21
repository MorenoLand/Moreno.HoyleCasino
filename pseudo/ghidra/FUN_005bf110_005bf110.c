// FUN_005bf110  005bf110

void __fastcall FUN_005bf110(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))(0);
  }
  *(int *)(param_1 + 0x20) = -*(int *)(param_1 + 0x20);
  iVar1 = FUN_005f3e50();
  *(int *)(param_1 + 0x20) = iVar1 + *(int *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}

