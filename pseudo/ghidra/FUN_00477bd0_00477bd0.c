// FUN_00477bd0  00477bd0

int FUN_00477bd0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  
  FUN_0047e3b0();
  iVar2 = FUN_004c6a70();
  iVar3 = FUN_0047bc20();
  DAT_0079131c = iVar2 / iVar3;
  if (param_1 < DAT_0079131c) {
    iVar2 = FUN_0047bc20();
    iVar2 = iVar2 * param_1;
    FUN_004c6c10(iVar2);
    FUN_004da300();
    FUN_004dc4d0(6,iVar2);
    sVar1 = FUN_004f5c40(param_1,1);
    FUN_0047ec90(iVar2);
    DAT_00791300 = 0;
  }
  else {
    iVar2 = FUN_0047bc20();
    iVar2 = iVar2 * DAT_0079131c;
    FUN_004c6c10(iVar2);
    FUN_004da300();
    FUN_004dc4d0(9,0);
    FUN_004c7030(2);
    sVar1 = FUN_004f5a80(DAT_0079131c);
    FUN_0047ec90(iVar2);
    DAT_00791300 = 7;
  }
  local_10 = (int)sVar1;
  return local_10;
}

