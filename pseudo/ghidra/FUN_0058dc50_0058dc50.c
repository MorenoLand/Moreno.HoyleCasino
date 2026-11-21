// FUN_0058dc50  0058dc50

undefined4 __fastcall FUN_0058dc50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar1 = FUN_00636690();
  }
  else {
    iVar2 = FUN_0058a470();
    if (iVar2 == 0x14) {
      uVar1 = 2;
    }
    else {
      uVar1 = 4;
    }
  }
  return uVar1;
}

