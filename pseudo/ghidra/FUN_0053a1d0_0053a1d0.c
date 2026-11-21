// FUN_0053a1d0  0053a1d0

void FUN_0053a1d0(undefined4 param_1,undefined8 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_10;
  
  iVar2 = (**(code **)(*DAT_007933e8 + 0x2b0))();
  iVar3 = (**(code **)(*DAT_007933e8 + 0x2b4))();
  piVar4 = (int *)FUN_005dcb00(param_1);
  iVar5 = (**(code **)(*piVar4 + 0x18))();
  FUN_005dcb00(param_1);
  iVar6 = FUN_0062fbf0(10);
  if ((iVar6 < 7) || (*param_3 == 0)) {
    FUN_0062fbf0(5);
    FUN_0062fbf0(5);
    iVar6 = FUN_0062fbf0(5);
    iVar5 = iVar5 / (iVar6 + 1);
    local_10 = FUN_00686cc0();
    iVar6 = FUN_0062fbf0(2);
    if (iVar6 == 1) {
      local_10 = local_10 / 3;
      iVar6 = local_10;
    }
    else {
      local_10 = local_10 / 2;
      iVar6 = local_10;
    }
    for (; local_10 % 5 != 0; local_10 = local_10 + 1) {
    }
    if (local_10 < iVar2) {
      local_10 = iVar2;
    }
    if (iVar3 < local_10) {
      local_10 = iVar3;
    }
    while (cVar1 = FUN_00539f00(param_1,local_10,*param_3), cVar1 == '\0') {
      local_10 = local_10 + -5;
    }
    if (local_10 < iVar2) {
      local_10 = 0;
    }
    if (iVar3 < local_10) {
      FUN_005e9f20("theBet <= maxBet","..\\Casino\\threecardpokerai.cpp",0xe3,iVar6,iVar5);
    }
    uVar7 = FUN_0064c8a0(local_10,0);
    *param_2 = uVar7;
  }
  return;
}

