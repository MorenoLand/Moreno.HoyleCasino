// FUN_00434f90  00434f90

int FUN_00434f90(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  do {
    if (3 < local_8) {
      return local_c;
    }
    FUN_005dcb00(local_8);
    piVar2 = (int *)FUN_0063aac0();
    if (*piVar2 != 0) {
      cVar1 = FUN_004349b0(local_8);
      if (cVar1 == '\0') {
        FUN_005dcb00(local_8);
        iVar3 = FUN_005d5a50();
        iVar4 = (**(code **)(*DAT_007906d0 + 0x2b0))();
        if (iVar3 < iVar4) goto LAB_00434faa;
      }
      local_c = local_c + 1;
    }
LAB_00434faa:
    local_8 = local_8 + 1;
  } while( true );
}

