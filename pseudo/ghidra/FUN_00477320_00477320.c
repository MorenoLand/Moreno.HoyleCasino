// FUN_00477320  00477320

int FUN_00477320(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  
  FUN_0047e3b0();
  iVar2 = FUN_004c6a70();
  iVar3 = FUN_0047bc20();
  DAT_0079131c = iVar2 / iVar3;
  iVar2 = FUN_0047bc60();
  if (iVar2 * DAT_007912f0 < DAT_0079131c) {
    iVar2 = FUN_0047bc60();
    iVar3 = FUN_0047bc20();
    iVar2 = iVar2 * iVar3 * DAT_007912f0;
    FUN_004c6c10(iVar2);
    FUN_004da300();
    sVar1 = FUN_004f52a0();
    FUN_0047ec90(iVar2);
  }
  else {
    iVar2 = FUN_0047bc20();
    iVar2 = iVar2 * DAT_0079131c;
    FUN_004c6c10(iVar2);
    FUN_004da300();
    FUN_004dc4d0(9,0);
    FUN_004c7030(2);
    sVar1 = FUN_004f53c0(DAT_0079131c);
    FUN_0047ec90(iVar2);
  }
  local_10 = (int)sVar1;
  return local_10;
}

