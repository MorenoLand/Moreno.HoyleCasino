// FUN_00446300  00446300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00446300(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_20 = (**(code **)(*DAT_0079070c + 0x2b0))();
  local_10 = (**(code **)(*DAT_0079070c + 0x2b4))();
  piVar2 = (int *)FUN_005dcb00(param_1);
  local_2c = (**(code **)(*piVar2 + 0x18))();
  FUN_005dcb00(param_1);
  local_18 = FUN_005d5a50();
  local_c = FUN_005da8e0();
  local_8 = FUN_005dac90();
  piVar2 = (int *)FUN_005daa20(local_34);
  local_1c = *piVar2;
  local_24 = local_20;
  iVar3 = FUN_005dcb00(param_1);
  local_28 = *(int *)(iVar3 + 0x4a8);
  if (local_28 < -4) {
    local_28 = FUN_0062fbf0(5);
    local_28 = -1 - local_28;
  }
  if (local_18 < local_20 * 3) {
    FUN_005e9f20("bank >= minBet * 3","..\\Casino\\letitrideai.cpp",0x4c);
  }
  if (local_18 < local_10) {
    local_14 = local_18;
  }
  else {
    local_14 = local_10;
  }
  if (local_c < 4) {
    if (local_c == 0) {
      if ((local_18 < local_1c) && (local_1c - local_18 <= local_14)) {
        local_24 = (local_1c - local_18) + local_20;
      }
    }
    else if (local_18 < local_1c) {
      if (local_14 < local_1c - local_18) {
        piVar2 = (int *)FUN_005dac40(local_3c,param_1);
        if (_DAT_006b2c38 <= (double)*piVar2 / (double)local_1c) {
          iVar3 = FUN_0062fbf0(3);
          local_24 = local_14 / (iVar3 + 1);
        }
      }
      else {
        iVar5 = local_1c - local_18;
        iVar3 = FUN_0062fbf0(5);
        local_24 = iVar5 / (iVar3 + 1);
      }
    }
    for (local_24 = local_24 / 3; local_24 % 5 != 0; local_24 = local_24 + 1) {
    }
    if (local_24 < local_20) {
      local_24 = local_20;
    }
    if (local_10 < local_24) {
      local_24 = local_10;
    }
    while (cVar1 = FUN_00446680(param_1,local_24), cVar1 == '\0') {
      local_24 = local_24 + -5;
    }
    if ((local_24 < local_20) || (local_10 < local_24)) {
      FUN_005e9f20("theBet >= minBet && theBet <= maxBet","..\\Casino\\letitrideai.cpp",0x78);
    }
    if (local_24 != 0) {
      return local_24;
    }
  }
  piVar2 = (int *)FUN_005dcb00(param_1);
  piVar4 = (int *)FUN_005dcb00(param_1);
  FUN_0062fbf0(5);
  (**(code **)(*piVar4 + 0x18))();
  FUN_0062fbf0(5);
  (**(code **)(*piVar2 + 0x18))();
  FUN_0062fbf0(5);
  local_24 = FUN_00686cc0();
  for (local_24 = local_24 / 3; local_24 % 5 != 0; local_24 = local_24 + -1) {
  }
  if (local_24 < local_20) {
    local_24 = local_20;
  }
  if (local_10 < local_24) {
    local_24 = local_10;
  }
  while (cVar1 = FUN_00446680(param_1,local_24), cVar1 == '\0') {
    local_24 = local_24 + -5;
  }
  if ((local_24 < local_20) || (local_10 < local_24)) {
    FUN_005e9f20("theBet >= minBet && theBet <= maxBet","..\\Casino\\letitrideai.cpp",0x8e);
  }
  return local_24;
}

