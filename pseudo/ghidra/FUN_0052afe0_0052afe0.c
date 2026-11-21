// FUN_0052afe0  0052afe0

void __fastcall FUN_0052afe0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a441e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_00630f40("SID_SLOTMACHINES",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar2);
  FUN_0052a780();
  FUN_0052aac0();
  pvVar3 = operator_new(0x178);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_11c = 0;
  }
  else {
    local_11c = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = local_11c;
  FUN_005eae80(*(undefined4 *)(param_1 + 0x168),0,0,0,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x74))();
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    pvVar3 = operator_new(0x178);
    local_8 = 1;
    if (pvVar3 == (void *)0x0) {
      local_120 = 0;
    }
    else {
      local_120 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa0 + local_14 * 4) = local_120;
    FUN_005eae80(*(undefined4 *)(param_1 + 0x16c + local_14 * 4),0,*(undefined4 *)(param_1 + 0x100),
                 0x32,0xffffffff);
    cVar1 = FUN_00538440();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0xa0 + local_14 * 4) + 0x74))();
    }
    pvVar3 = operator_new(0x184);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_124 = 0;
    }
    else {
      local_124 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb4 + local_14 * 4) = local_124;
    FUN_005eae80(*(undefined4 *)(param_1 + 0x16c + local_14 * 4),0,*(undefined4 *)(param_1 + 0x100),
                 0x32,0xffffffff);
    *(undefined4 *)(*(int *)(param_1 + 0xb4 + local_14 * 4) + 0x178) = 8;
  }
  pvVar3 = operator_new(0x184);
  local_8 = 3;
  if (pvVar3 == (void *)0x0) {
    local_128 = 0;
  }
  else {
    local_128 = FUN_0052e750();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = local_128;
  FUN_005eae80(*(undefined4 *)(param_1 + 0x110),0,*(undefined4 *)(param_1 + 0x100),0x46,0xffffffff);
  (**(code **)(**(int **)(param_1 + 4) + 0x74))();
  pvVar3 = operator_new(0x184);
  local_8 = 4;
  if (pvVar3 == (void *)0x0) {
    local_12c = 0;
  }
  else {
    local_12c = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = local_12c;
  FUN_005eae80(*(undefined4 *)(param_1 + 0x118),0,*(undefined4 *)(param_1 + 0x100),0x5a,0xffffffff);
  *(uint *)(*(int *)(param_1 + 8) + 0x178) = (*(char *)(DAT_0162ee84 + 0x25) != '\0') + 4;
  pvVar3 = operator_new(0x184);
  local_8 = 5;
  if (pvVar3 == (void *)0x0) {
    local_130 = 0;
  }
  else {
    local_130 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = local_130;
  FUN_005eae80(*(undefined4 *)(param_1 + 0x11c),0,0,0x5a,0xffffffff);
  pvVar3 = operator_new(0x1d0);
  local_8 = 6;
  if (pvVar3 == (void *)0x0) {
    local_134 = 0;
  }
  else {
    local_134 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = local_134;
  FUN_005ec8f0(&DAT_006b2b64,0x2e,0xf,0x1c,0xad,
               *(int *)(param_1 + 0x100) + 0x13c + *(int *)(param_1 + 0x104),0x46,6,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x74))();
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 7;
    if (pvVar3 == (void *)0x0) {
      local_138 = 0;
    }
    else {
      local_138 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x74 + local_14 * 4) = local_138;
    FUN_005ec8f0(&PTR_006b27f8,0x2e,0xc,0x12,local_14 * -0xc + 0x10d,
                 *(int *)(param_1 + 0x100) + 0x13c + *(int *)(param_1 + 0x108),0x46,5,0xffffffff);
    if (local_14 == 0) {
      (**(code **)(**(int **)(param_1 + 0x74) + 0xb4))(&DAT_006b2b64);
    }
    (**(code **)(**(int **)(param_1 + 0x74 + local_14 * 4) + 0x74))();
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 8;
    if (pvVar3 == (void *)0x0) {
      local_13c = 0;
    }
    else {
      local_13c = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x90 + local_14 * 4) = local_13c;
    FUN_005ec8f0(&PTR_006b27f8,0x2e,0xc,0x12,local_14 * -0xc + 0x181,
                 *(int *)(param_1 + 0x100) + 0x13c + *(int *)(param_1 + 0x10c),0x46,5,0xffffffff);
    if (local_14 == 0) {
      (**(code **)(**(int **)(param_1 + 0x90) + 0xb4))(&DAT_006b2b64);
    }
    (**(code **)(**(int **)(param_1 + 0x90 + local_14 * 4) + 0x74))();
  }
  pvVar3 = operator_new(0x184);
  local_8 = 9;
  if (pvVar3 == (void *)0x0) {
    local_140 = 0;
  }
  else {
    local_140 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = local_140;
  FUN_005eae80(*(undefined4 *)(param_1 + 0x120),0,*(undefined4 *)(param_1 + 0x100),100,0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x178) = 0;
  pvVar3 = operator_new(0x178);
  local_8 = 10;
  if (pvVar3 == (void *)0x0) {
    local_144 = 0;
  }
  else {
    local_144 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = local_144;
  uVar9 = 0xffffffff;
  uVar8 = 0x19;
  uVar2 = *(undefined4 *)(param_1 + 0x100);
  uVar7 = 0;
  uVar4 = FUN_0052d140(0,uVar2,0x19,0xffffffff);
  FUN_005eae80(uVar4,uVar7,uVar2,uVar8,uVar9);
  (**(code **)(**(int **)(param_1 + 0x28) + 0xb0))(*(undefined4 *)(DAT_007947e0 + 0x4f10));
  (**(code **)(**(int **)(param_1 + 0x28) + 0x74))();
  pvVar3 = operator_new(0x178);
  local_8 = 0xb;
  if (pvVar3 == (void *)0x0) {
    local_148 = 0;
  }
  else {
    local_148 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = local_148;
  uVar9 = 0xffffffff;
  uVar8 = 0x14;
  uVar2 = *(undefined4 *)(param_1 + 0x100);
  uVar7 = 0;
  uVar4 = FUN_0052d120(0,uVar2,0x14,0xffffffff);
  FUN_005eae80(uVar4,uVar7,uVar2,uVar8,uVar9);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x74))();
  if (*(char *)(param_1 + 0x128) != '\0') {
    pvVar3 = operator_new(0x178);
    local_8 = 0xc;
    if (pvVar3 == (void *)0x0) {
      local_14c = 0;
    }
    else {
      local_14c = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = local_14c;
    uVar8 = 0xffffffff;
    uVar7 = 0xf;
    uVar2 = *(undefined4 *)(param_1 + 0x100);
    uVar4 = 0;
    iVar5 = FUN_0062fbf0(3,0,uVar2,0xf,0xffffffff);
    FUN_005eae80(*(undefined4 *)(param_1 + 300 + iVar5 * 4),uVar4,uVar2,uVar7,uVar8);
    (**(code **)(**(int **)(param_1 + 0x18) + 0x74))();
  }
  if (*(char *)(param_1 + 0x129) != '\0') {
    pvVar3 = operator_new(0x178);
    local_8 = 0xd;
    if (pvVar3 == (void *)0x0) {
      local_150 = 0;
    }
    else {
      local_150 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = local_150;
    uVar8 = 0xffffffff;
    uVar7 = 0xf;
    uVar2 = *(undefined4 *)(param_1 + 0x100);
    uVar4 = 0;
    iVar5 = FUN_0062fbf0(3,0,uVar2,0xf,0xffffffff);
    FUN_005eae80(*(undefined4 *)(param_1 + 0x138 + iVar5 * 4),uVar4,uVar2,uVar7,uVar8);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
  }
  cVar1 = (**(code **)(*DAT_00793394 + 0x3c))();
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x18) != 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x70))();
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
    }
  }
  pvVar3 = operator_new(0x178);
  local_8 = 0xe;
  if (pvVar3 == (void *)0x0) {
    local_154 = 0;
  }
  else {
    local_154 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = local_154;
  FUN_005eae80(*(undefined4 *)(param_1 + 0x124),0,0,0xf,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x74))();
  cVar1 = FUN_00538440();
  if (cVar1 == '\0') {
    cVar1 = FUN_00538490();
    if (cVar1 != '\0') {
      pvVar3 = operator_new(500);
      local_8 = 0x11;
      if (pvVar3 == (void *)0x0) {
        local_160 = 0;
      }
      else {
        local_160 = FUN_00531f00(0xd9,0,0x19);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x5c) = local_160;
      FUN_00532760();
    }
  }
  else {
    pvVar3 = operator_new(0x178);
    local_8 = 0xf;
    if (pvVar3 == (void *)0x0) {
      local_158 = 0;
    }
    else {
      local_158 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = local_158;
    FUN_005eae80(0x15fd4,0,*(undefined4 *)(param_1 + 0x100),10,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0xac) + 0x74))();
    pvVar3 = operator_new(0x1c4);
    local_8 = 0x10;
    if (pvVar3 == (void *)0x0) {
      local_15c = 0;
    }
    else {
      local_15c = FUN_00531150(0xa7,*(int *)(param_1 + 0x100) + 0x10,0x1d3,
                               *(int *)(param_1 + 0x100) + 0x44,0xd);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb0) = local_15c;
    *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x184) = 0;
    if (*(int *)(DAT_007947e0 + 0x4f14) == 10) {
      *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x184) = 1;
    }
    FUN_00531620();
  }
  pvVar3 = operator_new(0x178);
  local_8 = 0x12;
  if (pvVar3 == (void *)0x0) {
    local_164 = 0;
  }
  else {
    local_164 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = local_164;
  FUN_005eae80(*(undefined4 *)(param_1 + 0x144),0,*(undefined4 *)(param_1 + 0x100),6,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x74))();
  pvVar3 = operator_new(0x178);
  local_8 = 0x13;
  if (pvVar3 == (void *)0x0) {
    local_168 = 0;
  }
  else {
    local_168 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = local_168;
  FUN_005eae80(0x30efc0,0,0,0x19,0xffffffff);
  iVar5 = (**(code **)(*DAT_00793394 + 0x40))();
  if (iVar5 == 1) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0xb0))(0);
  }
  else if (iVar5 == 3) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0xb0))(1);
  }
  else if (iVar5 == 5) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0xb0))(2);
  }
  iVar5 = (**(code **)(*DAT_00793394 + 0x38))();
  if (iVar5 == 1) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x74))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x70))();
  }
  pvVar3 = operator_new(0x184);
  local_8 = 0x14;
  if (pvVar3 == (void *)0x0) {
    local_170 = 0;
  }
  else {
    local_170 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc4) = local_170;
  uVar9 = 0xffffffff;
  uVar8 = 100;
  uVar2 = *(undefined4 *)(param_1 + 0x100);
  uVar7 = 0;
  uVar4 = FUN_0052d250(0,uVar2,100,0xffffffff);
  FUN_005eae80(uVar4,uVar7,uVar2,uVar8,uVar9);
  *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x178) = 8;
  pvVar3 = operator_new(0x184);
  local_8 = 0x15;
  if (pvVar3 == (void *)0x0) {
    local_174 = 0;
  }
  else {
    local_174 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = local_174;
  uVar9 = 0xffffffff;
  uVar8 = 100;
  uVar2 = *(undefined4 *)(param_1 + 0x100);
  uVar7 = 0;
  uVar4 = FUN_0052d1f0(0,uVar2,100,0xffffffff);
  FUN_005eae80(uVar4,uVar7,uVar2,uVar8,uVar9);
  *(undefined4 *)(*(int *)(param_1 + 200) + 0x178) = 6;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    pvVar3 = operator_new(0x184);
    local_8 = 0x16;
    if (pvVar3 == (void *)0x0) {
      local_178 = 0;
    }
    else {
      local_178 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xcc + local_14 * 4) = local_178;
    uVar9 = 0xffffffff;
    uVar8 = 100;
    uVar2 = *(undefined4 *)(param_1 + 0x100);
    uVar7 = 0;
    uVar4 = FUN_0052d250(0,uVar2,100,0xffffffff);
    FUN_005eae80(uVar4,uVar7,uVar2,uVar8,uVar9);
    *(undefined4 *)(*(int *)(param_1 + 0xcc + local_14 * 4) + 0x178) = 8;
    pvVar3 = operator_new(0x184);
    local_8 = 0x17;
    if (pvVar3 == (void *)0x0) {
      local_17c = 0;
    }
    else {
      local_17c = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xe0 + local_14 * 4) = local_17c;
    uVar9 = 0xffffffff;
    uVar8 = 100;
    uVar2 = *(undefined4 *)(param_1 + 0x100);
    uVar7 = 0;
    uVar4 = FUN_0052d230(0,uVar2,100,0xffffffff);
    FUN_005eae80(uVar4,uVar7,uVar2,uVar8,uVar9);
    *(undefined4 *)(*(int *)(param_1 + 0xe0 + local_14 * 4) + 0x178) = 8;
  }
  FUN_005f9de0(0,0,*(undefined4 *)(param_1 + 0x154),0,*(undefined4 *)(param_1 + 0x100),0x46,
               &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  FUN_005f9de0(0,1,*(undefined4 *)(param_1 + 0x158),0,*(undefined4 *)(param_1 + 0x100),0x46,
               &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  FUN_005f9de0(0,2,*(undefined4 *)(param_1 + 0x15c),0,*(undefined4 *)(param_1 + 0x100),0x46,
               &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  FUN_005f9de0(0,3,*(undefined4 *)(param_1 + 0x160),0,*(undefined4 *)(param_1 + 0x100),0x46,
               &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  FUN_005f9de0(0,4,*(undefined4 *)(param_1 + 0x164),0,*(undefined4 *)(param_1 + 0x100),0x46,
               &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    piVar6 = (int *)FUN_005fb300(local_14);
    (**(code **)(*piVar6 + 0xd0))();
  }
  FUN_005f9de0(0,5,*(undefined4 *)(param_1 + 0x148),0,*(undefined4 *)(param_1 + 0x100),0x50,
               &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  uVar2 = 0;
  FUN_005fb300(5);
  FUN_00602790(uVar2);
  pvVar3 = operator_new(0x178);
  local_8 = 0x18;
  if (pvVar3 == (void *)0x0) {
    local_184 = 0;
  }
  else {
    local_184 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = local_184;
  FUN_005eae80(*(undefined4 *)(param_1 + 0x14c),0,*(undefined4 *)(param_1 + 0x100),10000,0xffffffff)
  ;
  pvVar3 = operator_new(0x178);
  local_8 = 0x19;
  if (pvVar3 == (void *)0x0) {
    local_188 = 0;
  }
  else {
    local_188 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = local_188;
  FUN_005eae80(*(undefined4 *)(param_1 + 0x150),0,*(undefined4 *)(param_1 + 0x100),10000,0xffffffff)
  ;
  if (*(int *)(DAT_007947e0 + 0x4f14) == 10) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x34) + 0x74))();
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    pvVar3 = operator_new(0x1b0);
    local_8 = 0x1a;
    if (pvVar3 == (void *)0x0) {
      local_18c = 0;
    }
    else {
      local_18c = FUN_0052ea10(local_14);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf4 + local_14 * 4) = local_18c;
    (**(code **)(**(int **)(param_1 + 0xf4 + local_14 * 4) + 0x40))();
    uVar2 = FUN_0052d160();
    FUN_0052edc0(uVar2);
    uVar2 = FUN_0052d210();
    iVar5 = FUN_0052d1d0(uVar2);
    iVar5 = iVar5 + *(int *)(param_1 + 0x100);
    uVar4 = FUN_0052d1a0(local_14);
    FUN_0052ee40(uVar4,iVar5,uVar2);
    (**(code **)(**(int **)(param_1 + 0xf4 + local_14 * 4) + 0x74))();
  }
  FUN_0052ddf0();
  FUN_0052cd40();
  ExceptionList = local_10;
  return;
}

