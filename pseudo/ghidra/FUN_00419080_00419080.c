// FUN_00419080  00419080

undefined4 __fastcall FUN_00419080(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4d0) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 0x4d0));
  }
  return uVar1;
}

