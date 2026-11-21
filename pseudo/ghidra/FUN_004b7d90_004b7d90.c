// FUN_004b7d90  004b7d90

undefined4 FUN_004b7d90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0047e190();
  if (iVar1 == 5) {
    if (DAT_00791e74 < 2) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_0047e190();
    if (iVar1 == 6) {
      if (DAT_00791e74 < 3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else if (DAT_00791e74 < 4) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

