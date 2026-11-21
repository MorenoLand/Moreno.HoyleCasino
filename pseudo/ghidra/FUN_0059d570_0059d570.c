// FUN_0059d570  0059d570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0059d570(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uStack_28;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a760d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar2) {
  case 0:
    (**(code **)(*param_1 + 4))(1);
    cVar1 = FUN_0059d870();
    if ((cVar1 == '\0') || (iVar3 = FUN_005a2640(), iVar3 != 0)) {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_0059d310(param_1);
    }
    break;
  case 1:
    (**(code **)(*param_1 + 4))(2);
    cVar1 = FUN_00637630();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1c))(3);
    }
    else {
      (**(code **)(**(int **)(DAT_007935c4 + 0xa4) + 0x74))();
      pvVar4 = operator_new(0x20);
      uStack_8 = 0;
      if (pvVar4 == (void *)0x0) {
        uStack_28 = 0;
      }
      else {
        uStack_28 = FUN_006010a0(param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005f5d50(uStack_28);
      (**(code **)(*DAT_0162ee84 + 0x80))(0x186a6,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    break;
  case 2:
    (**(code **)(*param_1 + 4))(3);
    (**(code **)(**(int **)(DAT_007935c4 + 0xa4) + 0x70))();
    (**(code **)(**(int **)(DAT_007935c4 + 0xa4) + 0xb0))(0);
    iStack_14 = 3;
    while (iStack_14 = iStack_14 + -1, -1 < iStack_14) {
      uVar2 = FUN_006436c0();
      FUN_005a1e00(5,uVar2);
    }
    FUN_005a3c20(5,1);
    FUN_0059c2d0();
    (**(code **)(*param_1 + 0x1c))(0x14);
    break;
  case 3:
    (**(code **)(*param_1 + 4))(4);
    FUN_0059d190(param_1);
    break;
  case 4:
    *(undefined1 *)(DAT_007935d0 + 0x103) = 0;
    (**(code **)(**(int **)(DAT_007935c4 + 0x9c) + 0x70))();
    (**(code **)(**(int **)(DAT_007935c4 + 0xa0) + 0x70))();
    (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
    FUN_005fc420(0);
    *(undefined1 *)(DAT_007935d0 + 0x118) = 1;
  }
  ExceptionList = local_10;
  return;
}

