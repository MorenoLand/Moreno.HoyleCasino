// FUN_00517770  00517770

int FUN_00517770(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_10;
  
  FUN_0047e3b0();
  DAT_00793032 = 1;
  iVar2 = FUN_004c6a70();
  iVar3 = FUN_0047bc20();
  DAT_00793104 = iVar2 / iVar3;
  iVar2 = FUN_0047bca0();
  if (iVar2 < DAT_00793104) {
    iVar2 = FUN_0047bca0();
    iVar3 = FUN_0047bc20();
    iVar2 = iVar2 * iVar3;
    FUN_004c6c10(iVar2);
    FUN_004da300();
    FUN_004dc4d0(6,iVar2);
    uVar5 = 1;
    uVar4 = FUN_0047bca0(1);
    sVar1 = FUN_004f5c40(uVar4,uVar5);
    FUN_0047ec90(iVar2);
    DAT_00793064 = 0;
  }
  else {
    iVar2 = FUN_0047bc20();
    iVar2 = iVar2 * DAT_00793104;
    FUN_004c6c10(iVar2);
    FUN_004da300();
    FUN_004dc4d0(9,0);
    FUN_004c7030(2);
    sVar1 = FUN_004f5a80(DAT_00793104);
    FUN_0047ec90(iVar2);
    DAT_00793064 = 6;
  }
  local_10 = (int)sVar1;
  return local_10;
}

