// FUN_00431b50  00431b50

undefined4 __fastcall FUN_00431b50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00436a00(0x12);
  if (cVar1 == '\0') {
LAB_00431c66:
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 2) {
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 3) {
        if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 0xb) {
          if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 0xc) goto LAB_00431c66;
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

