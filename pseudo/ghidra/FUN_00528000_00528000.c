// FUN_00528000  00528000

undefined4 __fastcall FUN_00528000(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd38) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005dcb00(*(undefined4 *)(param_1 + 0xd38));
  }
  return uVar1;
}

