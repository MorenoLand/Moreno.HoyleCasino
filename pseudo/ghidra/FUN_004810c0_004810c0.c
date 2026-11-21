// FUN_004810c0  004810c0

undefined4 __thiscall FUN_004810c0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_005dcb00(0,param_1,0);
  iVar1 = FUN_005d5a50();
  if (*(char *)(DAT_007947e0 + 0x4f04) == '\0') {
    uVar2 = 0;
  }
  else if (iVar1 < 1) {
    uVar2 = 0;
  }
  else if (param_2 == 1) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00481550(0);
    if ((int)((param_2 == 2) + 1) < iVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

