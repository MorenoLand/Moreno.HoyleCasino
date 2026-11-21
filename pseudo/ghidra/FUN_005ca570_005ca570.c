// FUN_005ca570  005ca570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ca570(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_007947e4 + 0x25c))();
  if (iVar1 != 0) {
    if (*(double *)(*(int *)(param_1 + 4) + 0x1e0) == 1.0) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0xd0))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x14) + 0xcc))();
    }
    if ((_DAT_006d2438 == *(double *)(*(int *)(param_1 + 0x10) + 0x1e0)) ||
       ((double)*(int *)(param_1 + 0x30) == *(double *)(*(int *)(param_1 + 0x10) + 0x1e0))) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0xd0))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x18) + 0xcc))();
    }
  }
  return;
}

