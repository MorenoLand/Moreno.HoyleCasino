// FUN_00558c10  00558c10

int __fastcall FUN_00558c10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054c460(*(undefined4 *)(DAT_007947e0 + 0x4f14),param_1 + 0x22);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  FUN_00554950();
  if (*(int *)(param_1 + 0x14) == 1) {
    FUN_0054d6a0(*(undefined4 *)(DAT_007947e0 + 0x4f14),param_1 + 0x22);
  }
  return iVar1;
}

