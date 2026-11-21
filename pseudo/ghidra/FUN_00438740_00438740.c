// FUN_00438740  00438740

undefined4 __fastcall FUN_00438740(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0xac4) != 0) ||
     (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 3)) {
    return 0;
  }
  cVar1 = FUN_00436a00(0);
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_00437970();
  if (cVar1 == '\0') {
    cVar1 = FUN_00437b50();
    if (((cVar1 == '\0') && (cVar1 = FUN_00431b50(), cVar1 == '\0')) &&
       (cVar1 = FUN_00436a00(0xd), cVar1 == '\0')) {
      return 0;
    }
  }
  return 1;
}

