// FUN_00590140  00590140

void FUN_00590140(undefined4 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  int local_10;
  
  iVar2 = (**(code **)(*DAT_007935a4 + 0x2b0))();
  iVar3 = (**(code **)(*DAT_007935a4 + 0x2b4))();
  piVar4 = (int *)FUN_005dcb00(param_1);
  (**(code **)(*piVar4 + 0x18))();
  iVar5 = FUN_005dcb00(param_1);
  if (*(int *)(iVar5 + 0x4a8) < -4) {
    FUN_0062fbf0(5);
  }
  FUN_0062fbf0(5);
  FUN_0062fbf0(5);
  FUN_0062fbf0(5);
  local_10 = FUN_00686cc0();
  local_10 = local_10 / 2;
  if (local_10 % 5 != 0) {
    local_10 = (5 - local_10 % 5) + local_10;
  }
  iVar5 = iVar2;
  if ((iVar2 <= local_10) && (iVar5 = local_10, iVar3 < local_10)) {
    iVar5 = iVar3;
  }
  while (local_10 = iVar5, cVar1 = FUN_0058fe80(param_1,local_10), cVar1 == '\0') {
    iVar5 = local_10 + -5;
  }
  if (local_10 < iVar2) {
    local_10 = 0;
  }
  if (iVar3 < local_10) {
    FUN_005e9f20("theBet <= maxBet","..\\Casino\\fourcardpokerai.cpp",0x78);
  }
  uVar6 = FUN_0064c8a0(local_10,0);
  *param_2 = uVar6;
  return;
}

