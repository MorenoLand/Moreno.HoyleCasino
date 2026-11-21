// FUN_00540af0  00540af0

undefined4 __fastcall FUN_00540af0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xe8) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 0xe8));
  }
  return uVar1;
}

