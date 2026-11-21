// FUN_00431970  00431970

undefined4 __fastcall FUN_00431970(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00436a00(0xe);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xb)) {
    return 1;
  }
  return 0;
}

