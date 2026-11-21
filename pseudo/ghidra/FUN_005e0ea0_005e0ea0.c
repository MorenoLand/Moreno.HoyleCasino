// FUN_005e0ea0  005e0ea0

void __fastcall FUN_005e0ea0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_64;
  int local_60;
  int local_58;
  int aiStack_54 [20];
  
  local_64 = 0;
  iVar3 = *(int *)(param_1 + 0x98);
  for (local_58 = 0; local_58 < 0x14; local_58 = local_58 + 1) {
    aiStack_54[local_58] = -1;
  }
  do {
    if (local_64 == 0x14) {
      for (local_58 = 0; local_58 < 0x14; local_58 = local_58 + 1) {
        *(char *)(param_1 + 0x9c + iVar3 * 0x14 + local_58) = (char)aiStack_54[local_58];
        FUN_0062fde0(&DAT_006d505c,aiStack_54[local_58]);
      }
      FUN_0062fde0(&DAT_006bedd8);
      cVar2 = FUN_00635cb0(8);
      if ((cVar2 == '\0') || (DAT_00793584 != 0)) {
        FUN_005e1070();
        cVar2 = FUN_00635cb0(8);
        if (cVar2 != '\0') {
          for (local_58 = 0; iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_58 < iVar3;
              local_58 = local_58 + 1) {
            FUN_005dcb00(local_58);
            piVar4 = (int *)FUN_0063aac0();
            if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              FUN_005e1410(local_58);
            }
          }
        }
      }
      else {
        FUN_005837d0();
      }
      return;
    }
    local_60 = FUN_0062fbf0(0x50);
    local_60 = local_60 + 1;
    for (local_58 = 0; local_58 < 0x14; local_58 = local_58 + 1) {
      if (local_60 == aiStack_54[local_58]) {
        local_60 = -1;
        break;
      }
    }
    if (local_60 != -1) {
      aiStack_54[local_64] = local_60;
      local_64 = local_64 + 1;
    }
  } while( true );
}

