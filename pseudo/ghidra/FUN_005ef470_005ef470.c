// FUN_005ef470  005ef470

void __thiscall FUN_005ef470(int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_58 = 0;
  if (param_1[0x28] == 0) {
    if ((param_1[0x1c] & 1U) != 0) {
      param_2 = 0;
    }
    if ((param_1[0x1c] & 2U) != 0) {
      param_2 = param_1[0x1a] - param_5;
    }
    if ((param_1[0x1c] & 0x20U) != 0) {
      param_2 = (param_1[0x1a] - param_5) / 2;
    }
    param_2 = param_2 + -1 + param_1[0x1d];
  }
  if (param_1[0x28] != 0) {
    param_2 = param_2 + -1;
  }
  if (((*(char *)((int)param_1 + 0x9e) != '\0') && (*(char *)((int)param_1 + 0x9f) != '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 0xc0))(), cVar1 != '\0')) {
    local_5c = FUN_005f0a30(0x7c);
    local_5c = local_5c & 0xff;
    memset(&local_34,0,0x10);
    iVar2 = param_1[0x19];
    if (iVar2 == 1) {
      local_30 = (uint)*(ushort *)(param_1[0x26] + 0x3e2);
      local_34 = (uint)*(ushort *)(param_1[0x26] + 0x3e4);
      local_28 = *(ushort *)(param_1[0x26] + 0x3e6) + 1 + (uint)*(ushort *)((int)param_1 + 0x92);
      local_2c = *(ushort *)(param_1[0x26] + 1000) + 1 + (uint)*(ushort *)(param_1 + 0x24);
    }
    else if (iVar2 == 2) {
      local_58 = local_5c - 0x20;
      if ((int)local_58 < 0) {
        local_58 = 0;
      }
      local_34 = 0;
      local_30 = 0;
      local_2c = FUN_005ee950(0x7c,0xffffffff);
      local_28 = FUN_005eeaf0(0x7c);
    }
    else if (iVar2 == 3) {
      local_58 = 0x7c;
      local_34 = 0;
      local_30 = 0;
      local_2c = FUN_005ee950(0x7c,0xffffffff);
      local_28 = FUN_005eeaf0(0x7c);
    }
    local_24 = param_2 + param_1[4];
    local_20 = param_3 + param_1[5];
    local_1c = (local_2c - local_34) + param_2 + param_1[4];
    local_18 = (local_28 - local_30) + param_3 + param_1[5];
    local_54 = *param_4;
    local_50 = param_4[1];
    local_4c = param_4[2];
    local_48 = param_4[3];
    local_6c = local_34;
    local_68 = local_30;
    local_64 = local_2c;
    local_60 = local_28;
    local_44 = local_34;
    local_40 = local_30;
    local_3c = local_2c;
    local_38 = local_28;
    local_14 = local_24;
    local_10 = local_20;
    local_c = local_1c;
    local_8 = local_18;
    cVar1 = FUN_00624a70(&local_24,&local_54,&local_6c,&local_44);
    if (cVar1 != '\0') {
      iVar2 = FUN_005f84f0();
      iVar3 = FUN_005f84d0();
      iVar6 = local_24 + iVar3;
      iVar7 = local_20 + iVar2;
      iVar3 = local_1c + iVar3;
      iVar2 = local_18 + iVar2;
      local_24 = iVar6;
      local_20 = iVar7;
      local_1c = iVar3;
      local_18 = iVar2;
      if (*(char *)((int)param_1 + 0x9d) == '\0') {
        FUN_00623f00(iVar6,iVar7,iVar2,0xff000000,2);
      }
      else {
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 1;
        uVar4 = (uint)*(byte *)(param_1 + 0x27);
        uVar8 = *(undefined4 *)(*(int *)(param_1[1] + 0x1a8) + 0x50);
        uVar9 = local_6c;
        uVar10 = local_68;
        iVar11 = local_64;
        iVar12 = local_60;
        iVar5 = FUN_006163e0(0);
        FUN_00616510(0,-(uint)(iVar5 != 1) & local_58,uVar8,iVar6,iVar7,iVar3,iVar2,uVar9,uVar10,
                     iVar11,iVar12,uVar4,uVar13,uVar14,uVar15);
      }
    }
  }
  return;
}

