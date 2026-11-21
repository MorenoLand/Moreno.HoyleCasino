// FUN_004318b0  004318b0

undefined4 __fastcall FUN_004318b0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00436a00(6);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6)) {
    return 1;
  }
  return 0;
}

