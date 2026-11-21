// FUN_0045a6e0  0045a6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045a6e0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0069f1c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar2) {
  case 0:
    iVar3 = FUN_00460f00();
    param_1[8] = iVar3;
    if (param_1[8] == -1) {
      (**(code **)(*param_1 + 8))(3,0);
    }
    else {
      (**(code **)(*param_1 + 4))(1);
      cVar1 = FUN_0045a680();
      if ((cVar1 == '\0') || (*(int *)(DAT_00790738 + 0x108) != param_1[8])) {
        (**(code **)(*param_1 + 0x1c))(0);
      }
      else {
        FUN_00459e30(param_1);
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
      (**(code **)(**(int **)(DAT_00790740 + 0x48) + 0x74))();
      pvVar4 = operator_new(0x20);
      uStack_8 = 0;
      if (pvVar4 == (void *)0x0) {
        uStack_30 = 0;
      }
      else {
        uStack_30 = FUN_006010a0(param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005f5d50(uStack_30);
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a90,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    break;
  case 2:
    (**(code **)(*param_1 + 4))(0);
    cVar1 = FUN_0045a680();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(DAT_00790740 + 0x48) + 0x70))();
      (**(code **)(**(int **)(DAT_00790740 + 0x48) + 0xb0))(0);
      for (iStack_14 = 0; iStack_14 < 7; iStack_14 = iStack_14 + 1) {
        uVar2 = FUN_006436c0();
        FUN_00460500(param_1[8],uVar2);
      }
      FUN_004587e0();
      (**(code **)(*param_1 + 0x1c))(0x14);
    }
    else {
      pvVar4 = operator_new(0x24);
      uStack_8 = 1;
      if (pvVar4 == (void *)0x0) {
        uStack_34 = 0;
      }
      else {
        uStack_34 = FUN_0045aa80(param_1[8],param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_34);
    }
    break;
  case 3:
    (**(code **)(*param_1 + 4))(4);
    for (iStack_14 = 0; iStack_14 < 5; iStack_14 = iStack_14 + 1) {
      FUN_00641ed0(DAT_00790738 + 0x5c + iStack_14 * 0xe,7);
    }
    FUN_0045fd30();
    FUN_00459fc0(param_1);
    break;
  case 4:
    *(undefined1 *)(DAT_00790738 + 0x116) = 0;
    (**(code **)(**(int **)(DAT_00790740 + 0x40) + 0x70))();
    (**(code **)(**(int **)(DAT_00790740 + 0x44) + 0x70))();
    (**(code **)(**(int **)(DAT_00790734 + 4) + 8))(1,0);
    FUN_005fc420(0);
  }
  ExceptionList = local_10;
  return;
}

