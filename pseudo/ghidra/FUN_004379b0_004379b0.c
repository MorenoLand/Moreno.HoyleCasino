// FUN_004379b0  004379b0

undefined4 __fastcall FUN_004379b0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xacc) == *(int *)(param_1 + 0xad0)) {
    if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 4) &&
       (cVar1 = FUN_00436a00(8), cVar1 != '\0')) {
      return 1;
    }
    if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6) &&
       (cVar1 = FUN_00436a00(9), cVar1 != '\0')) {
      return 1;
    }
    if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8) &&
       (cVar1 = FUN_00436a00(10), cVar1 != '\0')) {
      return 1;
    }
    if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 10) &&
       (cVar1 = FUN_00436a00(0xb), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}

