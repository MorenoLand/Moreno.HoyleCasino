// FUN_004347f0  004347f0

undefined4 __fastcall FUN_004347f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xad8) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 0xad8));
  }
  return uVar1;
}

