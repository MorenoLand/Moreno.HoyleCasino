// FUN_005b4ed0  005b4ed0

undefined4 __fastcall FUN_005b4ed0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x5b8) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 0x5b8));
  }
  return uVar1;
}

