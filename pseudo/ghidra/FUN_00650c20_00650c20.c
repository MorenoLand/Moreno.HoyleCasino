// FUN_00650c20  00650c20

undefined4 __thiscall
FUN_00650c20(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_54;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac30b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = __RTDynamicCast(DAT_007960d8[4],0,&VWindow::RTTI_Type_Descriptor,
                             &Window::RTTI_Type_Descriptor,0,DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (param_5 == -1) {
    FUN_005f83d0(0x30d4e0,0);
  }
  else {
    FUN_005f83d0(param_5,0);
  }
  FUN_005f7340(0,0);
  *(undefined1 *)(param_1 + 0x11c) = 1;
  FUN_005f85d0();
  pvVar1 = operator_new(0x178);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_54 = (int *)0x0;
  }
  else {
    local_54 = (int *)FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  local_14 = local_54;
  FUN_005eaf00(*(undefined4 *)(param_1 + 0x114));
  (**(code **)(*local_14 + 0x40))();
  FUN_005ebf80(&local_30);
  if (local_14 != (int *)0x0) {
    (**(code **)*local_14)(1);
  }
  iVar7 = local_28 - local_30;
  local_20 = local_24 - local_2c;
  FUN_005fa5b0(0,0,param_2,0x49,iVar7 + -7,0x19,3,3,1,0x30,0xffffffff);
  FUN_005fa5b0(0,1,param_3,0x1f,iVar7 + -0x1e,local_20 + -0x3c,0xf,0x1e,1,0x30,0xffffffff);
  local_1c = (int *)FUN_005f9de0(0,0,0x30d4e5,0,0,1,&PTR_006b27f8,0x48,0x4b,0x4a,0xffffffff,0);
  piVar2 = (int *)FUN_005f9de0(0,1,0x30d4de,0,0,1,&PTR_006b27f8,0x48,0x4b,0x4a,0xffffffff,0);
  piVar3 = (int *)FUN_005f9de0(0,2,0x30d4de,0,0,1,&PTR_006b27f8,0x48,0x4b,0x4a,0xffffffff,0);
  (**(code **)(*piVar3 + 0x70))();
  if ((param_4 & 8) == 0) {
    if ((param_4 & 4) == 0) {
      if ((param_4 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x1c4) = 1;
        uVar4 = FUN_00630f40("SID_GENERIC_OK");
        (**(code **)(*local_1c + 0xe0))(uVar4);
        FUN_006026f0(0xd);
        FUN_00602740(0x20);
        iVar6 = local_20;
        iVar5 = FUN_005f5590();
        iVar6 = FUN_005f5550((iVar6 - iVar5) + -0xd);
        (**(code **)(*local_1c + 0x44))((iVar7 - iVar6) / 2);
        (**(code **)(*piVar2 + 0x70))();
      }
      else {
        *(undefined4 *)(param_1 + 0x1c4) = 1;
        uVar4 = FUN_00630f40("SID_GENERIC_OK");
        (**(code **)(*local_1c + 0xe0))(uVar4);
        FUN_006026f0(0xd);
        FUN_00602740(0x20);
        iVar6 = FUN_005f5550();
        iVar5 = FUN_005f5550();
        (**(code **)(*local_1c + 0x48))((((iVar7 - iVar6) - iVar5) + -10) / 2);
        iVar6 = local_20;
        iVar5 = FUN_005f5590();
        (**(code **)(*local_1c + 0x50))((iVar6 - iVar5) + -0xd);
        *(undefined4 *)(param_1 + 0x1c8) = 2;
        uVar4 = FUN_00630f40("SID_GENERIC_CANCEL");
        (**(code **)(*piVar2 + 0xe0))(uVar4);
        FUN_006026f0(0x1b);
        (**(code **)(*piVar2 + 0x48))(iVar7 / 2 + 5);
        iVar7 = local_20;
        iVar6 = FUN_005f5590();
        (**(code **)(*piVar2 + 0x50))((iVar7 - iVar6) + -0xd);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1c4) = 6;
      uVar4 = FUN_00630f40("SID_GENERIC_YES");
      (**(code **)(*local_1c + 0xe0))(uVar4);
      FUN_006026f0(0xd);
      FUN_00602740(0x79);
      iVar6 = FUN_005f5550();
      iVar5 = FUN_005f5550();
      (**(code **)(*local_1c + 0x48))((((iVar7 - iVar6) - iVar5) + -10) / 2);
      iVar6 = local_20;
      iVar5 = FUN_005f5590();
      (**(code **)(*local_1c + 0x50))((iVar6 - iVar5) + -0xd);
      *(undefined4 *)(param_1 + 0x1c8) = 7;
      uVar4 = FUN_00630f40("SID_GENERIC_NO");
      (**(code **)(*piVar2 + 0xe0))(uVar4);
      FUN_006026f0(0x1b);
      FUN_00602740(0x6e);
      (**(code **)(*piVar2 + 0x48))(iVar7 / 2 + 5);
      iVar7 = local_20;
      iVar6 = FUN_005f5590();
      (**(code **)(*piVar2 + 0x50))((iVar7 - iVar6) + -0xd);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c4) = 6;
    uVar4 = FUN_00630f40("SID_GENERIC_YES");
    (**(code **)(*local_1c + 0xe0))(uVar4);
    FUN_006026f0(0xd);
    FUN_00602740(0x79);
    (**(code **)(*local_1c + 0x48))(1);
    iVar6 = local_20;
    iVar5 = FUN_005f5590();
    (**(code **)(*local_1c + 0x50))((iVar6 - iVar5) + -0xd);
    *(undefined4 *)(param_1 + 0x1c8) = 7;
    uVar4 = FUN_00630f40("SID_GENERIC_NO");
    (**(code **)(*piVar2 + 0xe0))(uVar4);
    FUN_006026f0(0x1b);
    FUN_00602740(0x6e);
    (**(code **)(*piVar2 + 0x48))(iVar7 / 3 + 1);
    iVar6 = local_20;
    iVar5 = FUN_005f5590();
    (**(code **)(*piVar2 + 0x50))((iVar6 - iVar5) + -0xd);
    *(undefined4 *)(param_1 + 0x1cc) = 2;
    uVar4 = FUN_00630f40("SID_GENERIC_CANCEL");
    (**(code **)(*piVar3 + 0xe0))(uVar4);
    FUN_006026f0(0x1b);
    (**(code **)(*piVar3 + 0x48))((iVar7 / 3) * 2 + 1);
    iVar7 = local_20;
    iVar6 = FUN_005f5590();
    (**(code **)(*piVar3 + 0x50))((iVar7 - iVar6) + -0xd);
    (**(code **)(*piVar3 + 0x74))();
  }
  while (*(char *)(param_1 + 0x1bc) == '\0') {
    (**(code **)(*DAT_007960d8 + 0x10))();
    FUN_00613e70();
  }
  FUN_005f87d0();
  ExceptionList = local_10;
  return 0;
}

