// FUN_0047e1d0  0047e1d0

undefined4 __fastcall FUN_0047e1d0(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(DAT_007947e0 + 0x4f18) == 0) || (*(int *)(DAT_007947e0 + 0x4f18) == 1)) ||
     (*(int *)(DAT_007947e0 + 0x4f18) == 2)) {
    uVar1 = 2;
  }
  else if ((*(int *)(DAT_007947e0 + 0x4f18) == 3) || (*(int *)(DAT_007947e0 + 0x4f18) == 4)) {
    uVar1 = 1;
  }
  else if ((*(int *)(DAT_007947e0 + 0x4f18) == 5) || (*(int *)(DAT_007947e0 + 0x4f18) == 6)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x464);
  }
  return uVar1;
}

