// FUN_005178c0  005178c0

int FUN_005178c0(char param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_10;
  
  local_10 = -99;
  iVar2 = FUN_004f6840();
  FUN_0047e3b0();
  iVar3 = FUN_004c6a70();
  iVar4 = FUN_0047bc20();
  DAT_00793104 = iVar3 / iVar4;
  if (iVar2 < DAT_00793104) {
    if (param_1 == '\0') {
      iVar3 = FUN_0047bc20();
      FUN_004c6c10(iVar3 * iVar2);
      FUN_004da300();
      FUN_004dc4d0(10,0);
      FUN_004f4e20(iVar2);
      local_10 = -1;
      FUN_0047ec90(iVar3 * iVar2);
    }
    DAT_00793064 = 0;
  }
  else {
    if (param_1 == '\0') {
      iVar2 = FUN_0047bc20();
      iVar2 = iVar2 * DAT_00793104;
      FUN_004c6c10(iVar2);
      FUN_004da300();
      FUN_004dc4d0(9,0);
      FUN_004c7030(2);
      FUN_004f4e20(DAT_00793104);
      uVar5 = FUN_004c7050();
      sVar1 = FUN_004f4f80(uVar5);
      local_10 = (int)sVar1;
      FUN_0047ec90(iVar2);
    }
    DAT_00793064 = 6;
  }
  return local_10;
}

