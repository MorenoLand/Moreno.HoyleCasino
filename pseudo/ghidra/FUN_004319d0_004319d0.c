// FUN_004319d0  004319d0

undefined4 __fastcall FUN_004319d0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00436a00(0xc);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 2)) {
    return 1;
  }
  return 0;
}

