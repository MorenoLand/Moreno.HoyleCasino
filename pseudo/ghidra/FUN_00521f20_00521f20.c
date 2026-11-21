// FUN_00521f20  00521f20

void __fastcall FUN_00521f20(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  int local_28 [5];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3f5e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28[0] = 0;
  local_28[1] = 1;
  local_28[2] = 5;
  local_28[3] = 4;
  uVar4 = FUN_00630f40("SID_ROULETTE",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar4);
  FUN_005f1ad0(0x1adbe);
  local_68 = operator_new(0x1a0);
  local_8 = 0;
  if (local_68 == (undefined4 *)0x0) {
    local_68 = (undefined4 *)0x0;
  }
  else {
    FUN_005cd6a0();
    *local_68 = RouletteDealer::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 8) = local_68;
  (**(code **)(**(int **)(param_1 + 8) + 0x40))();
  FUN_00523560(0x1adc3,0x1adc2);
  FUN_005eae80(0x1adc1,0,0,0x3e9,0xffffffff);
  local_6c = operator_new(0x178);
  local_8 = 1;
  if (local_6c == (undefined4 *)0x0) {
    local_6c = (undefined4 *)0x0;
  }
  else {
    FUN_005eaaf0();
    *local_6c = RouletteWheelBackground::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 4) = local_6c;
  cVar3 = FUN_00637630();
  if ((cVar3 != '\0') && (DAT_00795f94 == '\0')) {
    FUN_005eaf00(0x1adba);
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x6c))(5000);
  (**(code **)(**(int **)(param_1 + 4) + 0x40))();
  pvVar5 = operator_new(0x184);
  local_8 = 2;
  if (pvVar5 == (void *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = local_70;
  cVar3 = FUN_00637630();
  if ((cVar3 != '\0') && (DAT_00795f94 == '\0')) {
    FUN_005eaf00(0x1adb1);
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x6c))(0x1389);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x40))();
  pvVar5 = operator_new(0x184);
  local_8 = 3;
  if (pvVar5 == (void *)0x0) {
    local_74 = 0;
  }
  else {
    local_74 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = local_74;
  cVar3 = FUN_00637630();
  if ((cVar3 != '\0') && (DAT_00795f94 == '\0')) {
    FUN_005eaf00(0x1adbf);
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x6c))(0x138a);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x40))();
  for (local_14 = 0; local_14 < 0x1a; local_14 = local_14 + 1) {
    pvVar5 = operator_new(0x178);
    local_8 = 4;
    if (pvVar5 == (void *)0x0) {
      local_78 = 0;
    }
    else {
      local_78 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18 + local_14 * 4) = local_78;
    FUN_005eae80(0x1adc0,0xfffffffd,0xffffffe2,3,0xffffffff);
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    local_28[4] = FUN_00639110(local_14);
    FUN_00646380(100);
    FUN_006464d0(0,0);
    FUN_005d9180(local_14,0);
    FUN_005dcb00(local_14);
    FUN_005d66b0();
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    pvVar5 = operator_new(0x178);
    local_8 = 5;
    if (pvVar5 == (void *)0x0) {
      local_7c = 0;
    }
    else {
      local_7c = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x304 + local_14 * 4) = local_7c;
    iVar6 = FUN_005dcb00(local_14);
    piVar1 = *(int **)(*(int *)(iVar6 + 0x20) + 0x18);
    iVar6 = FUN_005dcb00(local_14);
    piVar2 = *(int **)(*(int *)(iVar6 + 0x20) + 0x18);
    uVar4 = 0xffffffff;
    FUN_005dcb00(local_14,0xffffffff);
    iVar6 = FUN_005f53c0();
    iVar6 = iVar6 + 100;
    iVar7 = (**(code **)(*piVar1 + 0x54))(iVar6);
    iVar7 = iVar7 + -7;
    iVar8 = (**(code **)(*piVar2 + 0x4c))(iVar7);
    FUN_005eae80(0x1adbd,iVar8 + 10,iVar7,iVar6,uVar4);
    (**(code **)(**(int **)(param_1 + 0x304 + local_14 * 4) + 0xb0))(local_28[local_14] * 3);
    (**(code **)(**(int **)(param_1 + 0x304 + local_14 * 4) + 0x74))();
  }
  for (local_14 = 0; local_14 < 0xa1; local_14 = local_14 + 1) {
    pvVar5 = operator_new(0xae8);
    local_8 = 6;
    if (pvVar5 == (void *)0x0) {
      local_88 = 0;
    }
    else {
      local_88 = FUN_00523890();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x80 + local_14 * 4) = local_88;
    FUN_005eae80(0x1adbc,0,0,2,local_14);
    (**(code **)(**(int **)(param_1 + 0x80 + local_14 * 4) + 0xb0))(local_14);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_00793374 + 4 + local_14 * 4));
    (**(code **)(**(int **)(param_1 + 0x80 + local_14 * 4) + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

