// FUN_00426230  00426230

undefined4 __fastcall FUN_00426230(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 0xa0));
  }
  return uVar1;
}

