// FUN_005d0ff0  005d0ff0

undefined4 __fastcall FUN_005d0ff0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [8];
  
  FUN_005d0c30(local_c,1);
  local_20 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_0064c560((double)param_1[3]);
  iVar1 = param_1[2];
  iVar3 = (**(code **)(*param_1 + 4))();
  if (iVar3 <= iVar1) {
    FUN_005e9f20("GetCreditsBet() < GetMaxCreditsCanBetForThisMachine()",
                 "..\\Casino\\casinomachinestate.cpp",0xcd);
  }
  if (param_1[1] < param_1[3]) {
    local_14 = 0;
    if (param_1[1] != 0) {
      local_14 = param_1[1];
      FUN_005d0a20();
    }
    local_10 = param_1[3] - local_14;
    piVar5 = (int *)FUN_005d0c30(local_28,local_10);
    local_1c = *piVar5;
    local_18 = piVar5[1];
    uVar7 = *(undefined8 *)piVar5;
    puVar6 = local_30;
    FUN_005dcb00(0,puVar6,local_1c,local_18);
    FUN_005d5a90(puVar6);
    cVar2 = FUN_0064c6a0(uVar7);
    if (cVar2 == '\0') {
      if (local_1c == 0) {
        local_20 = -local_18;
        local_1c = local_20 / 100;
        local_18 = local_20 % 100;
      }
      else {
        local_1c = -local_1c;
        local_18 = -local_18;
      }
      FUN_005d1420(local_1c,local_18);
      param_1[2] = param_1[2] + 1;
      uVar4 = 1;
    }
    else {
      FUN_005d0a20();
      uVar4 = 0;
    }
  }
  else {
    FUN_005d0a20();
    param_1[2] = param_1[2] + 1;
    uVar4 = 1;
  }
  return uVar4;
}

