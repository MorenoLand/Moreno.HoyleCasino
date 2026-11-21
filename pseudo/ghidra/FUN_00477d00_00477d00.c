// FUN_00477d00  00477d00

int FUN_00477d00(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  
  FUN_0047e3b0();
  iVar2 = FUN_0047bce0();
  iVar3 = FUN_004f67d0();
  iVar2 = iVar2 - iVar3;
  iVar3 = FUN_004c6a70();
  iVar4 = FUN_0047bc20();
  DAT_0079131c = iVar3 / iVar4;
  iVar3 = FUN_004f67d0();
  if (iVar3 < DAT_0079131c) {
    iVar3 = FUN_004f67d0();
    if (iVar3 + iVar2 < DAT_0079131c) {
      iVar3 = FUN_004f67d0();
      iVar4 = FUN_0047bc20();
      iVar4 = (iVar3 + iVar2) * iVar4;
      FUN_004c6c10(iVar4);
      FUN_004da300();
      iVar3 = FUN_0047bc20();
      FUN_004dc4d0(7,iVar3 * iVar2);
      sVar1 = FUN_004f6250(iVar2,1);
      local_14 = (int)sVar1;
      FUN_0047ec90(iVar4);
      DAT_00791300 = 0;
    }
    else {
      iVar2 = FUN_0047bc20();
      iVar2 = iVar2 * DAT_0079131c;
      FUN_004c6c10(iVar2);
      FUN_004da300();
      FUN_004dc4d0(9,0);
      FUN_004c7030(2);
      iVar3 = FUN_004f67d0();
      sVar1 = FUN_004f6210(DAT_0079131c - iVar3);
      local_14 = (int)sVar1;
      FUN_0047ec90(iVar2);
      DAT_00791300 = 7;
    }
  }
  else {
    iVar2 = FUN_0047bc20();
    iVar2 = iVar2 * DAT_0079131c;
    FUN_004c6c10(iVar2);
    FUN_004da300();
    FUN_004dc4d0(9,0);
    FUN_004c7030(2);
    sVar1 = FUN_004f5e80(DAT_0079131c);
    local_14 = (int)sVar1;
    FUN_0047ec90(iVar2);
    DAT_00791300 = 7;
  }
  return local_14;
}

