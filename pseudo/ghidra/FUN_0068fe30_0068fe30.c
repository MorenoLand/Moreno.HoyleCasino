// FUN_0068fe30  0068fe30

undefined4 __fastcall FUN_0068fe30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = StartPage(*(HDC *)(param_1 + 0x18));
    if (iVar2 < 1) {
      FUN_0068fb10("StartPage");
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

