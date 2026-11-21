// FUN_0058ff40  0058ff40

void FUN_0058ff40(undefined4 param_1,undefined8 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  int local_54;
  int local_10;
  
  iVar2 = (**(code **)(*DAT_007935a4 + 0x2b0))();
  iVar3 = (**(code **)(*DAT_007935a4 + 0x2b4))();
  piVar4 = (int *)FUN_005dcb00(param_1);
  (**(code **)(*piVar4 + 0x18))();
  FUN_005dcb00(param_1);
  iVar5 = FUN_0062fbf0(10);
  if ((iVar5 < 7) || (*param_3 == 0)) {
    FUN_0062fbf0(5);
    FUN_0062fbf0(5);
    FUN_0062fbf0(5);
    local_54 = FUN_00686cc0();
    iVar5 = FUN_0062fbf0(2);
    if (iVar5 == 1) {
      local_54 = local_54 / 3;
    }
    else {
      local_54 = local_54 / 2;
    }
    local_10 = local_54;
    if (local_54 % 5 != 0) {
      local_10 = (5 - local_54 % 5) + local_54;
    }
    iVar5 = iVar2;
    if ((iVar2 <= local_10) && (iVar5 = local_10, iVar3 < local_10)) {
      iVar5 = iVar3;
    }
    while (local_10 = iVar5, cVar1 = FUN_0058feb0(param_1,local_10,*param_3), cVar1 == '\0') {
      iVar5 = local_10 + -5;
    }
    if (local_10 < iVar2) {
      local_10 = 0;
    }
    if (iVar3 < local_10) {
      FUN_005e9f20("theBet <= maxBet","..\\Casino\\fourcardpokerai.cpp",0x4d);
    }
    uVar6 = FUN_0064c8a0(local_10,0);
    *param_2 = uVar6;
  }
  return;
}

