// FUN_00569fe0  00569fe0

int __fastcall FUN_00569fe0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005592a0(*(undefined4 *)(DAT_007947e0 + 0x4f14),param_1 + 0x24);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x2f) = 1;
  }
  FUN_00561e20();
  if (*(int *)(param_1 + 0x14) == 1) {
    FUN_0055a4e0(*(undefined4 *)(DAT_007947e0 + 0x4f14),param_1 + 0x24);
  }
  return iVar1;
}

