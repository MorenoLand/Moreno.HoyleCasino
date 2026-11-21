// FUN_00477450  00477450

int FUN_00477450(char param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  
  local_10 = -99;
  FUN_0047e3b0();
  iVar2 = FUN_004c6a70();
  iVar3 = FUN_0047bc20();
  DAT_0079131c = iVar2 / iVar3;
  iVar2 = FUN_004f67d0();
  if (iVar2 < DAT_0079131c) {
    if (param_1 == '\0') {
      iVar2 = FUN_004f67d0();
      iVar3 = FUN_0047bc20();
      FUN_004c6c10(iVar2 * iVar3);
      FUN_004da300();
      FUN_004dc4d0(3,0);
      sVar1 = FUN_004f5cd0();
      local_10 = (int)sVar1;
      FUN_0047ec90(iVar2 * iVar3);
    }
    DAT_00791300 = 3;
  }
  else {
    if (param_1 == '\0') {
      iVar2 = FUN_0047bc20();
      iVar2 = iVar2 * DAT_0079131c;
      FUN_004c6c10(iVar2);
      FUN_004da300();
      FUN_004dc4d0(9,0);
      FUN_004c7030(2);
      sVar1 = FUN_004f5e80(DAT_0079131c);
      local_10 = (int)sVar1;
      FUN_0047ec90(iVar2);
    }
    DAT_00791300 = 7;
  }
  return local_10;
}

