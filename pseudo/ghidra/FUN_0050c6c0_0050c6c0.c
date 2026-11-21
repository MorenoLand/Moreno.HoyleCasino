// FUN_0050c6c0  0050c6c0

undefined4 FUN_0050c6c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_007926f8 = FUN_0047e3b0();
  cVar1 = FUN_004f6640();
  if (cVar1 == '\0') {
    iVar2 = FUN_0062fbf0(7);
    if ((iVar2 == 0) && (cVar1 = FUN_004f66e0(), cVar1 != '\0')) {
      iVar2 = FUN_0062fbf0(3);
      FUN_004c79d0(iVar2 + 1);
      return 4;
    }
    iVar2 = FUN_0062fbf0(4);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_0062fbf0(3);
      FUN_004c79d0(iVar2 + 1);
      uVar3 = 3;
    }
  }
  else {
    iVar2 = FUN_0062fbf0(7);
    if (iVar2 == 0) {
      iVar2 = FUN_0062fbf0(3);
      FUN_004c79d0(iVar2 + 1);
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

