// FUN_005b0230  005b0230

void FUN_005b0230(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = FUN_005b4f00();
  iVar4 = FUN_005dcb00(uVar3);
  if (iVar4 == 0) goto LAB_005b03df;
  uVar3 = FUN_005b4f00();
  FUN_005dcb00(uVar3);
  piVar5 = (int *)FUN_0063aac0();
  if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) goto LAB_005b03df;
  switch(param_1) {
  case 0x3154ea:
    uVar7 = 1;
    uVar6 = 1;
    uVar3 = FUN_005b4f00(1,1);
    cVar2 = FUN_005ad1f0(uVar3,uVar6,uVar7);
    if (cVar2 != '\0') {
      FUN_005a7080();
    }
    break;
  case 0x3154eb:
    uVar7 = 1;
    uVar6 = 0;
    uVar3 = FUN_005b4f00(0,1);
    cVar2 = FUN_005ad1f0(uVar3,uVar6,uVar7);
    if (cVar2 != '\0') {
      FUN_005a7080();
    }
    break;
  case 0x3154ec:
    uVar7 = 1;
    uVar6 = 2;
    uVar3 = FUN_005b4f00(2,1);
    cVar2 = FUN_005ad1f0(uVar3,uVar6,uVar7);
    if (cVar2 != '\0') {
      FUN_005a7080();
    }
    break;
  case 0x3154ed:
    uVar7 = 1;
    uVar6 = 3;
    uVar3 = FUN_005b4f00(3,1);
    cVar2 = FUN_005ad1f0(uVar3,uVar6,uVar7);
    if (cVar2 != '\0') {
      FUN_005a7080();
    }
    break;
  case 0x3154ee:
    uVar7 = 1;
    uVar6 = 4;
    uVar3 = FUN_005b4f00(4,1);
    cVar2 = FUN_005ad1f0(uVar3,uVar6,uVar7);
    if (cVar2 != '\0') {
      FUN_005a7080();
    }
    break;
  case 0x3154ef:
    uVar3 = FUN_005b4f00();
    FUN_005b6880(uVar3);
  default:
LAB_005b03df:
    FUN_005dc7d0(param_1,param_2);
  }
  return;
}

