// FUN_005cc540  005cc540

void __thiscall FUN_005cc540(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char local_b8;
  int local_b0 [9];
  int local_8c;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  char local_75;
  int local_74;
  int local_70;
  int local_6c;
  undefined *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  undefined1 local_19;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  local_70 = 0;
  local_6c = 100000000;
  local_68 = &DAT_00989680;
  local_64 = 1000000;
  local_60 = 500000;
  local_5c = 100000;
  local_58 = 50000;
  local_54 = 25000;
  local_50 = 10000;
  local_4c = 5000;
  local_48 = 1000;
  local_44 = 500;
  local_40 = 100;
  local_3c = 0x32;
  local_38 = 0x19;
  local_34 = 10;
  local_30 = 5;
  local_2c = 1;
  local_28 = 0;
  (**(code **)(*param_1 + 200))(&local_c,param_2,param_3);
  local_18 = local_c;
  local_19 = local_8;
  local_20 = (&local_6c)[local_70];
  local_74 = 0;
  local_14 = 0;
  (**(code **)(*param_1 + 0xc0))(param_2,param_3);
  if (local_18 == 0) {
    return;
  }
  cVar1 = (**(code **)(*DAT_007947e4 + 0x2c4))(param_2);
  if (cVar1 != '\0') {
    return;
  }
  while (0 < local_20) {
    local_74 = local_18 / local_20;
    local_18 = local_18 % local_20;
    for (local_10 = 0; local_10 < local_74; local_10 = local_10 + 1) {
      (**(code **)(*param_1 + 0xbc))(param_2,param_3,local_14,local_70);
      local_14 = local_14 + 1;
      if (local_14 == 0x1e) {
        return;
      }
    }
    local_70 = local_70 + 1;
    local_20 = (&local_6c)[local_70];
  }
  if (local_14 != 2) {
    return;
  }
  iVar2 = (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + 0x5f] + 0x4c))();
  iVar3 = (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + 0x60] + 0x4c))();
  if (iVar2 == iVar3) {
    iVar2 = (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + 0x5f] + 0x54))();
    iVar3 = (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + 0x60] + 0x54))();
    if (iVar2 == iVar3) {
      local_b8 = '\x01';
      goto LAB_005cc845;
    }
  }
  local_b8 = '\0';
LAB_005cc845:
  local_75 = local_b8;
  if (local_b8 != '\0') {
    local_84 = (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + 0x5f] + 0x4c))();
    local_80 = (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + 0x5f] + 0x54))();
    local_b0[0] = 0;
    local_b0[1] = 0xfffffffc;
    local_b0[2] = 0;
    local_b0[3] = 4;
    local_b0[4] = 0xfffffffc;
    local_b0[5] = 0;
    local_b0[6] = 4;
    local_b0[7] = 0;
    local_8c = FUN_0062fc30(0,3);
    local_b0[8] = local_b0[local_8c * 2];
    local_7c = local_b0[local_8c * 2 + 1];
    iVar2 = FUN_0062fbf0(2);
    local_88 = (uint)(iVar2 != 0);
    (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + local_88 + 0x5f] + 0x48))
              (local_84 + local_b0[8]);
    (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + local_88 + 0x5f] + 0x50))
              (local_80 + local_7c);
  }
  return;
}

