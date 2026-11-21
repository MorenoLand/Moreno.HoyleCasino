// FUN_005c9050  005c9050

void __fastcall FUN_005c9050(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  *(undefined1 *)(param_1 + 0x14) = 1;
  for (local_8 = 0; local_8 < **(int **)(param_1 + 0x10); local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x18 + local_8 * 4) < 0) {
      iVar1 = FUN_0062fbf0(*(int *)(*(int *)(param_1 + 0x10) + 0x20 + local_8 * 0x7c) + -1);
      *(int *)(param_1 + 0x18 + local_8 * 4) = -iVar1;
    }
  }
  return;
}

