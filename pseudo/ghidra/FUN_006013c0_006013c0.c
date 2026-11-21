// FUN_006013c0  006013c0

void __fastcall FUN_006013c0(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 1) {
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}

