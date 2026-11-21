// FUN_00549640  00549640

undefined4 __fastcall FUN_00549640(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_00548b90();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_0054a740(*(undefined4 *)(param_1 + 0x20));
    if (cVar1 == '\0') {
      iVar3 = FUN_00548f80(*(undefined4 *)(param_1 + 0x20));
      if (iVar3 < 6) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

