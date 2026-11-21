// FUN_00431af0  00431af0

undefined4 __fastcall FUN_00431af0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00436a00(0x10);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7)) {
    return 1;
  }
  return 0;
}

