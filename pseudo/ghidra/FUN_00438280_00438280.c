// FUN_00438280  00438280

undefined1 __fastcall FUN_00438280(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = FUN_00436a00(5);
  if (cVar2 == '\0') {
LAB_0043831f:
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 2) {
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 3) goto LAB_0043831f;
    }
    uVar1 = 1;
  }
  return uVar1;
}

