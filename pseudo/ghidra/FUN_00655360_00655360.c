// FUN_00655360  00655360

void FUN_00655360(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  cVar1 = FUN_00655a30();
  if (cVar1 != '\0') {
    FUN_00655a60();
  }
  iVar2 = (**(code **)(*DAT_0162ee84 + 0x168))();
  if ((0 < iVar2) && (cVar1 = FUN_00637730(0), cVar1 != '\0')) {
    piVar3 = (int *)FUN_005fb350(3);
    (**(code **)(*piVar3 + 0xf4))();
  }
  cVar1 = FUN_00637630();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb350(4);
    (**(code **)(*piVar3 + 0xf4))();
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb350(6);
    (**(code **)(*piVar3 + 0xf4))();
  }
  iVar2 = (**(code **)(*DAT_0162ee84 + 0x17c))();
  if (iVar2 != 0) {
    cVar1 = FUN_00637670();
    if (cVar1 != '\0') {
      piVar3 = (int *)FUN_005fb350(0xc);
      (**(code **)(*piVar3 + 0xf4))();
    }
    cVar1 = FUN_00655a30();
    if (cVar1 == '\0') {
      uVar5 = 1;
      uVar4 = FUN_006377e0(1);
      FUN_005fb860(0xd);
      FUN_00605110(uVar4,uVar5);
    }
    else {
      FUN_00655c30();
    }
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xb8))();
  if ((cVar1 != '\0') && (cVar1 = FUN_006376d0(), cVar1 != '\0')) {
    piVar3 = (int *)FUN_005fb350(5);
    (**(code **)(*piVar3 + 0xf4))();
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xb4))();
  if ((cVar1 != '\0') && (DAT_007960c5 != '\0')) {
    piVar3 = (int *)FUN_005fb350(7);
    (**(code **)(*piVar3 + 0xf4))();
  }
  iVar2 = (**(code **)(*DAT_0162ee84 + 0x168))();
  if (0 < iVar2) {
    uVar5 = 1;
    uVar4 = FUN_006377b0(1);
    FUN_005fb860(9);
    FUN_00605110(uVar4,uVar5);
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xbc))();
  if (cVar1 != '\0') {
    uVar4 = 1;
    iVar2 = FUN_00637810(0);
    iVar2 = 10 - iVar2;
    FUN_005fb860(10);
    FUN_00605110(iVar2,uVar4);
  }
  if (DAT_00795f94 != '\0') {
    iVar2 = FUN_005fb350(3);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_005fb350(3);
      (**(code **)(*piVar3 + 0xd0))();
    }
    iVar2 = FUN_005fb350(4);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_005fb350(4);
      (**(code **)(*piVar3 + 0xd0))();
    }
    iVar2 = FUN_005fb350(0xc);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_005fb350(0xc);
      (**(code **)(*piVar3 + 0xd0))();
    }
  }
  cVar1 = FUN_00655a30();
  if (cVar1 != '\0') {
    if (((DAT_00795f94 == '\0') &&
        (cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*DAT_0162ee80 + 0xac))(), cVar1 == '\0')) {
      return;
    }
    piVar3 = (int *)FUN_005fb720(0xb);
    (**(code **)(*piVar3 + 0xb4))();
  }
  return;
}

