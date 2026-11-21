// FUN_00431a30  00431a30

undefined4 __fastcall FUN_00431a30(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00436a00(0xd);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 3)) {
    return 1;
  }
  return 0;
}

