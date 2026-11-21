// FUN_00448910  00448910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00448910(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0069ed4e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar3) {
  case 0:
    iVar4 = FUN_0044d380();
    param_1[8] = iVar4;
    if (param_1[8] == -1) {
      (**(code **)(*param_1 + 8))(3,0);
    }
    else {
      (**(code **)(*param_1 + 4))(1);
      cVar1 = FUN_004488b0();
      if ((cVar1 == '\0') || (iVar4 = FUN_0044ce90(), iVar4 != 0)) {
        (**(code **)(*param_1 + 0x1c))(0);
      }
      else {
        FUN_004482f0(param_1);
      }
    }
    break;
  case 1:
    (**(code **)(*param_1 + 4))(2);
    cVar1 = FUN_00637630();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1c))(3);
    }
    else {
      (**(code **)(**(int **)(DAT_00790718 + 0x6c) + 0x74))();
      pvVar5 = operator_new(0x20);
      uStack_8 = 0;
      if (pvVar5 == (void *)0x0) {
        uStack_30 = 0;
      }
      else {
        uStack_30 = FUN_006010a0(param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005f5d50(uStack_30);
      (**(code **)(*DAT_0162ee84 + 0x80))(0x186a6,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    break;
  case 2:
    (**(code **)(*param_1 + 4))(0);
    cVar1 = FUN_004488b0();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(DAT_00790718 + 0x6c) + 0x70))();
      (**(code **)(**(int **)(DAT_00790718 + 0x6c) + 0xb0))(0);
      for (iStack_14 = 0; iStack_14 < 3; iStack_14 = iStack_14 + 1) {
        uVar3 = FUN_006436c0();
        FUN_0044cda0(param_1[8],uVar3);
      }
      FUN_004474b0();
      (**(code **)(*param_1 + 0x1c))(0x14);
    }
    else {
      pvVar5 = operator_new(0x24);
      uStack_8 = 1;
      if (pvVar5 == (void *)0x0) {
        uStack_34 = 0;
      }
      else {
        uStack_34 = FUN_00448ca0(param_1[8],param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_34);
    }
    break;
  case 3:
    (**(code **)(*param_1 + 4))(4);
    FUN_00448480(param_1);
    break;
  case 4:
    *(undefined1 *)(DAT_00790710 + 0xd1) = 0;
    (**(code **)(**(int **)(DAT_00790718 + 100) + 0x70))();
    (**(code **)(**(int **)(DAT_00790718 + 0x68) + 0x70))();
    uVar2 = FUN_006436c0();
    *(undefined2 *)(DAT_00790710 + 0xc0) = uVar2;
    uVar2 = FUN_006436c0();
    *(undefined2 *)(DAT_00790710 + 0xc2) = uVar2;
    (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(1,0);
    FUN_005fc420(0);
  }
  ExceptionList = local_10;
  return;
}

