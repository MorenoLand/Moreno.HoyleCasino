// FUN_005b7220  005b7220

void FUN_005b7220(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  undefined4 local_14 [4];
  
  local_14[0] = 2;
  local_14[1] = 0;
  local_14[2] = 1;
  local_14[3] = 3;
  local_18 = 0;
  do {
    if (3 < local_18) {
      return;
    }
    FUN_005dcb00(local_14[local_18]);
    piVar2 = (int *)FUN_0063aac0();
    if (*piVar2 != 0) {
      FUN_005dcb00(local_14[local_18]);
      piVar2 = (int *)FUN_0063aac0();
      if (*piVar2 == 2) {
LAB_005b72d3:
        bVar1 = true;
      }
      else {
        piVar2 = (int *)FUN_0063aac0();
        if (*piVar2 == 3) goto LAB_005b72d3;
        bVar1 = false;
      }
      if (bVar1) {
        iVar3 = FUN_005dcb00(local_14[local_18]);
        *(undefined1 *)(iVar3 + 0x4a1) = 1;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

