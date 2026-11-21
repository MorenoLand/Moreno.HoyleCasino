// FUN_0058a8c0  0058a8c0

void __fastcall FUN_0058a8c0(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_0058a550();
  FUN_0058acf0();
  **(undefined1 **)(*(int *)(param_1 + 0x3b68) + 4) =
       *(undefined1 *)(param_1 + 0x328 + *(int *)(param_1 + 0x3c08) * 0xe10 + iVar1 * 0x24);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3b68) + 4) + 1) =
       *(undefined1 *)(param_1 + *(int *)(param_1 + 0x3c08) * 0xe10 + 0x329 + iVar1 * 0x24);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3b68) + 4) + 2) =
       *(undefined1 *)(param_1 + *(int *)(param_1 + 0x3c08) * 0xe10 + 0x32a + iVar1 * 0x24);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3b68) + 4) + 3) =
       *(undefined1 *)(param_1 + *(int *)(param_1 + 0x3c08) * 0xe10 + 0x32b + iVar1 * 0x24);
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3b68) + 4) + 5 + local_8) =
         *(undefined1 *)
          (param_1 + *(int *)(param_1 + 0x3c08) * 0xe10 + iVar1 * 0x24 + 0x32d + local_8);
  }
  FUN_00589290();
  return;
}

