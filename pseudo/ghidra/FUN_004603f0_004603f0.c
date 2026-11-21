// FUN_004603f0  004603f0

undefined4 __fastcall FUN_004603f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x104) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 0x104));
  }
  return uVar1;
}

