// FUN_0044e7f0  0044e7f0

int FUN_0044e7f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  int local_1c;
  int local_14;
  
  iVar2 = (**(code **)(*DAT_00790734 + 0x2b0))();
  iVar3 = (**(code **)(*DAT_00790734 + 0x2b4))();
  iVar4 = FUN_005dcb00(param_1);
  local_14 = *(int *)(iVar4 + 0x4a8);
  FUN_005dcb00(param_1);
  iVar4 = FUN_005d5a50();
  iVar5 = FUN_0044e970(param_1);
  if (iVar4 < iVar2) {
    FUN_005e9f20("bank >= minBet","..\\Casino\\paigowai.cpp",0x22);
  }
  if (local_14 < -4) {
    local_14 = FUN_0062fbf0(5);
    local_14 = -1 - local_14;
  }
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    iVar6 = FUN_0062fbf0(5);
    iVar7 = FUN_0062fbf0(5);
    dVar9 = (double)(iVar5 / (iVar7 + 1)) * (double)((iVar6 + 1) * iVar2);
    dVar8 = (double)(local_14 * iVar2);
    iVar6 = FUN_0062fbf0(5);
    local_1c = FUN_00686cc0(iVar5 / (iVar6 + 1),dVar8,dVar9);
  }
  else {
    local_1c = FUN_0044edb0(param_1);
  }
  if (iVar3 < local_1c) {
    local_1c = iVar3;
  }
  if (iVar4 < local_1c) {
    local_1c = iVar4;
  }
  if (local_1c < iVar2) {
    local_1c = iVar2;
  }
  return local_1c;
}

