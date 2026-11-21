// FUN_00630130  00630130

void FUN_00630130(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (DAT_0162ee84 != 0) {
    local_8 = FUN_0060c9a0();
    local_8 = local_8 + -1;
    if (param_3 != 0) {
      local_c = FUN_0060c9a0();
      do {
        local_c = local_c + -1;
        if (local_c < 0) goto LAB_006301ad;
        local_10 = FUN_0060ca40(local_c);
      } while (local_10 != param_3);
      local_8 = local_c + -1;
    }
LAB_006301ad:
    for (local_c = local_8; -1 < local_c; local_c = local_c + -1) {
      local_10 = FUN_0060ca40(local_c);
      if ((local_10 != 0) && (*(int *)(local_10 + 0x1a8) == param_1)) {
        local_20 = *param_2;
        local_1c = param_2[1];
        local_18 = param_2[2];
        local_14 = param_2[3];
        iVar2 = FUN_005f84f0();
        iVar2 = -iVar2;
        iVar3 = FUN_005f84d0(iVar2);
        local_20 = local_20 + -iVar3;
        local_1c = local_1c + iVar2;
        local_18 = local_18 + -iVar3;
        local_14 = local_14 + iVar2;
        cVar1 = FUN_005f8ea0(&local_20,param_3);
        if (cVar1 != '\0') {
          return;
        }
      }
    }
  }
  return;
}

