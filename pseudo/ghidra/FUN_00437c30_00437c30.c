// FUN_00437c30  00437c30

undefined4 __fastcall FUN_00437c30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00436a00(4);
  if (cVar1 == '\0') {
LAB_00437cc6:
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 7) {
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 0xb) goto LAB_00437cc6;
    }
    uVar2 = 1;
  }
  return uVar2;
}

