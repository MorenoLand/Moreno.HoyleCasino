// FUN_005f1120  005f1120

void FUN_005f1120(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *local_858;
  int *local_854;
  int *local_850;
  int *local_84c;
  int *local_848;
  char local_818 [2052];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9d93;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_005f89d0(0);
  FUN_005f85d0(uVar1);
  uVar2 = FUN_005f1b50();
  FUN_005f1ad0(uVar2);
  if ((DAT_00795fa2 == '\0') || (DAT_00795078 != (int *)0x0)) {
    DAT_00795078 = (int *)0x0;
  }
  else {
    pvVar3 = operator_new(0x1d0);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_848 = (int *)0x0;
    }
    else {
      local_848 = (int *)FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    DAT_00795078 = local_848;
    FUN_005ec8f0(&PTR_006b27f8,4,100,0xf,0,0,9999,0x30,0xffffffff);
    FUN_005ee8c0(0xc0,0xc0,0xc0);
    (**(code **)(*DAT_00795078 + 0x74))();
  }
  if (DAT_00795fa4 == '\0') {
    DAT_00795088 = (int *)0x0;
  }
  else {
    pvVar3 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar3 == (void *)0x0) {
      local_84c = (int *)0x0;
    }
    else {
      local_84c = (int *)FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    DAT_00795088 = local_84c;
    uVar8 = 0xffffffff;
    uVar7 = 0x30;
    uVar6 = 9999;
    uVar2 = 0;
    iVar4 = FUN_005f8550(0,9999,0x30,0xffffffff);
    FUN_005ec8f0(&PTR_006b27f8,0x1b,100,0xf,iVar4 + -100,uVar2,uVar6,uVar7,uVar8);
    FUN_005ee8c0(0xc0,0xc0,0xc0);
    sprintf(local_818,"Built: %s %s","Nov 18 2008","14:27:50");
    (**(code **)(*DAT_00795088 + 0xb4))(local_818);
    FUN_005ef180();
    iVar4 = FUN_005f5550();
    FUN_005ecc60(iVar4 + 8);
    iVar4 = FUN_005f8550(0);
    iVar5 = FUN_005f5550();
    (**(code **)(*DAT_00795088 + 0x44))(iVar4 - iVar5);
    (**(code **)(*DAT_00795088 + 0x74))();
  }
  if (DAT_00795fb0 == '\0') {
    DAT_0079507c = (int *)0x0;
    DAT_00795080 = (int *)0x0;
    DAT_00795084 = (int *)0x0;
  }
  else {
    pvVar3 = operator_new(0x1d0);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_850 = (int *)0x0;
    }
    else {
      local_850 = (int *)FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    DAT_0079507c = local_850;
    uVar7 = 0xffffffff;
    uVar6 = 0x11;
    uVar2 = 9999;
    iVar4 = FUN_005f8570(9999,0x11,0xffffffff);
    iVar4 = iVar4 + -0xf;
    iVar5 = FUN_005f8550(iVar4);
    FUN_005ec8f0(&PTR_006b27f8,4,0x5a,0xf,iVar5 + -0x10e,iVar4,uVar2,uVar6,uVar7);
    FUN_005ee8c0(0xc0,0xc0,0xc0);
    (**(code **)(*DAT_0079507c + 0x74))();
    pvVar3 = operator_new(0x1d0);
    local_8 = 3;
    if (pvVar3 == (void *)0x0) {
      local_854 = (int *)0x0;
    }
    else {
      local_854 = (int *)FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    DAT_00795080 = local_854;
    uVar7 = 0xffffffff;
    uVar6 = 0x11;
    uVar2 = 9999;
    iVar4 = FUN_005f8570(9999,0x11,0xffffffff);
    iVar4 = iVar4 + -0xf;
    iVar5 = FUN_005f8550(iVar4);
    FUN_005ec8f0(&PTR_006b27f8,4,0x5a,0xf,iVar5 + -0xb4,iVar4,uVar2,uVar6,uVar7);
    FUN_005ee8c0(0xc0,0xc0,0xc0);
    (**(code **)(*DAT_00795080 + 0x74))();
    pvVar3 = operator_new(0x1d0);
    local_8 = 4;
    if (pvVar3 == (void *)0x0) {
      local_858 = (int *)0x0;
    }
    else {
      local_858 = (int *)FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    DAT_00795084 = local_858;
    uVar7 = 0xffffffff;
    uVar6 = 0x11;
    uVar2 = 9999;
    iVar4 = FUN_005f8570(9999,0x11,0xffffffff);
    iVar4 = iVar4 + -0xf;
    iVar5 = FUN_005f8550(iVar4);
    FUN_005ec8f0(&PTR_006b27f8,4,0x5a,0xf,iVar5 + -0x5a,iVar4,uVar2,uVar6,uVar7);
    FUN_005ee8c0(0xc0,0xc0,0xc0);
    (**(code **)(*DAT_00795084 + 0x74))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

