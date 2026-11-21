// FUN_00517310  00517310

int FUN_00517310(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  cVar1 = FUN_00516dd0();
  if (cVar1 == '\0') {
    if (DAT_00793032 == '\0') {
      local_8 = FUN_0047bce0();
    }
    else {
      local_8 = FUN_0047bce0();
      iVar2 = FUN_0047bca0();
      local_8 = local_8 - iVar2;
    }
  }
  else if (DAT_00793032 == '\0') {
    local_8 = FUN_0047bd20();
  }
  else {
    local_8 = FUN_0047bd20();
    iVar2 = FUN_0047bca0();
    local_8 = local_8 - iVar2;
  }
  FUN_0047e3b0();
  iVar2 = FUN_004c6a70();
  iVar3 = FUN_0047bc20();
  DAT_00793104 = iVar2 / iVar3;
  iVar2 = FUN_004f67d0();
  DAT_00793104 = DAT_00793104 - iVar2;
  if (local_8 < DAT_00793104) {
    local_c = FUN_0047bc20();
    local_c = local_c * local_8;
  }
  else {
    local_c = FUN_0047bc20();
    local_c = local_c * DAT_00793104;
    if (local_c < 0) {
      local_c = 0;
    }
  }
  return local_c;
}

