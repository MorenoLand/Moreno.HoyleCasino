// FUN_00651340  00651340

undefined4 * __thiscall FUN_00651340(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac37d;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = param_2;
  (**(code **)(*(int *)*param_1 + 0x54))(uVar1);
  param_1[2] = 0;
  uVar2 = (**(code **)(*(int *)*param_1 + 0x21c))();
  param_1[0x20] = uVar2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  uVar2 = FUN_005f1b50();
  param_1[3] = uVar2;
  FUN_005f1ad0(0x231b1c);
  pvVar3 = operator_new(0x178);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  param_1[6] = local_58;
  FUN_005eae80(0x231b1d,0,0,0x27d8,0xffffffff);
  (**(code **)(*(int *)param_1[6] + 0x74))();
  pvVar3 = operator_new(0x5c);
  local_8 = 1;
  if (pvVar3 == (void *)0x0) {
    local_5c = 0;
  }
  else {
    local_5c = FUN_005f6130();
  }
  local_8 = 0xffffffff;
  param_1[7] = local_5c;
  FUN_005f61d0(0,0x13,5,0x240,0x27e2,0xffffffff);
  FUN_005f6580(0x74,0xae,0xa8);
  (**(code **)(*(int *)param_1[7] + 0x74))();
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    param_1[local_18 + 8] = 0;
  }
  iVar4 = FUN_00652d20();
  param_1[1] = (int)(0x2a8 / (longlong)iVar4);
  local_18 = 0;
  do {
    if (iVar4 <= local_18) {
LAB_006516ab:
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        pvVar3 = operator_new(0x1f8);
        local_8 = 3;
        if (pvVar3 == (void *)0x0) {
          local_64 = 0;
        }
        else {
          local_64 = FUN_00652e20(param_1,local_18 + 100);
        }
        local_8 = 0xffffffff;
        param_1[local_18 + 0xe] = local_64;
        FUN_005eae80(local_18 + 0x231b26,0,0,0x283d,0xffffffff);
        (**(code **)(*(int *)param_1[local_18 + 0xe] + 0x74))();
        pvVar3 = operator_new(0x184);
        local_8 = 4;
        if (pvVar3 == (void *)0x0) {
          local_68 = 0;
        }
        else {
          local_68 = FUN_005f5bf0();
        }
        local_8 = 0xffffffff;
        param_1[local_18 + 0x12] = local_68;
        FUN_005eae80(local_18 + 0x231b30,0,0,0x2846,0xffffffff);
        *(undefined4 *)(param_1[local_18 + 0x12] + 0x178) = 0x1e;
        (**(code **)(*(int *)param_1[local_18 + 0x12] + 0x70))();
      }
      FUN_006026f0(0xd);
      FUN_00602740(0x20);
      FUN_006026f0(8);
      FUN_00602740(0x16);
      FUN_006026f0(0x1b);
      for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
        pvVar3 = operator_new(0x1b4);
        local_8 = 5;
        if (pvVar3 == (void *)0x0) {
          local_6c = 0;
        }
        else {
          local_6c = FUN_005f7670(0,*(undefined4 *)(DAT_0162ee84 + 0x14),0x14,0x14);
        }
        local_8 = 0xffffffff;
        param_1[local_18 + 0x16] = local_6c;
        pvVar3 = operator_new(0x184);
        local_8 = 6;
        if (pvVar3 == (void *)0x0) {
          local_70 = 0;
        }
        else {
          local_70 = FUN_005f5bf0();
        }
        local_8 = 0xffffffff;
        FUN_005f9ce0(local_70,0,0x33e154,0,0,0x2774,0,0xff,0);
      }
      FUN_00652860();
      ExceptionList = local_10;
      return param_1;
    }
    if (5 < local_18) {
      FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0x2e);
      goto LAB_006516ab;
    }
    pvVar3 = operator_new(0x1f8);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = FUN_00652e20(param_1,local_18);
    }
    local_8 = 0xffffffff;
    param_1[local_18 + 8] = local_60;
    (**(code **)(*(int *)param_1[local_18 + 8] + 0x40))();
    (**(code **)(*(int *)param_1[local_18 + 8] + 0x78))(param_1[1] + 2,0x15);
    (**(code **)(*(int *)param_1[local_18 + 8] + 0x6c))(0x27ec);
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0x5e;
    uVar7 = 0x5e;
    uVar6 = 0x5e;
    uVar5 = 0x5e;
    uVar2 = FUN_00652c70(local_18);
    uVar2 = (**(code **)(*(int *)*param_1 + 0x230))(uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    (**(code **)(*(int *)param_1[local_18 + 8] + 0xdc))(uVar2);
    (**(code **)(*(int *)param_1[local_18 + 8] + 0x44))(local_18 * param_1[1] + 4,0x23f);
    (**(code **)(*(int *)param_1[local_18 + 8] + 0x74))();
    local_18 = local_18 + 1;
  } while( true );
}

