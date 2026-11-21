// FUN_00407bb0  00407bb0

undefined4 __fastcall FUN_00407bb0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10dc) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 0x10dc));
  }
  return uVar1;
}

