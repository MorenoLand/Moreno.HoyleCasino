// FUN_005857a0  005857a0

void __fastcall FUN_005857a0(int param_1)

{
  undefined4 local_8;
  
  **(undefined1 **)(param_1 + 4) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 1;
  *(undefined1 *)(*(int *)(param_1 + 4) + 2) = 1;
  *(undefined1 *)(*(int *)(param_1 + 4) + 3) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0;
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined1 *)(*(int *)(param_1 + 4) + 5 + local_8) = 0;
  }
  FUN_00585830();
  return;
}

