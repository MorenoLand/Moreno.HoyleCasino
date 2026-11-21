// FUN_00539ae0  00539ae0

void FUN_00539ae0(undefined4 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  int local_14;
  int local_10;
  
  iVar2 = (**(code **)(*DAT_007933e8 + 0x2b0))();
  iVar3 = (**(code **)(*DAT_007933e8 + 0x2b4))();
  piVar4 = (int *)FUN_005dcb00(param_1);
  iVar5 = (**(code **)(*piVar4 + 0x18))();
  iVar6 = FUN_005dcb00(param_1);
  local_14 = *(int *)(iVar6 + 0x4a8);
  if (local_14 < -4) {
    local_14 = FUN_0062fbf0(5);
    local_14 = -1 - local_14;
  }
  iVar6 = FUN_0062fbf0(5);
  iVar7 = FUN_0062fbf0(5);
  dVar10 = (double)(iVar5 / (iVar7 + 1)) * (double)((iVar6 + 1) * iVar2);
  dVar9 = (double)(local_14 * iVar2);
  iVar6 = FUN_0062fbf0(5);
  local_10 = FUN_00686cc0(iVar5 / (iVar6 + 1),dVar9,dVar10);
  for (local_10 = local_10 / 2; local_10 % 5 != 0; local_10 = local_10 + 1) {
  }
  if (local_10 < iVar2) {
    local_10 = iVar2;
  }
  if (iVar3 < local_10) {
    local_10 = iVar3;
  }
  while( true ) {
    cVar1 = FUN_00539ed0(param_1,local_10);
    if (cVar1 != '\0') break;
    local_10 = local_10 + -5;
  }
  if (local_10 < iVar2) {
    local_10 = 0;
  }
  if (iVar3 < local_10) {
    FUN_005e9f20("theBet <= maxBet","..\\Casino\\threecardpokerai.cpp",0x41);
  }
  uVar8 = FUN_0064c8a0(local_10,0);
  *param_2 = uVar8;
  return;
}

