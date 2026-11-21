// FUN_00437b50  00437b50

uint __fastcall FUN_00437b50(int param_1)

{
  char cVar1;
  uint uVar2;
  
  if (((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 2) ||
      (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 3)) ||
     (uVar2 = *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0), uVar2 == 0xc)) {
    cVar1 = FUN_00436a00(0x11);
    uVar2 = 0;
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return uVar2 & 0xffffff00;
}

