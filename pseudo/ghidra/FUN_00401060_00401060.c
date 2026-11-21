// FUN_00401060  00401060

int FUN_00401060(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  int local_1c;
  int local_14;
  
  iVar1 = (**(code **)(*DAT_007902ec + 0x2b0))();
  iVar2 = (**(code **)(*DAT_007902ec + 0x2b4))();
  iVar3 = FUN_005dcb00(param_1);
  local_14 = *(int *)(iVar3 + 0x4a8);
  FUN_005dcb00(param_1);
  iVar3 = FUN_005d5a50();
  iVar4 = FUN_004011e0(param_1);
  if (iVar3 < iVar1) {
    FUN_005e9f20("bank >= minBet","..\\Casino\\baccaratai.cpp",0x1e);
  }
  if (local_14 < -4) {
    local_14 = FUN_0062fbf0(5);
    local_14 = -1 - local_14;
  }
  iVar5 = FUN_0062fbf0(5);
  iVar6 = FUN_0062fbf0(5);
  dVar8 = (double)(iVar4 / (iVar6 + 1)) * (double)((iVar5 + 1) * iVar1);
  dVar7 = (double)(local_14 * iVar1);
  iVar5 = FUN_0062fbf0(5);
  local_1c = FUN_00686cc0(iVar4 / (iVar5 + 1),dVar7,dVar8);
  if (iVar2 < local_1c) {
    local_1c = iVar2;
  }
  if (iVar3 < local_1c) {
    local_1c = iVar3;
  }
  if (local_1c < iVar1) {
    local_1c = iVar1;
  }
  return local_1c;
}

