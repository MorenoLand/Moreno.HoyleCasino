// FUN_005bd050  005bd050

void __fastcall FUN_005bd050(int *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *local_154;
  uint local_14c;
  uint local_144;
  int local_140;
  int iStack_13c;
  uint uStack_138;
  int iStack_134;
  uint uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  int *piStack_124;
  undefined4 uStack_120;
  int *piStack_11c;
  uint uStack_118;
  int iStack_114;
  uint uStack_110;
  int iStack_10c;
  undefined4 *puStack_108;
  uint uStack_fc;
  int local_40;
  int local_3c;
  int local_38;
  uint local_30;
  int *piStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a822c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005c1550(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(param_1[0x15]) {
  case 1:
    iStack_20 = *(int *)(param_1[0x14] + 0x54);
    for (uStack_24 = 0; -1 < *(int *)(iStack_20 + uStack_24 * 0x14); uStack_24 = uStack_24 + 1) {
      if (param_1[0x17] == 0) {
        uStack_fc = 0;
      }
      else {
        uStack_fc = param_1[0x18] - param_1[0x17] >> 2;
      }
      if (uStack_fc <= uStack_24) {
        _invalid_parameter_noinfo();
      }
      local_1c = *(int **)(param_1[0x17] + uStack_24 * 4);
      if (local_1c == (int *)0x0) break;
      puStack_108 = operator_new(0x34);
      local_8 = 0;
      if (puStack_108 == (undefined4 *)0x0) {
        puStack_108 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1[0x14] + 0x5c);
        FUN_005c21c0();
        uVar7 = FUN_00686cc0();
        FUN_006069b0(0);
        *puStack_108 = sciFadeMotion::vftable;
        puStack_108[0xb] = uVar5;
        puStack_108[0xc] = uVar7;
        puStack_108[5] = 0xffffffff;
        puStack_108[4] = 0xffffffff;
      }
      local_8 = 0xffffffff;
      FUN_005f6050(puStack_108);
    }
    if (param_1[0x17] == 0) {
      iStack_10c = 0;
    }
    else {
      iStack_10c = param_1[0x18] - param_1[0x17] >> 2;
    }
    if (param_1[0x17] == 0) {
      uStack_110 = 0;
    }
    else {
      uStack_110 = param_1[0x18] - param_1[0x17] >> 2;
    }
    if (uStack_110 <= iStack_10c - 1U) {
      _invalid_parameter_noinfo();
    }
    if (*(int *)(param_1[0x17] + (iStack_10c - 1U) * 4) == 0) {
      FUN_005e9f20("mIcons[mIcons.size()-1]","..\\Casino\\MLVSlotBlossom.cpp",0x17b);
    }
    FUN_00610980(param_1[0x14] + 0xe8);
    FUN_00610980(param_1[0x14] + 0x68);
    FUN_005dd400(1);
    FUN_005bceb0(2);
    break;
  case 2:
    if (param_1[0x17] == 0) {
      iStack_114 = 0;
    }
    else {
      iStack_114 = param_1[0x18] - param_1[0x17] >> 2;
    }
    if (param_1[0x17] == 0) {
      uStack_118 = 0;
    }
    else {
      uStack_118 = param_1[0x18] - param_1[0x17] >> 2;
    }
    if (uStack_118 <= iStack_114 - 1U) {
      _invalid_parameter_noinfo();
    }
    local_1c = *(int **)(param_1[0x17] + (iStack_114 - 1U) * 4);
    if ((local_1c == (int *)0x0) || (cVar3 = FUN_005eb610(), cVar3 == '\0')) {
      FUN_0062fde0("Initial shuffle\n");
      FUN_005c90c0();
      piStack_11c = operator_new(0x34);
      local_8 = 1;
      if (piStack_11c == (int *)0x0) {
        piStack_11c = (int *)0x0;
      }
      else {
        FUN_006069b0(0);
        *piStack_11c = (int)sciFadeMotion::vftable;
        piStack_11c[0xb] = 0x10;
        piStack_11c[0xc] = 0;
        piStack_11c[5] = -1;
        piStack_11c[4] = -1;
      }
      local_8 = 0xffffffff;
      piStack_2c = piStack_11c;
      (**(code **)(*piStack_11c + 0xc))(0x280,0);
      pvVar4 = operator_new(0x1c);
      local_8 = 2;
      if (pvVar4 == (void *)0x0) {
        uStack_120 = 0;
      }
      else {
        uStack_120 = FUN_00600b60(0);
      }
      local_8 = 0xffffffff;
      iStack_28 = FUN_005f9b40(0,10,0x315941,0,0,0x18,uStack_120,0,0,0,0,0);
      FUN_005c21c0();
      uVar5 = FUN_00686cc0();
      *(undefined4 *)(iStack_28 + 0x188) = uVar5;
      FUN_005f6050(piStack_2c);
      *(undefined4 *)(iStack_28 + 0x178) = 0x1e;
      piStack_124 = operator_new(0x34);
      local_8 = 3;
      if (piStack_124 == (int *)0x0) {
        piStack_124 = (int *)0x0;
      }
      else {
        FUN_006069b0(0);
        *piStack_124 = (int)sciFadeMotion::vftable;
        piStack_124[0xb] = 0x10;
        piStack_124[0xc] = 0;
        piStack_124[5] = -1;
        piStack_124[4] = -1;
      }
      local_8 = 0xffffffff;
      piStack_2c = piStack_124;
      uVar5 = FUN_005f5590();
      (**(code **)(*piStack_2c + 0xc))(0x280,uVar5);
      pvVar4 = operator_new(0x1c);
      local_8 = 4;
      if (pvVar4 == (void *)0x0) {
        uStack_128 = 0;
      }
      else {
        uStack_128 = FUN_00600b60(0);
      }
      local_8 = 0xffffffff;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 1;
      uVar10 = 0;
      uVar9 = 0;
      uVar7 = 0x18;
      uVar5 = FUN_005f5590(0x18,uStack_128,0,0,1,0,0);
      iVar8 = FUN_005f5550(uVar5);
      iStack_28 = FUN_005f9b40(0,0xb,0x315941,-iVar8 / 2,uVar5,uVar7,uStack_128,uVar9,uVar10,uVar11,
                               uVar12,uVar13);
      FUN_005c21c0();
      uVar5 = FUN_00686cc0();
      *(undefined4 *)(iStack_28 + 0x188) = uVar5;
      FUN_005f6050(piStack_2c);
      *(undefined4 *)(iStack_28 + 0x178) = 0x1e;
      FUN_005bceb0(3);
    }
    break;
  case 3:
    if (param_1[0x17] == 0) {
      iStack_12c = 0;
    }
    else {
      iStack_12c = param_1[0x18] - param_1[0x17] >> 2;
    }
    if (param_1[0x17] == 0) {
      uStack_130 = 0;
    }
    else {
      uStack_130 = param_1[0x18] - param_1[0x17] >> 2;
    }
    if (uStack_130 <= iStack_12c - 1U) {
      _invalid_parameter_noinfo();
    }
    local_1c = *(int **)(param_1[0x17] + (iStack_12c - 1U) * 4);
    if ((local_1c != (int *)0x0) && (bVar2 = FUN_005eb610(), 0x78 < bVar2)) {
      FUN_006110a0(param_1[0x14] + 0xe8,0);
      FUN_00610e70(param_1[0x14] + 0x68,0);
    }
    if (param_1[0x17] == 0) {
      iStack_134 = 0;
    }
    else {
      iStack_134 = param_1[0x18] - param_1[0x17] >> 2;
    }
    if (param_1[0x17] == 0) {
      uStack_138 = 0;
    }
    else {
      uStack_138 = param_1[0x18] - param_1[0x17] >> 2;
    }
    if (uStack_138 <= iStack_134 - 1U) {
      _invalid_parameter_noinfo();
    }
    local_1c = *(int **)(param_1[0x17] + (iStack_134 - 1U) * 4);
    if ((local_1c == (int *)0x0) || (cVar3 = FUN_005eb610(), cVar3 == -1)) {
      FUN_0062fde0(&UNK_006d1c64);
      iVar8 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
      param_1[0x1a] = iVar8;
      FUN_005dd400(0);
      FUN_005f5d50(0);
      FUN_005fbb30(0,10);
      FUN_005fbb30(0,0xb);
      cVar3 = FUN_005c9740();
      if (cVar3 == '\0') {
        iVar8 = FUN_005be3f0();
        if (0 < iVar8) {
          cVar3 = FUN_005c9940();
          if (cVar3 == '\0') {
            iStack_13c = param_1[0x14] + 0x88;
          }
          else {
            iStack_13c = param_1[0x14] + 200;
          }
          FUN_00610980(iStack_13c);
        }
        FUN_005bceb0(0);
      }
      else {
        FUN_00610980(param_1[0x14] + 0xa8);
        FUN_005bceb0(4);
      }
    }
    break;
  case 4:
    iVar8 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
    if (3000 < (uint)(iVar8 - param_1[0x1a])) {
      FUN_005c1a80();
    }
  }
  local_18 = *(int *)(param_1[0x14] + 0x54);
  local_14 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
  local_14 = local_14 - param_1[0x1a];
  for (local_30 = 0; -1 < *(int *)(local_18 + local_30 * 0x14); local_30 = local_30 + 1) {
    iVar8 = *(int *)(local_18 + local_30 * 0x14);
    iVar6 = param_1[1];
    if (*(int *)(iVar6 + 0x18 + iVar8 * 4) < 0) {
      local_140 = -*(int *)(iVar6 + 0x18 + iVar8 * 4);
    }
    else {
      local_140 = *(int *)(iVar6 + 0x18 + iVar8 * 4);
    }
    local_140 = *(int *)(local_18 + 4 + local_30 * 0x14) + local_140;
    FUN_005bcee0(iVar8,local_140,&local_3c);
    if (param_1[0x17] == 0) {
      local_144 = 0;
    }
    else {
      local_144 = param_1[0x18] - param_1[0x17] >> 2;
    }
    if (local_144 <= local_30) {
      _invalid_parameter_noinfo();
    }
    local_1c = *(int **)(param_1[0x17] + local_30 * 4);
    if ((local_1c == (int *)0x0) ||
       (((iVar6 = FUN_005eafc0(), iVar6 != local_3c || (iVar6 = FUN_005eb110(), iVar6 != local_38))
        && (cVar3 = FUN_005eb610(), cVar3 == '\0')))) {
      bVar1 = false;
      if (local_1c != (int *)0x0) {
        if (local_1c != (int *)0x0) {
          (**(code **)*local_1c)(1);
        }
        bVar1 = true;
      }
      local_1c = (int *)FUN_005bcf70(iVar8,local_140);
      if (param_1[0x17] == 0) {
        local_14c = 0;
      }
      else {
        local_14c = param_1[0x18] - param_1[0x17] >> 2;
      }
      if (local_14c <= local_30) {
        _invalid_parameter_noinfo();
      }
      *(int **)(param_1[0x17] + local_30 * 4) = local_1c;
      if (bVar1) {
        FUN_005eb5d0(0);
      }
    }
    cVar3 = FUN_005eb610();
    if ((cVar3 == '\0') && (iVar6 = FUN_005f60e0(), iVar6 == 0)) {
      local_154 = operator_new(0x34);
      local_8 = 5;
      if (local_154 == (undefined4 *)0x0) {
        local_154 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1[0x14] + 100);
        FUN_005c21c0();
        uVar7 = FUN_00686cc0();
        FUN_006069b0(0);
        *local_154 = sciFadeMotion::vftable;
        local_154[0xb] = uVar5;
        local_154[0xc] = uVar7;
        local_154[5] = 0xffffffff;
        local_154[4] = 0xffffffff;
      }
      local_8 = 0xffffffff;
      FUN_005f6050(local_154);
    }
    local_40 = 0;
    cVar3 = (**(code **)(*param_1 + 0x2c))();
    if ((cVar3 != '\0') && (iVar8 = FUN_005c9960(iVar8,local_140), 0 < iVar8)) {
      iVar8 = FUN_005eb240();
      local_40 = (local_14 / 0xfa) % (iVar8 + 1);
      if (iVar8 + 1 <= local_40) {
        local_40 = iVar8;
      }
    }
    iVar8 = FUN_005eb220();
    if (local_40 != iVar8) {
      (**(code **)(*local_1c + 0xb0))(local_40);
    }
    (**(code **)(*local_1c + 0x44))
              (*(undefined4 *)(local_18 + 8 + local_30 * 0x14),
               *(undefined4 *)(local_18 + 0xc + local_30 * 0x14));
  }
  FUN_005c1b60();
  FUN_005c1d60(0);
  ExceptionList = local_10;
  return;
}

