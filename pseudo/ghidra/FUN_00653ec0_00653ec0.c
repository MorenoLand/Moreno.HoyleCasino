// FUN_00653ec0  00653ec0

void __fastcall FUN_00653ec0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *_Str2;
  int local_14;
  int local_10;
  int local_8;
  
  local_8 = 0;
  do {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x56c) + 0xb8))();
    if (iVar3 <= local_8) {
      FUN_00654100();
      return;
    }
    local_10 = 0;
    while( true ) {
      iVar3 = (**(code **)(*DAT_0162ee84 + 0xec))();
      if (iVar3 <= local_10) break;
      iVar3 = FUN_0060ca40(local_8);
      if (*(char *)(*(int *)(iVar3 + 0x24) + local_10) != '\0') {
        bVar1 = false;
        local_14 = 0;
        while( true ) {
          iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
          if (iVar3 <= local_14) break;
          piVar4 = (int *)FUN_0063aac0();
          if (*piVar4 == 2) {
LAB_00653fdd:
            bVar2 = true;
          }
          else {
            piVar4 = (int *)FUN_0063aac0();
            if (*piVar4 == 3) goto LAB_00653fdd;
            bVar2 = false;
          }
          if (bVar2) {
            iVar3 = FUN_0060ca40(local_8);
            _Str2 = (char *)FUN_00520e60();
            iVar3 = strcmp((char *)(iVar3 + 0x14),_Str2);
            if (iVar3 == 0) {
              bVar1 = true;
              (**(code **)(**(int **)(DAT_0162ee84[0x16] + local_14 * 4) + 4))(local_10);
              FUN_0063b0a0();
              break;
            }
          }
          local_14 = local_14 + 1;
        }
        if (!bVar1) {
          iVar3 = FUN_0060ca40(local_8);
          FUN_0063ab10(iVar3 + 0x14);
          (**(code **)(*(int *)(param_1 + 0x1c0) + 4))(local_10);
          FUN_0063b0a0();
        }
      }
      local_10 = local_10 + 1;
    }
    local_8 = local_8 + 1;
  } while( true );
}

