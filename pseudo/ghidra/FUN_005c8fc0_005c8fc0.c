// FUN_005c8fc0  005c8fc0

void __fastcall FUN_005c8fc0(int param_1)

{
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0xe0) = 0;
  for (local_8 = 0; local_8 < **(int **)(param_1 + 0x10); local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x18 + local_8 * 4) = 0xffffffff;
  }
  FUN_005d0a20(*(int *)(param_1 + 4) - *(int *)(param_1 + 8));
  return;
}

