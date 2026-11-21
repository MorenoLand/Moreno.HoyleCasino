// FUN_00553240  00553240

void __fastcall FUN_00553240(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_48 [7];
  int local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a54ad;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f1b10(0,0,0);
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_9c = 0;
  }
  else {
    local_9c = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = local_9c;
  uVar9 = 0xffffffff;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = FUN_005541c0(0,0,0,0xffffffff);
  FUN_005eae80(uVar3,uVar6,uVar7,uVar8,uVar9);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x74))();
  pvVar2 = operator_new(0x178);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = local_a0;
  FUN_005eae80(0x30f358,0,0,1,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x60) + 0x74))();
  pvVar2 = operator_new(0x1d4);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_a4 = 0;
  }
  else {
    local_a4 = FUN_0060f380();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = local_a4;
  FUN_0060f560(7,0x30f35b,0x6d,0x168,8,0xffffffff);
  pvVar2 = operator_new(0x1d4);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = FUN_0060f380();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = local_a8;
  FUN_0060f560(7,0x30f35b,0xf4,0x168,8,0xffffffff);
  pvVar2 = operator_new(0x1d4);
  local_8 = 4;
  if (pvVar2 == (void *)0x0) {
    local_ac = 0;
  }
  else {
    local_ac = FUN_0060f380();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = local_ac;
  FUN_0060f560(5,0x30f35b,0x20d,0x168,8,0xffffffff);
  local_48[0] = 0x40;
  local_48[1] = 0xc9;
  local_48[2] = 0x153;
  local_48[3] = 0x1dd;
  local_48[4] = 0x267;
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    pvVar2 = operator_new(0x1ac);
    local_8 = 5;
    if (pvVar2 == (void *)0x0) {
      local_b0 = 0;
    }
    else {
      local_b0 = FUN_00555510(0);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_2c * 4) = local_b0;
    FUN_005eae80(0x30f359,(local_48[local_2c] * 0x280) / 800,0xc2,2,0xffffffff);
    pvVar2 = operator_new(0x184);
    local_8 = 6;
    if (pvVar2 == (void *)0x0) {
      local_b4 = 0;
    }
    else {
      local_b4 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18 + local_2c * 4) = local_b4;
    FUN_005eae80(0x30f353,(local_48[local_2c] * 0x280) / 800,0xe0,8,0xffffffff);
    *(undefined4 *)(*(int *)(param_1 + 0x18 + local_2c * 4) + 0x178) = 0;
    pvVar2 = operator_new(0x178);
    local_8 = 7;
    if (pvVar2 == (void *)0x0) {
      local_b8 = 0;
    }
    else {
      local_b8 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c + local_2c * 4) = local_b8;
    uVar7 = 0xffffffff;
    uVar6 = 7;
    uVar3 = (**(code **)(**(int **)(param_1 + 4 + local_2c * 4) + 0x54))(7,0xffffffff);
    iVar4 = (**(code **)(**(int **)(param_1 + 4 + local_2c * 4) + 0x4c))(uVar3);
    iVar5 = FUN_005f5550();
    FUN_005eae80(0x30f35a,iVar4 + iVar5 / 2,uVar3,uVar6,uVar7);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x4c + local_2c * 4) + 0x54))();
    iVar5 = FUN_005f5590();
    iVar4 = (**(code **)(**(int **)(param_1 + 0x4c + local_2c * 4) + 0x4c))(iVar4 - iVar5 / 2);
    iVar5 = FUN_005f5550();
    (**(code **)(**(int **)(param_1 + 0x4c + local_2c * 4) + 0x44))(iVar4 - iVar5 / 2);
  }
  pvVar2 = operator_new(0x184);
  local_8 = 8;
  if (pvVar2 == (void *)0x0) {
    local_bc = 0;
  }
  else {
    local_bc = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = local_bc;
  FUN_005eae80(0x30f351,0,0,8,0xffffffff);
  *(uint *)(*(int *)(param_1 + 0x68) + 0x178) =
       (-(uint)(*(char *)(DAT_0162ee84 + 0x25) != '\0') & 2) + 3;
  for (local_2c = 0; local_2c < 7; local_2c = local_2c + 1) {
    FUN_005f9de0(0,*(undefined4 *)(&DAT_0073efe0 + local_2c * 4),local_2c + 0x30f34a,0,0,8,
                 &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  }
  FUN_005f9de0(0,6,0x30f352,0,0,8,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  uVar3 = 0;
  FUN_005fb300(6);
  FUN_00602790(uVar3);
  ExceptionList = local_10;
  return;
}

