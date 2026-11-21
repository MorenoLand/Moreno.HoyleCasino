// FUN_004084f0  004084f0

void FUN_004084f0(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_8;
  
  local_8 = 0;
  do {
    if (4 < local_8) {
      return;
    }
    iVar2 = FUN_005dcb00(local_8);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 2) {
LAB_00408555:
        bVar1 = true;
      }
      else {
        piVar3 = (int *)FUN_0063aac0();
        if (*piVar3 == 3) goto LAB_00408555;
        bVar1 = false;
      }
      if (bVar1) {
        FUN_00408580(local_8);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

