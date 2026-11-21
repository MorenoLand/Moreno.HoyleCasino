// FUN_00431a90  00431a90

undefined4 __fastcall FUN_00431a90(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00436a00(0xf);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xc)) {
    return 1;
  }
  return 0;
}

