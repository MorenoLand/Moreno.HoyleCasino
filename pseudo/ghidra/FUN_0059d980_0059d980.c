// FUN_0059d980  0059d980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0059d980(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a7661;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar3) {
  case 0:
    iVar5 = FUN_005a2370();
    param_1[8] = iVar5;
    if (param_1[8] == -1) {
      iVar5 = FUN_00637810(0);
      (**(code **)(*param_1 + 0xc))(3,((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) + 1);
    }
    else {
      (**(code **)(*param_1 + 4))(1);
      cVar1 = FUN_0059dd90();
      if ((cVar1 == '\0') || (iVar5 = FUN_005a2640(), iVar5 != 0)) {
        (**(code **)(*param_1 + 0x1c))(0);
      }
      else {
        FUN_0059d310(param_1);
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
      (**(code **)(**(int **)(DAT_007935c4 + 0xa4) + 0x74))();
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
      (**(code **)(*DAT_0162ee84 + 0x80))(0x186a6,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
    break;
  case 2:
    (**(code **)(*param_1 + 4))(0);
    cVar1 = FUN_0059dd90();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(DAT_007935c4 + 0xa4) + 0x70))();
      (**(code **)(**(int **)(DAT_007935c4 + 0xa4) + 0xb0))(0);
      iStack_14 = (param_1[8] == 4) + 2;
      while (iStack_14 = iStack_14 + -1, -1 < iStack_14) {
        uVar3 = FUN_006436c0();
        FUN_005a1e00(param_1[8],uVar3);
      }
      FUN_0059c2d0();
      (**(code **)(*param_1 + 0x1c))(0x14);
    }
    else {
      pvVar4 = operator_new(0x24);
      uStack_8 = 1;
      if (pvVar4 == (void *)0x0) {
        uStack_34 = 0;
      }
      else {
        uStack_34 = FUN_0059ddf0(param_1[8],param_1);
      }
      uStack_8 = 0xffffffff;
      FUN_005fc420(uStack_34);
    }
    break;
  case 3:
    uVar2 = FUN_00641280(*(undefined2 *)(DAT_007935d0 + 0xe0 + *(int *)(DAT_007935d0 + 0x11c) * 2));
    *(undefined2 *)(DAT_007935d0 + 0x120) = uVar2;
    iVar5 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(DAT_007935d0 + 0xe4)));
    if (iVar5 < 10) {
      *(undefined2 *)(DAT_007935d0 + 0xe4) = 0;
    }
    else {
      iVar5 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(DAT_007935d0 + 0xe4)));
      if (iVar5 < 0xe) {
        *(undefined2 *)(DAT_007935d0 + 0xe2) = *(undefined2 *)(DAT_007935d0 + 0xe4);
        *(undefined2 *)(DAT_007935d0 + 0xe4) = 0;
        *(undefined4 *)(DAT_007935d0 + 0x11c) = 1;
      }
    }
    (**(code **)(*param_1 + 4))(4);
    FUN_0059d190(param_1);
    break;
  case 4:
    *(undefined1 *)(DAT_007935d0 + 0x103) = 0;
    (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
    FUN_005fc420(0);
  }
  ExceptionList = local_10;
  return;
}

