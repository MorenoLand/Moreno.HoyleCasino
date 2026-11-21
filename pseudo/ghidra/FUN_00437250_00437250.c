// FUN_00437250  00437250

undefined4 __fastcall FUN_00437250(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xac4) == 0) {
    if (((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 2) &&
        (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 3)) &&
       (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 0xc)) {
      return 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

