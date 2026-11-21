// FUN_005a0750  005a0750

void FUN_005a0750(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = FUN_005a2020();
  iVar3 = FUN_005dcb00(uVar2);
  if (iVar3 == 0) goto LAB_005a0860;
  uVar2 = FUN_005a2020();
  FUN_005dcb00(uVar2);
  piVar4 = (int *)FUN_0063aac0();
  if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) goto LAB_005a0860;
  switch(param_1) {
  case 0x315102:
    uVar2 = FUN_005a2020();
    FUN_005a36c0(uVar2);
  default:
LAB_005a0860:
    FUN_005dc7d0(param_1,param_2);
    break;
  case 0x315103:
    uVar6 = 0;
    uVar5 = 1;
    uVar2 = FUN_005a2020(1,0);
    FUN_005a1ea0(uVar2,uVar5,uVar6);
    break;
  case 0x315104:
    uVar6 = 1;
    uVar5 = 0;
    uVar2 = FUN_005a2020(0,1);
    FUN_005a1ea0(uVar2,uVar5,uVar6);
    break;
  case 0x315105:
    uVar6 = 1;
    uVar5 = 1;
    uVar2 = FUN_005a2020(1,1);
    FUN_005a1ea0(uVar2,uVar5,uVar6);
  }
  return;
}

