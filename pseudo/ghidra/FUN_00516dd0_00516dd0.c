// FUN_00516dd0  00516dd0

int FUN_00516dd0(void)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = FUN_0047e190();
  if (iVar1 == 7) {
    if (DAT_00793078 < 7) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = FUN_0047e190();
    iVar1 = 5 - (uint)(iVar1 != 1);
    uVar2 = (uint3)((uint)iVar1 >> 8);
    if (DAT_00793078 < iVar1) {
      iVar1 = (uint)uVar2 << 8;
    }
    else {
      iVar1 = CONCAT31(uVar2,1);
    }
  }
  return iVar1;
}

