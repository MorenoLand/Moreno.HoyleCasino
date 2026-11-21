// FUN_00657cf0  00657cf0

void FUN_00657cf0(void)

{
  int iVar1;
  int *piVar2;
  int local_28;
  int local_24;
  char local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = FUN_00657bb0();
  local_c = local_c + 1;
  local_8 = FUN_00657bd0();
  FUN_00606350(0);
  local_14 = FUN_005f5400();
  local_14 = local_14 + -0x472;
  FUN_00606350(9);
  iVar1 = FUN_005f5400();
  if (local_8 < 0x16) {
    local_14 = 1;
    local_10 = 0x15;
  }
  else if (local_c < local_14) {
    if (local_c + -4 < 1) {
      local_24 = 1;
    }
    else {
      local_24 = local_c + -4;
    }
    local_14 = local_24;
    local_10 = local_24 + 9;
  }
  else {
    if (local_c <= iVar1 + -0x472) {
      return;
    }
    if (local_8 < local_c + 5) {
      local_28 = local_8;
    }
    else {
      local_28 = local_c + 5;
    }
    local_10 = local_28;
    local_14 = local_28 + -9;
  }
  for (local_18 = 0; local_18 < 0x15; local_18 = local_18 + 1) {
    sprintf(local_1c,"%d",local_14 + local_18);
    piVar2 = (int *)FUN_00606350(local_18);
    (**(code **)(*piVar2 + 0xe0))(local_1c);
    iVar1 = local_14 + 0x472 + local_18;
    FUN_00606350(local_18);
    FUN_005f53e0(iVar1);
  }
  return;
}

