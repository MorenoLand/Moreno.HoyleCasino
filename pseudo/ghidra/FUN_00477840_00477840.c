// FUN_00477840  00477840

int FUN_00477840(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_007912e9 == '\0') {
    local_8 = FUN_0047bce0();
  }
  else {
    local_8 = FUN_0047bd20();
  }
  FUN_0047e3b0();
  iVar1 = FUN_004c6a70();
  iVar2 = FUN_0047bc20();
  DAT_0079131c = iVar1 / iVar2;
  iVar1 = FUN_004f67d0();
  DAT_0079131c = DAT_0079131c - iVar1;
  if (local_8 < DAT_0079131c) {
    local_c = FUN_0047bc20();
    local_c = local_c * local_8;
  }
  else {
    local_c = FUN_0047bc20();
    local_c = local_c * DAT_0079131c;
    if (local_c < 0) {
      local_c = 0;
    }
  }
  return local_c;
}

