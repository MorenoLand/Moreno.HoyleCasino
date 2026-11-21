// FUN_0041dd80  0041dd80

int FUN_0041dd80(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  int local_14;
  int local_10;
  
  iVar2 = (**(code **)(*DAT_00790354 + 0x2b0))();
  iVar3 = (**(code **)(*DAT_00790354 + 0x2b4))();
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
  dVar9 = (double)(iVar5 / (iVar7 + 1)) * (double)((iVar6 + 1) * iVar2);
  dVar8 = (double)(local_14 * iVar2);
  iVar6 = FUN_0062fbf0(5);
  local_10 = FUN_00686cc0(iVar5 / (iVar6 + 1),dVar8,dVar9);
  for (local_10 = local_10 / 3; local_10 % 5 != 0; local_10 = local_10 + 1) {
  }
  if (local_10 < iVar2) {
    local_10 = iVar2;
  }
  if (iVar3 < local_10) {
    local_10 = iVar3;
  }
  while( true ) {
    cVar1 = FUN_0041e450(param_1,local_10);
    if (cVar1 != '\0') break;
    local_10 = local_10 + -5;
  }
  if ((local_10 < iVar2) || (iVar3 < local_10)) {
    FUN_005e9f20("theBet >= minBet && theBet <= maxBet","..\\Casino\\caribbeanstudai.cpp",0x37);
  }
  return local_10;
}

