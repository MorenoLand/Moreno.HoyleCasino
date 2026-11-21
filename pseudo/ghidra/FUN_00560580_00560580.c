// FUN_00560580  00560580

void __fastcall FUN_00560580(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
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
  undefined4 local_88;
  int local_84 [13];
  char *local_50 [3];
  undefined8 local_44;
  int local_3c;
  undefined1 local_38 [20];
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5911;
  local_10 = ExceptionList;
  local_24 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50[0] = "SID_VIDEOPOKER_MULTI_COINSIN";
  local_50[1] = "SID_VIDEOPOKER_MULTI_CREDIT";
  local_50[2] = "SID_GENERIC_EMPTY";
  local_84[1] = 0x2a;
  local_84[2] = 0x117;
  local_84[3] = 0x1cc;
  local_84[4] = 0x117;
  local_84[5] = 0x1ae;
  local_84[6] = 0x140;
  local_84[7] = 0x31223e;
  local_84[8] = 0x31223f;
  local_84[9] = 0x312240;
  local_84[10] = 0x312241;
  local_84[0xb] = 0x312242;
  local_20 = 0;
  local_1c = 0;
  local_84[0xc] = 0;
  uVar1 = FUN_00630f40("SID_VIDEOPOKER_MULTI",local_24);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(0x312220);
  pvVar2 = operator_new(0x10);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_13c = 0;
  }
  else {
    local_13c = FUN_005666e0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = local_13c;
  FUN_005667d0();
  FUN_00566a20();
  FUN_00566970(100);
  pvVar2 = operator_new(0x184);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_140 = 0;
  }
  else {
    local_140 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = local_140;
  FUN_005eae80(0x312239,0,0,3,0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x178) = 3;
  pvVar2 = operator_new(0x184);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_144 = 0;
  }
  else {
    local_144 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = local_144;
  FUN_005eae80(0x31223a,0,0,100,0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x178) = 0;
  FUN_005628b0(&local_20,&local_1c,local_84 + 0xc);
  pvVar2 = operator_new(0x178);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_148 = 0;
  }
  else {
    local_148 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = local_148;
  FUN_005eae80(0x31223b,local_20,local_1c,600,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x7c) + 0xb0))(local_84[0xc]);
  (**(code **)(**(int **)(param_1 + 0x7c) + 0x44))(local_20,local_1c);
  (**(code **)(**(int **)(param_1 + 0x7c) + 0x74))();
  pvVar2 = operator_new(0x184);
  local_8 = 4;
  if (pvVar2 == (void *)0x0) {
    local_14c = 0;
  }
  else {
    local_14c = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = local_14c;
  uVar9 = 0xffffffff;
  uVar7 = 500;
  uVar6 = 0;
  uVar4 = 0;
  uVar1 = FUN_005616c0(0,0,500,0xffffffff);
  FUN_005eae80(uVar1,uVar4,uVar6,uVar7,uVar9);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x74))();
  FUN_005615d0(&local_18,&local_88,&local_14,local_84);
  pvVar2 = operator_new(0x178);
  local_8 = 5;
  if (pvVar2 == (void *)0x0) {
    local_150 = 0;
  }
  else {
    local_150 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = local_150;
  FUN_005eae80(local_18,0,0,500,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x74))();
  for (local_3c = 0; local_3c < 0xb; local_3c = local_3c + 1) {
    pvVar2 = operator_new(0x24);
    local_8 = 6;
    if (pvVar2 == (void *)0x0) {
      local_154 = 0;
    }
    else {
      local_154 = FUN_00562ac0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x8c + local_3c * 4) = local_154;
    *(undefined4 *)(*(int *)(param_1 + 0x8c + local_3c * 4) + 0x10) = local_14;
    *(undefined4 *)(*(int *)(param_1 + 0x8c + local_3c * 4) + 0xc) = local_88;
    *(int *)(*(int *)(param_1 + 0x8c + local_3c * 4) + 0x14) = local_3c;
    *(bool *)(*(int *)(param_1 + 0x8c + local_3c * 4) + 0x18) = local_3c <= local_84[0] + -1;
    FUN_00562bd0();
    if (*(char *)(*(int *)(param_1 + 0x8c + local_3c * 4) + 0x18) == '\0') {
      FUN_00562ff0();
    }
    else {
      FUN_00563080();
    }
  }
  pvVar2 = operator_new(0x184);
  local_8 = 7;
  if (pvVar2 == (void *)0x0) {
    local_158 = 0;
  }
  else {
    local_158 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = local_158;
  FUN_005eae80(0x31223c,0,0,500,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x84) + 0x70))();
  for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1) {
    pvVar2 = operator_new(0x1e4);
    local_8 = 8;
    if (pvVar2 == (void *)0x0) {
      local_15c = 0;
    }
    else {
      local_15c = FUN_005630c0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x60 + local_3c * 4) = local_15c;
    FUN_005eae80(local_84[local_3c + 7],0,0,1,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x60 + local_3c * 4) + 0x74))();
    *(int *)(*(int *)(param_1 + 0x60 + local_3c * 4) + 0x1dc) = local_3c;
    FUN_00602eb0();
    (**(code **)(**(int **)(param_1 + 0x60 + local_3c * 4) + 0xb0))((local_3c != 4) - 1U & 2);
    *(bool *)(*(int *)(param_1 + 0x60 + local_3c * 4) + 0x1e0) = local_3c == 4;
  }
  pvVar2 = operator_new(0x178);
  local_8 = 9;
  if (pvVar2 == (void *)0x0) {
    local_160 = 0;
  }
  else {
    local_160 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = local_160;
  FUN_005eae80(0x312259,0,0,600,0xffffffff);
  pvVar2 = operator_new(0x40);
  local_8 = 10;
  if (pvVar2 == (void *)0x0) {
    local_164 = 0;
  }
  else {
    local_164 = FUN_005655d0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = local_164;
  FUN_005656f0();
  FUN_00565a50(4);
  FUN_005664c0(0);
  pvVar2 = operator_new(0x178);
  local_8 = 0xb;
  if (pvVar2 == (void *)0x0) {
    local_168 = 0;
  }
  else {
    local_168 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = local_168;
  FUN_005eae80(0x312258,0,0,600,0xffffffff);
  pvVar2 = operator_new(0x40);
  local_8 = 0xc;
  if (pvVar2 == (void *)0x0) {
    local_16c = 0;
  }
  else {
    local_16c = FUN_005655d0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = local_16c;
  FUN_005656f0();
  FUN_00565a50(2);
  FUN_005664c0(0);
  pvVar2 = operator_new(0x178);
  local_8 = 0xd;
  if (pvVar2 == (void *)0x0) {
    local_170 = 0;
  }
  else {
    local_170 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8) = local_170;
  FUN_005eae80(0x31225a,0,0,600,0xffffffff);
  pvVar2 = operator_new(0x40);
  local_8 = 0xe;
  if (pvVar2 == (void *)0x0) {
    local_174 = 0;
  }
  else {
    local_174 = FUN_005655d0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = local_174;
  FUN_005656f0();
  FUN_00565a50(3);
  FUN_005664c0(0);
  for (local_3c = 0; local_3c < 3; local_3c = local_3c + 1) {
    pvVar2 = operator_new(0x1d0);
    local_8 = 0xf;
    if (pvVar2 == (void *)0x0) {
      local_178 = 0;
    }
    else {
      local_178 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xbc + local_3c * 4) = local_178;
    uVar10 = 0xffffffff;
    uVar8 = 5;
    uVar9 = 2;
    iVar5 = local_84[local_3c * 2 + 2];
    iVar3 = local_84[local_3c * 2 + 1];
    uVar7 = 0x14;
    uVar6 = 100;
    uVar4 = 0x2a;
    uVar1 = FUN_00630f40(local_50[local_3c],0x2a,100,0x14,iVar3,iVar5,2,5,0xffffffff);
    FUN_005ec8f0(uVar1,uVar4,uVar6,uVar7,iVar3,iVar5,uVar9,uVar8,uVar10);
    (**(code **)(**(int **)(param_1 + 0xbc + local_3c * 4) + 0x74))();
  }
  uVar1 = FUN_005d0aa0(0);
  local_44 = FUN_0064c8a0(uVar1);
  FUN_0064c8d0(local_44,local_38,1,1,1);
  (**(code **)(**(int **)(param_1 + 0xc4) + 0xb4))(local_38);
  for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1) {
    pvVar2 = operator_new(0x1a4);
    local_8 = 0x10;
    if (pvVar2 == (void *)0x0) {
      local_17c = 0;
    }
    else {
      local_17c = FUN_00564f10();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 8 + local_3c * 4) = local_17c;
    uVar7 = 0xffffffff;
    uVar6 = 10;
    uVar4 = 0x102;
    uVar1 = FUN_00560340(local_3c);
    FUN_005eae80(0x312245,uVar1,uVar4,uVar6,uVar7);
    local_20 = FUN_00560340(local_3c);
    local_1c = 0x102;
    pvVar2 = operator_new(0x184);
    local_8 = 0x11;
    if (pvVar2 == (void *)0x0) {
      local_180 = 0;
    }
    else {
      local_180 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c + local_3c * 4) = local_180;
    FUN_005eae80(0x312244,local_20,local_1c,2,0xffffffff);
    *(undefined4 *)(*(int *)(param_1 + 0x1c + local_3c * 4) + 0x178) = 0;
    pvVar2 = operator_new(0x178);
    local_8 = 0x12;
    if (pvVar2 == (void *)0x0) {
      local_184 = 0;
    }
    else {
      local_184 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c + local_3c * 4) = local_184;
    FUN_005eae80(0x312243,0,0,0x32,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x4c + local_3c * 4) + 0x70))();
  }
  pvVar2 = operator_new(0x910);
  local_8 = 0x13;
  if (pvVar2 == (void *)0x0) {
    local_188 = 0;
  }
  else {
    local_188 = FUN_00563d30();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = local_188;
  FUN_005640f0();
  FUN_00564490();
  for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1) {
    FUN_005f9de0(0,*(undefined4 *)(&DAT_00743c98 + local_3c * 4),local_3c + 0x312221,0,0,2,
                 &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  }
  FUN_005602a0();
  FUN_005f9de0(0,6,0x31223d,0,0,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  uVar1 = 0;
  FUN_005fb300(6);
  FUN_00602790(uVar1);
  FUN_00561950();
  ExceptionList = local_10;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffffc);
  return;
}

