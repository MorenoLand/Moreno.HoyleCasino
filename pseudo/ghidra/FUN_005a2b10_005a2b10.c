// FUN_005a2b10  005a2b10

void __thiscall FUN_005a2b10(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char local_164;
  char local_15c;
  char local_154;
  char local_150;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char local_6d;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_35;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [12];
  undefined2 local_1c [6];
  uint local_10;
  int local_c;
  char local_5;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_2 == 5) goto LAB_005a3620;
  local_c = param_2 * 3;
  local_2c = 0xffffffff;
  local_30 = -1;
  local_5 = '\0';
  uVar5 = FUN_0064c8a0(0,0);
  local_90 = uVar5;
  FUN_005dcb00(param_2,uVar5);
  FUN_005d6050(uVar5);
  FUN_005dcb00(param_2);
  iVar2 = FUN_005d52e0();
  *(int *)(param_1 + 0x110) = (int)*(char *)(iVar2 + 0x2a);
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  for (local_34 = 0; local_34 < 5; local_34 = local_34 + 1) {
    local_1c[local_34] = 0;
  }
  FUN_00462930(param_1 + 200 + param_2 * 6,(param_2 == 4) + '\x02',param_1 + 0xe6,3,local_28);
  FUN_00462a40(5,local_28,6,local_1c);
  cVar1 = FUN_005a3660(param_2);
  if (cVar1 != '\0') {
    local_30 = FUN_00462ba0(local_1c,5,0);
    if (local_30 < 3) {
      if (local_30 == 2) {
        iVar2 = FUN_004639e0(local_1c,5);
        if (7 < iVar2) goto LAB_005a2c9c;
      }
      local_150 = '\0';
    }
    else {
LAB_005a2c9c:
      local_150 = '\x01';
    }
    local_35 = local_150;
    if (local_150 == '\0') {
      FUN_005a4390(param_2,0,local_30,0);
    }
    else {
      FUN_005a4390(param_2,1,local_30,1);
    }
    if ((*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x114)) || (*(int *)(param_1 + 0x114) != 0)
       ) {
      local_154 = '\0';
    }
    else {
      local_154 = '\x01';
    }
    local_5 = local_154;
    if (local_154 != '\0') {
      uVar7 = 1000000;
      uVar6 = 1;
      FUN_005dcb00(param_2,1,1000000);
      FUN_005d70e0(uVar6,uVar7);
      piVar3 = (int *)FUN_005dcb00(param_2);
      (**(code **)(*piVar3 + 4))(0xffffffff);
      uVar5 = FUN_0064c8a0(0,0);
      local_98 = uVar5;
      FUN_005dcb00(param_2,uVar5);
      FUN_005d6050(uVar5);
      goto LAB_005a3620;
    }
    if (local_35 != '\0') {
      local_a0 = FUN_0064c8a0(0,0);
      local_48 = local_a0;
      local_a8 = FUN_0064c8a0(0,0);
      local_50 = local_a8;
      local_b0 = FUN_0064c8a0(0,0);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 8 + local_c * 4) + 0x48 + param_2 * 0x20);
      local_48._0_4_ = *puVar4;
      local_48._4_4_ = puVar4[1];
      iVar2 = *(int *)(param_1 + 8 + local_c * 4) + 0x48 + param_2 * 0x20;
      local_50._0_4_ = *(undefined4 *)(iVar2 + 8);
      local_50._4_4_ = *(undefined4 *)(iVar2 + 0xc);
      local_40 = local_b0;
      puVar4 = (undefined4 *)FUN_0064c5c0(local_b8,(undefined4)local_50,local_50._4_4_);
      local_40._0_4_ = *puVar4;
      local_40._4_4_ = puVar4[1];
      (**(code **)(**(int **)(param_1 + 8 + local_c * 4) + 0xb8))
                ((undefined4)local_40,local_40._4_4_,param_2,0);
      local_c0 = FUN_0064c8a0(0,0);
      (**(code **)(**(int **)(param_1 + 8 + local_c * 4) + 0xb8))(local_c0,param_2,1);
    }
  }
  if (*(char *)(param_1 + param_2 + 0xfb) != '\0') {
    local_30 = FUN_00462ba0(local_1c,5,0);
    local_51 = 8 < local_30;
    if ((bool)local_51) {
      FUN_005a4390(param_2,1,local_30,1);
    }
    if ((*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x114)) || (*(int *)(param_1 + 0x114) != 0)
       ) {
      local_15c = '\0';
    }
    else {
      local_15c = '\x01';
    }
    local_5 = local_15c;
    if (local_15c != '\0') {
      uVar7 = 1000000;
      uVar6 = 1;
      FUN_005dcb00(param_2,1,1000000);
      FUN_005d70e0(uVar6,uVar7);
      piVar3 = (int *)FUN_005dcb00(param_2);
      (**(code **)(*piVar3 + 4))(0xffffffff);
      uVar5 = FUN_0064c8a0(0,0);
      local_c8 = uVar5;
      FUN_005dcb00(param_2,uVar5);
      FUN_005d6050(uVar5);
      goto LAB_005a3620;
    }
    local_2c = FUN_005a2080(param_2);
    FUN_005a4390(param_2,local_2c,0,0);
    if (local_51 != '\0') {
      local_d0 = FUN_0064c8a0(0,0);
      local_64 = local_d0;
      local_d8 = FUN_0064c8a0(0,0);
      local_6c = local_d8;
      local_e0 = FUN_0064c8a0(0,0);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc + local_c * 4) + 0x48 + param_2 * 0x20);
      local_64._0_4_ = *puVar4;
      local_64._4_4_ = puVar4[1];
      iVar2 = *(int *)(param_1 + 0xc + local_c * 4) + 0x48 + param_2 * 0x20;
      local_6c._0_4_ = *(undefined4 *)(iVar2 + 8);
      local_6c._4_4_ = *(undefined4 *)(iVar2 + 0xc);
      local_5c = local_e0;
      puVar4 = (undefined4 *)FUN_0064c5c0(local_e8,(undefined4)local_6c,local_6c._4_4_);
      local_5c._0_4_ = *puVar4;
      local_5c._4_4_ = puVar4[1];
      (**(code **)(**(int **)(param_1 + 0xc + local_c * 4) + 0xb8))
                ((undefined4)local_5c,local_5c._4_4_,param_2,0);
      local_f0 = FUN_0064c8a0(0,0);
      (**(code **)(**(int **)(param_1 + 0xc + local_c * 4) + 0xb8))(local_f0,param_2,1);
    }
  }
  if (*(char *)(param_1 + param_2 + 0xff) != '\0') {
    local_30 = FUN_00462ba0(local_1c,5,0);
    local_6d = 8 < local_30;
    if ((bool)local_6d) {
      FUN_005a4390(param_2,1,local_30,1);
    }
    if ((*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x114)) || (*(int *)(param_1 + 0x114) != 0)
       ) {
      local_164 = '\0';
    }
    else {
      local_164 = '\x01';
    }
    local_5 = local_164;
    if (local_164 != '\0') {
      uVar7 = 1000000;
      uVar6 = 1;
      FUN_005dcb00(param_2,1,1000000);
      FUN_005d70e0(uVar6,uVar7);
      piVar3 = (int *)FUN_005dcb00(param_2);
      (**(code **)(*piVar3 + 4))(0xffffffff);
      uVar5 = FUN_0064c8a0(0,0);
      local_f8 = uVar5;
      FUN_005dcb00(param_2,uVar5);
      FUN_005d6050(uVar5);
      goto LAB_005a3620;
    }
    local_2c = FUN_005a2080(param_2);
    FUN_005a4390(param_2,local_2c,0,0);
    if (local_6d != '\0') {
      local_100 = FUN_0064c8a0(0,0);
      local_80 = local_100;
      local_108 = FUN_0064c8a0(0,0);
      local_88 = local_108;
      local_110 = FUN_0064c8a0(0,0);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x10 + local_c * 4) + 0x48 + param_2 * 0x20);
      local_80._0_4_ = *puVar4;
      local_80._4_4_ = puVar4[1];
      iVar2 = *(int *)(param_1 + 0x10 + local_c * 4) + 0x48 + param_2 * 0x20;
      local_88._0_4_ = *(undefined4 *)(iVar2 + 8);
      local_88._4_4_ = *(undefined4 *)(iVar2 + 0xc);
      local_78 = local_110;
      puVar4 = (undefined4 *)FUN_0064c5c0(local_118,(undefined4)local_88,local_88._4_4_);
      local_78._0_4_ = *puVar4;
      local_78._4_4_ = puVar4[1];
      (**(code **)(**(int **)(param_1 + 0x10 + local_c * 4) + 0xb8))
                ((undefined4)local_78,local_78._4_4_,param_2,0);
      uVar5 = FUN_0064c8a0(0,0);
      (**(code **)(**(int **)(param_1 + 0x10 + local_c * 4) + 0xb8))(uVar5,param_2,1);
    }
  }
  if ((*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x114)) || (*(int *)(param_1 + 0x114) != 0))
  {
    local_5 = false;
  }
  else {
    local_5 = true;
  }
  if ((bool)local_5) {
    uVar7 = 1000000;
    uVar6 = 1;
    FUN_005dcb00(param_2,1,1000000);
    FUN_005d70e0(uVar6,uVar7);
    piVar3 = (int *)FUN_005dcb00(param_2);
    (**(code **)(*piVar3 + 4))(0xffffffff);
    uVar5 = FUN_0064c8a0(0,0);
    FUN_005dcb00(param_2,uVar5);
    FUN_005d6050(uVar5);
  }
LAB_005a3620:
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

