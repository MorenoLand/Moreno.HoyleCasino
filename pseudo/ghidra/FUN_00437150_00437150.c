// FUN_00437150  00437150

undefined4 __fastcall FUN_00437150(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xac4) == 0) {
    if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 7) &&
       (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 0xb)) {
      return 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

