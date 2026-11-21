// FUN_0056fcd0  0056fcd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056fcd0(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a5f3a;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc3a0(param_2);
  switch(param_2) {
  case 0:
    FUN_0056eb20();
    for (iStack_14 = 0; iStack_14 < 2; iStack_14 = iStack_14 + 1) {
      (**(code **)(**(int **)(DAT_00793450 + 0x54 + iStack_14 * 4) + 0x70))();
    }
    for (iStack_14 = 0; iStack_14 < 4; iStack_14 = iStack_14 + 1) {
      (**(code **)(**(int **)(DAT_00793450 + 0x44 + iStack_14 * 4) + 0x74))();
      pvVar3 = operator_new(0x2c);
      uStack_8 = 0;
      if (pvVar3 == (void *)0x0) {
        uStack_38 = 0;
      }
      else {
        uStack_38 = FUN_005714a0(0xc,2,10);
      }
      uStack_8 = 0xffffffff;
      FUN_005f5d50(uStack_38);
      (**(code **)(**(int **)(DAT_00793450 + 0x34 + iStack_14 * 4) + 0x70))();
    }
    pvVar3 = operator_new(0x2c);
    uStack_8 = 1;
    if (pvVar3 == (void *)0x0) {
      uStack_3c = 0;
    }
    else {
      uStack_3c = FUN_005714a0(0xf,5,0xd);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_3c);
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))();
    if (cVar1 != '\0') {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x19266,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0xd2);
    break;
  case 1:
    (**(code **)(*param_1 + 4))(2);
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1c))(10);
    }
    else {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x19265,param_1,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    break;
  case 2:
    for (iStack_14 = 0; iStack_14 < 2; iStack_14 = iStack_14 + 1) {
      (**(code **)(**(int **)(DAT_00793450 + 0x54 + iStack_14 * 4) + 0x74))();
    }
    (**(code **)(**(int **)(DAT_00793450 + 100) + 0x74))();
    (**(code **)(**(int **)(DAT_00793450 + 100) + 0xb0))(0);
    pvVar3 = operator_new(0x20);
    uStack_8 = 2;
    if (pvVar3 == (void *)0x0) {
      uStack_40 = 0;
    }
    else {
      uStack_40 = FID_conflict_evaluation_error(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_40);
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))();
    if (cVar1 != '\0') {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x19264,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    (**(code **)(*param_1 + 4))(3);
    (**(code **)(*param_1 + 0x1c))(0x19);
    break;
  case 3:
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))();
    if (cVar1 != '\0') {
      cVar1 = FUN_0056f160();
      if ((cVar1 == '\0') || (iVar4 = FUN_0056f0d0(), iVar4 != 5)) {
        iVar4 = FUN_0062fbf0(2,0,0,5,1,0x3f800000,_DAT_006b3654,0);
        (**(code **)(*DAT_0162ee84 + 0x80))(iVar4 * 2 + 0x1925d);
      }
      else {
        (**(code **)(*DAT_0162ee84 + 0x80))(0x1926d,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      }
    }
    (**(code **)(*param_1 + 4))(4);
    (**(code **)(*param_1 + 0x1c))(0x14);
    break;
  case 4:
    for (iStack_14 = 0; iStack_14 < 4; iStack_14 = iStack_14 + 1) {
      FUN_005f5d50(0);
      (**(code **)(**(int **)(DAT_00793450 + 0x44 + iStack_14 * 4) + 0x70))();
      (**(code **)(**(int **)(DAT_00793450 + 0x34 + iStack_14 * 4) + 0xb0))
                (*(undefined4 *)(DAT_00793450 + 0xac + iStack_14 * 4));
      (**(code **)(**(int **)(DAT_00793450 + 0x34 + iStack_14 * 4) + 0x74))();
    }
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))();
    if (cVar1 != '\0') {
      FUN_0056f1e0();
    }
    FUN_005f5d50(0);
    (**(code **)(*param_1 + 4))(5);
    (**(code **)(*param_1 + 0x1c))(0xf);
    break;
  case 5:
    (**(code **)(**(int **)(DAT_0079344c + 4) + 4))(3,uVar2);
    (**(code **)(**(int **)(DAT_0079344c + 4) + 0x1c))(0);
    FUN_005fc420(0);
  }
  ExceptionList = local_10;
  return;
}

