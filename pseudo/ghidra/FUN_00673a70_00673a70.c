// FUN_00673a70  00673a70

void FUN_00673a70(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_00630f40("SID_GENERIC_DELETE",4);
  uVar2 = FUN_00630f40("SID_GENERIC_AREYOUSURE",uVar2);
  iVar3 = FUN_0062ff10(uVar2);
  if (iVar3 == 6) {
    cVar1 = FUN_00667e90();
    if (cVar1 != '\0') {
      uVar5 = 0;
      FUN_005fb720(0);
      uVar2 = FUN_00615260(uVar5);
      FUN_005fb720(0);
      FUN_00628ab0(uVar2,uVar5);
      piVar4 = (int *)FUN_005fb720(0);
      iVar3 = (**(code **)(*piVar4 + 0xb8))();
      if (iVar3 == 0) {
        piVar4 = (int *)FUN_005fb300(2);
        (**(code **)(*piVar4 + 0xd0))();
        FUN_0064f030();
      }
      else {
        piVar4 = (int *)FUN_005fb720(0);
        (**(code **)(*piVar4 + 0xc0))(0,1);
      }
    }
  }
  return;
}

