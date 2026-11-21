// FUN_00630280  00630280

void FUN_00630280(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (DAT_0162ee84 != 0) {
    if (param_3 == 0) {
      local_8 = 0;
    }
    else {
      local_8 = FUN_0060c9a0();
      for (local_c = 0; local_c < local_8; local_c = local_c + 1) {
        local_10 = FUN_0060ca40(local_c);
        if (local_10 == param_3) {
          local_8 = local_c + 1;
          break;
        }
      }
    }
    local_10 = FUN_0060ca40(local_8);
    while ((local_10 != 0 && (local_10 != param_4))) {
      if (*(int *)(local_10 + 0x1a8) == param_1) {
        local_20 = *param_2;
        local_1c = param_2[1];
        local_18 = param_2[2];
        local_14 = param_2[3];
        iVar1 = FUN_005f84f0();
        iVar1 = -iVar1;
        iVar2 = FUN_005f84d0(iVar1);
        local_20 = local_20 + -iVar2;
        local_1c = local_1c + iVar1;
        local_18 = local_18 + -iVar2;
        local_14 = local_14 + iVar1;
        FUN_005f91b0(&local_20,1);
      }
      local_8 = local_8 + 1;
      local_10 = FUN_0060ca40(local_8);
    }
  }
  return;
}

