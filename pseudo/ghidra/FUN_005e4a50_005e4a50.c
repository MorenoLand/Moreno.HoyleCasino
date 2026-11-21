// FUN_005e4a50  005e4a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e4a50(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a986d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar2) {
  case 0:
    DAT_00794909 = 1;
    uVar18 = 1;
    uVar16 = 1;
    uVar15 = 1;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 63000;
    uVar9 = 0;
    uVar17 = 0;
    iVar4 = FUN_005f8570(0,0,63000,0,0,0,1,1,1);
    iVar4 = iVar4 / 2;
    uVar2 = FUN_005f8550(iVar4);
    FUN_005fa880(0,0x311aba,uVar2,iVar4,uVar17,uVar9,uVar10,uVar11,uVar12,uVar13,uVar15,uVar16,
                 uVar18);
    uVar16 = 1;
    uVar15 = 1;
    uVar13 = 1;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 63000;
    iVar4 = FUN_005f8570(63000,0,0,0,1,1,1);
    iVar4 = iVar4 / 2;
    uVar17 = 0;
    iVar6 = FUN_005f8570(0,iVar4);
    iVar6 = iVar6 / 2;
    uVar2 = FUN_005f8550(iVar6);
    FUN_005fa880(0,0x311abb,uVar2,iVar6,uVar17,iVar4,uVar9,uVar10,uVar11,uVar12,uVar13,uVar15,uVar16
                );
    FUN_005f9b40(0,0x311ab4,0x311ab4,0xa0,0x50,64000,0,0,0,0,0xff,0);
    FUN_005f9b40(0,0x311abf,0x311ab5,0xa0,0xfa,64000,0,0,0,0,0xff,0);
    FUN_005f9b40(0,0x311ac0,0x311ab5,0x10e,0xfa,64000,0,0,0,0,0xff,0);
    FUN_005f9b40(0,0x311ac1,0x311ab5,0x17c,0xfa,64000,0,0,0,0,0xff,0);
    piVar5 = (int *)FUN_005f9b40(0,0x311abc,0x311ab6,0xa0,0xfa,0xfa01,0,0,0,0,0xff,0);
    uVar2 = FUN_005eb240();
    uVar2 = FUN_0062fc30(0,uVar2);
    (**(code **)(*piVar5 + 0xb0))(uVar2);
    pvVar8 = operator_new(0x1c);
    uStack_8 = 0;
    if (pvVar8 == (void *)0x0) {
      uStack_50 = 0;
    }
    else {
      uStack_50 = FUN_00600a70(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_50);
    piVar5[0x5e] = 5;
    piVar5 = (int *)FUN_005f9b40(0,0x311abd,0x311ab6,0x10e,0xfa,0xfa01,0,0,0,0,0xff,0);
    uVar2 = FUN_005eb240();
    uVar2 = FUN_0062fc30(0,uVar2);
    (**(code **)(*piVar5 + 0xb0))(uVar2);
    pvVar8 = operator_new(0x1c);
    uStack_8 = 1;
    if (pvVar8 == (void *)0x0) {
      uStack_54 = 0;
    }
    else {
      uStack_54 = FUN_00600a70(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_54);
    piVar5[0x5e] = 5;
    piVar5 = (int *)FUN_005f9b40(0,0x311abe,0x311ab6,0x17c,0xfa,0xfa01,0,0,0,0,0xff,0);
    uVar2 = FUN_005eb240();
    uVar2 = FUN_0062fc30(0,uVar2);
    (**(code **)(*piVar5 + 0xb0))(uVar2);
    pvVar8 = operator_new(0x1c);
    uStack_8 = 2;
    if (pvVar8 == (void *)0x0) {
      uStack_58 = 0;
    }
    else {
      uStack_58 = FUN_00600a70(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_58);
    piVar5[0x5e] = 5;
    DAT_00794918 = 0;
    uVar14 = 1;
    uVar18 = 1;
    uVar16 = 1;
    uVar15 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 65000;
    uVar10 = 0;
    uVar9 = 0;
    uVar2 = FUN_005f8570(0,0,65000,0,0,0,1,1,1);
    uVar17 = FUN_005f8550(uVar2);
    FUN_005fa880(0,0x311ac2,uVar17,uVar2,uVar9,uVar10,uVar11,uVar12,uVar13,uVar15,uVar16,uVar18,
                 uVar14);
    FUN_006044b0(0x20564157,0x311ab4,0);
    FUN_006044b0(0x20564157,0x311ab5,0);
    FUN_006044b0(0x20584554,0x311ab7,0);
    FUN_006044b0(0x20584554,0x311ab8,0);
    FUN_006044b0(0x20584554,0x311ab9,0);
    (**(code **)(*DAT_0162ee84 + 0x80))(0x311ab4,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    (**(code **)(*param_1 + 8))(1,0);
    break;
  case 1:
    _DAT_00794914 = 0xff;
    _DAT_00794910 = 0;
    (**(code **)(*param_1 + 8))(2,5);
    break;
  case 2:
    _DAT_00794914 = _DAT_00794914 - 0xe;
    if ((int)_DAT_00794914 < 0) {
      (**(code **)(*param_1 + 8))(3,0);
    }
    else {
      uVar3 = _DAT_00794914 & 0xff;
      FUN_005fb630(0x311ac2);
      FUN_005f62f0(uVar3);
      (**(code **)(*param_1 + 8))(2,5);
    }
    break;
  case 3:
    FUN_005fbd70(0,0x311ac2);
    (**(code **)(*param_1 + 8))(4,0x3c);
    break;
  case 4:
    if (DAT_00794918 < 3) {
      piVar5 = (int *)FUN_005fb210(DAT_00794918 + 0x311abc);
      FUN_005f5d50(0);
      FUN_005eaf00(DAT_00794918 + 0x311ab7);
      iVar4 = (**(code **)(*piVar5 + 0x54))();
      (**(code **)(*piVar5 + 0x50))(iVar4 + 0x1e);
      piVar5[0x62] = 7;
      piVar5[0x61] = 1;
      pvVar8 = operator_new(0x2c);
      uStack_8 = 3;
      if (pvVar8 == (void *)0x0) {
        uStack_5c = 0;
      }
      else {
        uVar17 = 0;
        iVar4 = (**(code **)(*piVar5 + 0x54))(0);
        iVar4 = iVar4 + -0x1e;
        uVar2 = (**(code **)(*piVar5 + 0x4c))(iVar4);
        uStack_5c = FUN_00606e60(param_1,uVar2,iVar4,uVar17);
      }
      uStack_8 = 0xffffffff;
      FUN_005f6050(uStack_5c);
      (**(code **)(*DAT_0162ee84 + 0x80))(0x311ab5,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      (**(code **)(*param_1 + 4))(5);
    }
    else {
      (**(code **)(*param_1 + 8))(6,0);
    }
    break;
  case 5:
    DAT_00794918 = DAT_00794918 + 1;
    if (DAT_00794918 < 3) {
      (**(code **)(*param_1 + 8))(4,0x2e);
    }
    else {
      (**(code **)(*param_1 + 8))(6,0);
    }
    break;
  case 6:
    FUN_005e56e0(0x311ab4,1);
    FUN_005e56e0(0x311abf,0);
    FUN_005e56e0(0x311ac0,0);
    FUN_005e56e0(0x311ac1,0);
    FUN_005e56e0(0x311abc,0);
    FUN_005e56e0(0x311abd,0);
    FUN_005e56e0(0x311abe,0);
    DAT_0079490c = 0;
    (**(code **)(*param_1 + 4))(7);
    break;
  case 7:
    if (DAT_0079490c < 0xb) {
      DAT_0079490c = DAT_0079490c + 1;
      (**(code **)(*param_1 + 4))(7);
    }
    else {
      (**(code **)(*param_1 + 8))(8,10);
    }
    break;
  case 8:
    FUN_005e57f0(0x311ab4);
    FUN_005e57f0(0x311abf);
    FUN_005e57f0(0x311ac0);
    FUN_005e57f0(0x311ac1);
    FUN_005e57f0(0x311abc);
    FUN_005e57f0(0x311abd);
    FUN_005e57f0(0x311abe);
    (**(code **)(*param_1 + 8))(9,0x3c);
    break;
  case 9:
    iVar4 = FUN_005f8550();
    iVar4 = iVar4 / 0x1e;
    piVar5 = (int *)FUN_005fb630(0x311abb);
    iVar6 = (**(code **)(*piVar5 + 0x4c))();
    iVar7 = FUN_005f8550();
    if (iVar7 < iVar6) {
      (**(code **)(*param_1 + 8))(10,0);
    }
    else {
      iVar6 = (**(code **)(*piVar5 + 0x4c))();
      (**(code **)(*piVar5 + 0x48))(iVar6 + iVar4);
      piVar5 = (int *)FUN_005fb210(0x311abf);
      iVar6 = (**(code **)(*piVar5 + 0x4c))();
      (**(code **)(*piVar5 + 0x48))(iVar6 + iVar4);
      piVar5 = (int *)FUN_005fb210(0x311ac0);
      iVar6 = (**(code **)(*piVar5 + 0x4c))();
      (**(code **)(*piVar5 + 0x48))(iVar6 + iVar4);
      piVar5 = (int *)FUN_005fb210(0x311ac1);
      iVar6 = (**(code **)(*piVar5 + 0x4c))();
      (**(code **)(*piVar5 + 0x48))(iVar6 + iVar4);
      piVar5 = (int *)FUN_005fb210(0x311abc);
      iVar6 = (**(code **)(*piVar5 + 0x4c))();
      (**(code **)(*piVar5 + 0x48))(iVar6 + iVar4);
      piVar5 = (int *)FUN_005fb210(0x311abd);
      iVar6 = (**(code **)(*piVar5 + 0x4c))();
      (**(code **)(*piVar5 + 0x48))(iVar6 + iVar4);
      piVar5 = (int *)FUN_005fb210(0x311abe);
      iVar6 = (**(code **)(*piVar5 + 0x4c))();
      (**(code **)(*piVar5 + 0x48))(iVar6 + iVar4);
      piVar5 = (int *)FUN_005fb630(0x311aba);
      iVar6 = (**(code **)(*piVar5 + 0x4c))();
      (**(code **)(*piVar5 + 0x48))(iVar6 - iVar4);
      piVar5 = (int *)FUN_005fb210(0x311ab4);
      iVar6 = (**(code **)(*piVar5 + 0x4c))();
      (**(code **)(*piVar5 + 0x48))(iVar6 - iVar4);
      (**(code **)(*param_1 + 8))(9,3);
    }
    break;
  case 10:
    FUN_005fbd70(0,0x311aba);
    FUN_005fbd70(0,0x311abb);
    FUN_005fbc80(0,0x311ab4);
    FUN_005fbc80(0,0x311abf);
    FUN_005fbc80(0,0x311ac0);
    FUN_005fbc80(0,0x311ac1);
    FUN_005fbc80(0,0x311abc);
    FUN_005fbc80(0,0x311abd);
    FUN_005fbc80(0,0x311abe);
    DAT_00794909 = 0;
    pvVar8 = operator_new(0x20);
    uStack_8 = 4;
    if (pvVar8 == (void *)0x0) {
      uStack_60 = 0;
    }
    else {
      uStack_60 = FUN_005e5840();
    }
    uStack_8 = 0xffffffff;
    FUN_005f1b70(uStack_60);
    cVar1 = FUN_00636760();
    if ((cVar1 != '\0') && (DAT_016306b0 == 0)) {
      (**(code **)(*DAT_0162ee80 + 0x16c))(1,0,0xffffffff,0xffffffff,0);
    }
    break;
  case 0xb:
    FUN_005fbd70(0,0x311ac2);
    FUN_005f44e0(0x311ab4,1);
    (**(code **)(*param_1 + 8))(10,0);
  }
  ExceptionList = local_10;
  return;
}

