// FUN_00440700  00440700

void __fastcall FUN_00440700(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_150;
  int local_ec;
  int local_e8 [31];
  ulong *local_6c [19];
  int local_20;
  void *local_1c [4];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e9a1;
  local_1c[3] = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = local_1c + 3;
  local_20 = 0;
  local_6c[10] = (ulong *)0x7c;
  local_6c[0xb] = (ulong *)0xb1;
  local_6c[0xc] = (ulong *)0xe9;
  local_1c[0] = (void *)0x1d4c9;
  local_1c[1] = (void *)0x1d4c7;
  local_1c[2] = (void *)0x1d4d5;
  local_6c[0] = (ulong *)0x165;
  local_6c[1] = (ulong *)0x143;
  local_6c[2] = (ulong *)0x122;
  local_6c[3] = (ulong *)0x100;
  local_6c[4] = (ulong *)0xe0;
  local_e8[0] = 0x12e;
  local_e8[1] = 0xa1;
  local_e8[2] = 0x193;
  local_e8[3] = 0xa1;
  local_e8[4] = 0x1ea;
  local_e8[5] = 0xa1;
  local_e8[6] = 0x12e;
  local_e8[7] = 0x91;
  local_e8[8] = 0x193;
  local_e8[9] = 0x91;
  local_e8[10] = 0x1ea;
  local_e8[0xb] = 0x91;
  local_e8[0xc] = 0x12e;
  local_e8[0xd] = 0x81;
  local_e8[0xe] = 0x193;
  local_e8[0xf] = 0x81;
  local_e8[0x10] = 0x1ea;
  local_e8[0x11] = 0x81;
  local_e8[0x12] = 0x12e;
  local_e8[0x13] = 0x71;
  local_e8[0x14] = 0x193;
  local_e8[0x15] = 0x71;
  local_e8[0x16] = 0x1ea;
  local_e8[0x17] = 0x71;
  local_e8[0x18] = 0x12e;
  local_e8[0x19] = 0x61;
  local_e8[0x1a] = 0x193;
  local_e8[0x1b] = 0x61;
  local_e8[0x1c] = 0x1ea;
  local_e8[0x1d] = 0x61;
  local_6c[5] = (ulong *)0x174;
  local_6c[6] = (ulong *)0x153;
  local_6c[7] = (ulong *)0x131;
  local_6c[8] = (ulong *)0x10f;
  local_6c[9] = (ulong *)0xee;
  local_6c[0xd] = (ulong *)0x9a;
  local_6c[0xe] = (ulong *)0x8a;
  local_6c[0xf] = (ulong *)0x7a;
  local_6c[0x10] = (ulong *)0x6a;
  local_6c[0x11] = (ulong *)0x5a;
  iVar2 = FUN_005fb300(0);
  if (iVar2 == 0) {
    FUN_005f9de0(0,0,0x1d4cc,0x1e0,0x1b7,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff
                 ,0);
  }
  piVar3 = (int *)FUN_005fb300(0);
  (**(code **)(*piVar3 + 0x74))(uVar1);
  iVar2 = FUN_005fb300(1);
  if (iVar2 == 0) {
    FUN_005f9de0(0,1,0x1d4cb,0x163,0x1b7,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff
                 ,0);
  }
  piVar3 = (int *)FUN_005fb300(1);
  (**(code **)(*piVar3 + 0x74))();
  for (local_6c[0x12] = (ulong *)0x0; (int)local_6c[0x12] < 5;
      local_6c[0x12] = (ulong *)((int)local_6c[0x12] + 1)) {
    iVar2 = FUN_005fb810((int)local_6c[0x12] + 0x14);
    if (iVar2 == 0) {
      pvVar4 = operator_new(0x1fc);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_150 = 0;
      }
      else {
        local_150 = FUN_00443420();
      }
      local_8 = 0xffffffff;
      FUN_005fa6a0(local_150,(int)local_6c[0x12] + 0x14,0x1d4d8,0x12,local_6c[(int)local_6c[0x12]],
                   &PTR_006b27f8,0x19,0x5a,0x19,5,4,2,4,0x30);
    }
    iVar2 = FUN_005fb810((int)local_6c[0x12] + 0x14);
    *(undefined1 *)(iVar2 + 0x9d) = 1;
    if (local_6c[0x12] != (ulong *)0x4) {
      FUN_005fb810((int)local_6c[0x12] + 0x14);
      FUN_0060c330();
    }
    piVar3 = (int *)FUN_005fb810((int)local_6c[0x12] + 0x14);
    (**(code **)(*piVar3 + 0x74))();
  }
  for (local_6c[0x12] = (ulong *)0x0; (int)local_6c[0x12] < 5;
      local_6c[0x12] = (ulong *)((int)local_6c[0x12] + 1)) {
    for (local_ec = 0; local_ec < 3; local_ec = local_ec + 1) {
      pvVar4 = CPropertySection::Get
                         (*(CPropertySection **)(DAT_0162ee84 + 0x14),local_20 + 5,local_6c[0x12]);
      if (pvVar4 == (void *)0x0) {
        FUN_005f9ff0(0,0,local_20 + 5,local_6c[0x12],local_1c[local_ec],local_6c[local_ec + 10],
                     (4 - (int)local_6c[0x12]) * 0x21 + 0xd8,1,&PTR_006b27f8,0,0xffffffff,0xffffffff
                     ,0xffffffff,0x14,0);
      }
      uVar12 = 3;
      uVar11 = 3;
      uVar10 = 3;
      uVar9 = 3;
      uVar8 = 0;
      uVar7 = 2;
      uVar6 = 1;
      uVar5 = 0;
      CPropertySection::Get(*(CPropertySection **)(DAT_0162ee84 + 0x14),local_20 + 5,local_6c[0x12])
      ;
      FUN_005fff90(uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
      piVar3 = CPropertySection::Get
                         (*(CPropertySection **)(DAT_0162ee84 + 0x14),local_20 + 5,local_6c[0x12]);
      (**(code **)(*piVar3 + 0x74))();
      local_20 = local_20 + 1;
    }
  }
  for (local_6c[0x12] = (ulong *)0x0; (int)local_6c[0x12] < 0xf;
      local_6c[0x12] = (ulong *)((int)local_6c[0x12] + 1)) {
    if (*(int *)(param_1 + 0x34 + (int)local_6c[0x12] * 4) == 0) {
      pvVar4 = operator_new(0x1d0);
      local_8 = 1;
      if (pvVar4 == (void *)0x0) {
        local_15c = 0;
      }
      else {
        local_15c = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x34 + (int)local_6c[0x12] * 4) = local_15c;
      FUN_005ec8f0(&PTR_006b27f8,0x6a,0x55,0xf,local_e8[(int)local_6c[0x12] * 2] + -0x11,
                   local_e8[(int)local_6c[0x12] * 2 + 1],1,0x12,0xffffffff);
    }
  }
  for (local_6c[0x12] = (ulong *)0x0; (int)local_6c[0x12] < 5;
      local_6c[0x12] = (ulong *)((int)local_6c[0x12] + 1)) {
    if (*(int *)(param_1 + 0x70 + (int)local_6c[0x12] * 4) == 0) {
      pvVar4 = operator_new(0x1d0);
      local_8 = 2;
      if (pvVar4 == (void *)0x0) {
        local_160 = 0;
      }
      else {
        local_160 = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x70 + (int)local_6c[0x12] * 4) = local_160;
      FUN_005ec8f0(&PTR_006b27f8,0x19,0x32,0xf,0x1c8,local_6c[(int)local_6c[0x12] + 5],1,0x12,
                   0xffffffff);
    }
  }
  for (local_6c[0x12] = (ulong *)0x0; (int)local_6c[0x12] < 5;
      local_6c[0x12] = (ulong *)((int)local_6c[0x12] + 1)) {
    if (*(int *)(param_1 + 0x84 + (int)local_6c[0x12] * 4) == 0) {
      pvVar4 = operator_new(0x1d0);
      local_8 = 3;
      if (pvVar4 == (void *)0x0) {
        local_164 = 0;
      }
      else {
        local_164 = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x84 + (int)local_6c[0x12] * 4) = local_164;
      FUN_005ec8f0(&PTR_006b27f8,0x19,100,0xf,0x208,local_6c[(int)local_6c[0x12] + 5],2,0x30,
                   0xffffffff);
    }
  }
  for (local_6c[0x12] = (ulong *)0x0; (int)local_6c[0x12] < 5;
      local_6c[0x12] = (ulong *)((int)local_6c[0x12] + 1)) {
    if (*(int *)(param_1 + 0x20 + (int)local_6c[0x12] * 4) == 0) {
      pvVar4 = operator_new(0x178);
      local_8 = 4;
      if (pvVar4 == (void *)0x0) {
        local_168 = 0;
      }
      else {
        local_168 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x20 + (int)local_6c[0x12] * 4) = local_168;
      FUN_005eae80(0x1d4f4,0x1e,local_6c[(int)local_6c[0x12] + 0xd],2,0xffffffff);
      (**(code **)(**(int **)(param_1 + 0x20 + (int)local_6c[0x12] * 4) + 0xb0))
                (4 - (int)local_6c[0x12]);
    }
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    pvVar4 = operator_new(0x1d0);
    local_8 = 5;
    if (pvVar4 == (void *)0x0) {
      local_16c = 0;
    }
    else {
      local_16c = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x98) = local_16c;
    FUN_005ec8f0(&PTR_006b27f8,0x19,100,0xf,0x11,0x19e,1,0x30,0xffffffff);
  }
  (**(code **)(**(int **)(param_1 + 0x98) + 0x74))();
  if (*(int *)(param_1 + 0x9c) == 0) {
    pvVar4 = operator_new(0x1d0);
    local_8 = 6;
    if (pvVar4 == (void *)0x0) {
      local_170 = 0;
    }
    else {
      local_170 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9c) = local_170;
    FUN_005ec8f0(&PTR_006b27f8,0x19,100,0xf,0x208,0x19e,1,0x30,0xffffffff);
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    pvVar4 = operator_new(0x184);
    local_8 = 7;
    if (pvVar4 == (void *)0x0) {
      local_174 = 0;
    }
    else {
      local_174 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa0) = local_174;
    FUN_005eae80(0x1d4f0,0x80,0xd3,2,0xffffffff);
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x178) = 0x14;
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    pvVar4 = operator_new(0x184);
    local_8 = 8;
    if (pvVar4 == (void *)0x0) {
      local_178 = 0;
    }
    else {
      local_178 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa4) = local_178;
    FUN_005eae80(0x1d4fa,2,0,2,0xffffffff);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0x178) = 0;
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x74))();
  pvVar4 = operator_new(0x1c);
  local_8 = 9;
  if (pvVar4 == (void *)0x0) {
    local_17c = 0;
  }
  else {
    local_17c = FUN_00600a70(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_17c);
  ExceptionList = local_1c[3];
  return;
}

