// FUN_0053a3c0  0053a3c0

void FUN_0053a3c0(undefined4 param_1,undefined8 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_3c [8];
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_005dcb00(param_1);
  local_14 = FUN_005d5a50();
  local_20 = (**(code **)(*DAT_007933e8 + 0x2b0))();
  local_c = (**(code **)(*DAT_007933e8 + 0x2b4))();
  local_8 = FUN_005da8a0();
  local_28 = FUN_005dac90();
  local_18 = FUN_005da8c0();
  piVar2 = (int *)FUN_005daa20(local_3c);
  local_1c = *piVar2;
  iVar3 = FUN_005dcb00(param_1);
  local_2c = *(int *)(iVar3 + 0x4a8);
  local_34 = 0;
  local_10 = 0;
  piVar2 = (int *)FUN_005dcb00(param_1);
  local_30 = (**(code **)(*piVar2 + 0x18))();
  local_24 = local_20;
  if (local_14 < local_c) {
    local_10 = local_14;
  }
  else {
    local_10 = local_c;
  }
  if (local_2c < -4) {
    local_2c = FUN_0062fbf0(5);
    local_2c = -1 - local_2c;
  }
  if (local_8 - local_18 < 4) {
    if (local_8 == local_18) {
      if ((local_14 < local_1c) && (local_1c - local_14 <= local_10)) {
        local_34 = (local_1c - local_14) + local_20;
      }
    }
    else if (local_14 < local_1c) {
      if (local_10 < local_1c - local_14) {
        cVar1 = FUN_0053a140(param_1);
        if (cVar1 != '\0') {
          iVar3 = FUN_0062fbf0(3);
          local_34 = local_10 / (iVar3 + 1);
        }
      }
      else {
        iVar4 = local_1c - local_14;
        iVar3 = FUN_0062fbf0(5);
        local_34 = iVar4 / (iVar3 + 1);
      }
    }
    for (; local_34 % 5 != 0; local_34 = local_34 + 1) {
    }
    if (local_34 != 0) {
      if (local_34 < local_20) {
        local_34 = local_20;
      }
      if (local_c < local_34) {
        local_34 = local_c;
      }
      while (cVar1 = FUN_00539ed0(param_1,local_34), cVar1 == '\0') {
        local_34 = local_34 + -5;
      }
      if ((local_34 < local_20) || (local_c < local_34)) {
        FUN_005e9f20("tempBet >= minBet && tempBet <= maxBet","..\\Casino\\threecardpokerai.cpp",
                     0x123);
      }
      uVar5 = FUN_0064c8a0(local_34,0);
      *param_2 = uVar5;
      return;
    }
  }
  FUN_0062fbf0(5);
  FUN_0062fbf0(5);
  FUN_0062fbf0(5);
  local_24 = FUN_00686cc0();
  for (local_24 = local_24 / 2; local_24 % 5 != 0; local_24 = local_24 + 1) {
  }
  if (local_24 < local_20) {
    local_24 = local_20;
  }
  if (local_c < local_24) {
    local_24 = local_c;
  }
  while (cVar1 = FUN_00539ed0(param_1,local_24), cVar1 == '\0') {
    local_24 = local_24 + -5;
  }
  if (local_24 < local_20) {
    local_24 = 0;
  }
  if (local_c < local_24) {
    FUN_005e9f20("theBet <= maxBet","..\\Casino\\threecardpokerai.cpp",0x13e);
  }
  uVar5 = FUN_0064c8a0(local_24,0);
  *param_2 = uVar5;
  return;
}

