// FUN_005a1ff0  005a1ff0

undefined4 __fastcall FUN_005a1ff0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xec) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 0xec));
  }
  return uVar1;
}

