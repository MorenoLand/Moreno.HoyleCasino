// FUN_00553960  00553960

void __fastcall FUN_00553960(int param_1)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_6c [11];
  undefined8 local_40;
  char *local_38 [3];
  int local_2c;
  undefined1 local_28 [20];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a554e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_005f1ad0(0x30f340);
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_d0 = 0;
  }
  else {
    local_d0 = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = local_d0;
  uVar12 = 0xffffffff;
  uVar10 = 0;
  uVar8 = 0;
  uVar6 = 0;
  uVar3 = FUN_005541c0(0,0,0,0xffffffff);
  FUN_005eae80(uVar3,uVar6,uVar8,uVar10,uVar12);
  (**(code **)(**(int **)(param_1 + 0x60) + 0x74))();
  pvVar2 = operator_new(0x178);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_d4 = 0;
  }
  else {
    local_d4 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = local_d4;
  FUN_005eae80(0x1388c,0,0,1,0xffffffff);
  (**(code **)(**(int **)(param_1 + 100) + 0x74))();
  pvVar2 = operator_new(0x1d0);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_d8 = 0;
  }
  else {
    local_d8 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = local_d8;
  FUN_005ec8f0(&DAT_006b2b64,0x2a,0x50,0x19,0x136,0x181,8,0x12,0xffffffff);
  pvVar2 = operator_new(0x1d0);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_dc = 0;
  }
  else {
    local_dc = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = local_dc;
  FUN_005ec8f0(&DAT_006b2b64,0x2a,0x23,0x19,0x95,0x181,8,0x30,0xffffffff);
  pvVar2 = operator_new(0x1d0);
  local_8 = 4;
  if (pvVar2 == (void *)0x0) {
    local_e0 = 0;
  }
  else {
    local_e0 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = local_e0;
  uVar13 = 0xffffffff;
  uVar11 = 0x12;
  uVar9 = 8;
  uVar7 = 0xd8;
  uVar12 = 300;
  uVar10 = 0x19;
  uVar8 = 0x50;
  uVar6 = 0x2a;
  uVar3 = FUN_00630f40("SID_VIDEOPOKER_GAMEOVER",0x2a,0x50,0x19,300,0xd8,8,0x12,0xffffffff);
  FUN_005ec8f0(uVar3,uVar6,uVar8,uVar10,uVar12,uVar7,uVar9,uVar11,uVar13);
  local_38[0] = "SID_VIDEOPOKER_COINSIN";
  local_38[1] = "SID_VIDEOPOKER_CREDIT";
  local_38[2] = "SID_GENERIC_EMPTY";
  local_6c[0] = 0x91;
  local_6c[1] = 0x172;
  local_6c[2] = 0x168;
  local_6c[3] = 0x172;
  local_6c[4] = 0x91;
  local_6c[5] = 0xd8;
  for (local_2c = 0; local_2c < 3; local_2c = local_2c + 1) {
    pvVar2 = operator_new(0x1d0);
    local_8 = 5;
    if (pvVar2 == (void *)0x0) {
      local_e4 = 0;
    }
    else {
      local_e4 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x78 + local_2c * 4) = local_e4;
    uVar13 = 0xffffffff;
    uVar11 = 5;
    uVar9 = 8;
    uVar3 = local_6c[local_2c * 2 + 1];
    uVar6 = local_6c[local_2c * 2];
    uVar7 = 0x14;
    uVar12 = 100;
    uVar10 = 0x2a;
    uVar8 = FUN_00630f40(local_38[local_2c],0x2a,100,0x14,uVar6,uVar3,8,5,0xffffffff);
    FUN_005ec8f0(uVar8,uVar10,uVar12,uVar7,uVar6,uVar3,uVar9,uVar11,uVar13);
    (**(code **)(**(int **)(param_1 + 0x78 + local_2c * 4) + 0x74))();
  }
  uVar3 = FUN_005d0aa0(0);
  local_40 = FUN_0064c8a0(uVar3);
  FUN_0064c8d0(local_40,local_28,1,1,1);
  (**(code **)(**(int **)(param_1 + 0x80) + 0xb4))(local_28);
  local_6c[6] = 0x85;
  local_6c[7] = 0xbc;
  local_6c[8] = 0xf3;
  local_6c[9] = 0x12a;
  local_6c[10] = 0x161;
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    pvVar2 = operator_new(0x1ac);
    local_8 = 6;
    if (pvVar2 == (void *)0x0) {
      local_e8 = 0;
    }
    else {
      local_e8 = FUN_00555510(1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_2c * 4) = local_e8;
    FUN_005eae80(0x30f341,local_6c[local_2c + 6],0x125,2,0xffffffff);
    pvVar2 = operator_new(0x184);
    local_8 = 7;
    if (pvVar2 == (void *)0x0) {
      local_ec = 0;
    }
    else {
      local_ec = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18 + local_2c * 4) = local_ec;
    FUN_005eae80(0x13899,local_6c[local_2c + 6],0x118,8,0xffffffff);
    *(undefined4 *)(*(int *)(param_1 + 0x18 + local_2c * 4) + 0x178) = 0;
    pvVar2 = operator_new(0x1d0);
    local_8 = 8;
    if (pvVar2 == (void *)0x0) {
      local_f0 = 0;
    }
    else {
      local_f0 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9c + local_2c * 4) = local_f0;
    uVar9 = 0xffffffff;
    uVar7 = 5;
    uVar12 = 7;
    iVar4 = (**(code **)(**(int **)(param_1 + 4 + local_2c * 4) + 0x54))(7,5,0xffffffff);
    iVar4 = iVar4 + -0x23;
    iVar5 = (**(code **)(**(int **)(param_1 + 4 + local_2c * 4) + 0x4c))(iVar4);
    iVar5 = iVar5 + 10;
    uVar10 = 0x14;
    uVar8 = 100;
    uVar6 = 0x2a;
    uVar3 = FUN_00630f40("SID_VIDEOPOKER_HELD",0x2a,100,0x14,iVar5);
    FUN_005ec8f0(uVar3,uVar6,uVar8,uVar10,iVar5,iVar4,uVar12,uVar7,uVar9);
  }
  pvVar2 = operator_new(0x184);
  local_8 = 9;
  if (pvVar2 == (void *)0x0) {
    local_f4 = 0;
  }
  else {
    local_f4 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = local_f4;
  FUN_005eae80(0x1388b,0,0,8,0xffffffff);
  *(uint *)(*(int *)(param_1 + 0x68) + 0x178) =
       (-(uint)(*(char *)(DAT_0162ee84 + 0x25) != '\0') & 2) + 3;
  for (local_2c = 0; local_2c < 7; local_2c = local_2c + 1) {
    FUN_005f9de0(0,*(undefined4 *)(&DAT_0073efe0 + local_2c * 4),local_2c + 0x13883,0,0,8,
                 &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  }
  FUN_005f9de0(0,6,0x1388d,0,0,8,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  uVar3 = 0;
  FUN_005fb300(6);
  FUN_00602790(uVar3);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

