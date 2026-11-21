// FUN_00598810  00598810

void __thiscall FUN_00598810(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char local_100;
  char local_f8;
  char local_f0;
  char local_ec;
  undefined1 local_bc [8];
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined1 local_8c [8];
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  char local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char local_25;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined2 local_14 [4];
  uint local_c;
  char local_5;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_18 = param_2 * 3;
  local_1c = 0xffffffff;
  local_20 = -1;
  local_5 = '\0';
  uVar5 = FUN_0064c8a0(0,0);
  local_64 = uVar5;
  FUN_005dcb00(param_2,uVar5);
  FUN_005d6050(uVar5);
  FUN_005dcb00(param_2);
  iVar2 = FUN_005d52e0();
  *(int *)(param_1 + 0x124) = (int)*(char *)(iVar2 + 0x2a);
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    local_14[local_24] = 0;
  }
  FUN_00462a40(4,param_1 + 200 + param_2 * 0xc,(param_2 == 4) + '\x05',local_14);
  cVar1 = FUN_00599020(param_2);
  if (cVar1 != '\0') {
    local_1c = FUN_00597d90(param_2);
    FUN_0059a150(param_2,local_1c,0,0,0);
    local_20 = FUN_00462ba0(local_14,4,0);
    if (((local_20 == 4) || (local_20 == 9)) || (local_20 == 8)) {
      local_ec = '\x01';
    }
    else {
      local_ec = '\0';
    }
    local_25 = local_ec;
    if (local_ec != '\0') {
      FUN_0059a150(param_2,1,local_20,1,0);
    }
    if ((*(int *)(param_1 + 0x124) == *(int *)(param_1 + 0x128)) || (*(int *)(param_1 + 0x128) != 0)
       ) {
      local_f0 = '\0';
    }
    else {
      local_f0 = '\x01';
    }
    local_5 = local_f0;
    if (local_f0 != '\0') {
      uVar7 = 1000000;
      uVar6 = 1;
      FUN_005dcb00(param_2,1,1000000);
      FUN_005d70e0(uVar6,uVar7);
      piVar3 = (int *)FUN_005dcb00(param_2);
      (**(code **)(*piVar3 + 4))(0xffffffff);
      uVar5 = FUN_0064c8a0(0,0);
      local_6c = uVar5;
      FUN_005dcb00(param_2,uVar5);
      FUN_005d6050(uVar5);
      goto LAB_00598fdc;
    }
    FUN_0059a150(param_2,local_1c,0,0,0);
    if (local_25 != '\0') {
      local_74 = FUN_0064c8a0(0,0);
      local_38 = local_74;
      local_7c = FUN_0064c8a0(0,0);
      local_40 = local_7c;
      local_84 = FUN_0064c8a0(0,0);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc + local_18 * 4) + 0x48 + param_2 * 0x20);
      local_38._0_4_ = *puVar4;
      local_38._4_4_ = puVar4[1];
      iVar2 = *(int *)(param_1 + 0xc + local_18 * 4) + 0x48 + param_2 * 0x20;
      local_40._0_4_ = *(undefined4 *)(iVar2 + 8);
      local_40._4_4_ = *(undefined4 *)(iVar2 + 0xc);
      local_30 = local_84;
      puVar4 = (undefined4 *)FUN_0064c5c0(local_8c,(undefined4)local_40,local_40._4_4_);
      local_30._0_4_ = *puVar4;
      local_30._4_4_ = puVar4[1];
      (**(code **)(**(int **)(param_1 + 0xc + local_18 * 4) + 0xb8))
                ((undefined4)local_30,local_30._4_4_,param_2,0);
      local_94 = FUN_0064c8a0(0,0);
      (**(code **)(**(int **)(param_1 + 0xc + local_18 * 4) + 0xb8))(local_94,param_2,1);
    }
  }
  cVar1 = FUN_00598ff0(param_2);
  if (cVar1 != '\0') {
    local_20 = FUN_00462ba0(local_14,4,0);
    local_41 = FUN_00599a70(param_2);
    if (local_41 == '\0') {
      FUN_0059a150(param_2,0,local_20,0,0);
    }
    else {
      FUN_0059a150(param_2,1,local_20,0,1);
    }
    if ((*(int *)(param_1 + 0x124) == *(int *)(param_1 + 0x128)) || (*(int *)(param_1 + 0x128) != 0)
       ) {
      local_f8 = '\0';
    }
    else {
      local_f8 = '\x01';
    }
    local_5 = local_f8;
    if (local_f8 != '\0') {
      uVar7 = 1000000;
      uVar6 = 1;
      FUN_005dcb00(param_2,1,1000000);
      FUN_005d70e0(uVar6,uVar7);
      piVar3 = (int *)FUN_005dcb00(param_2);
      (**(code **)(*piVar3 + 4))(0xffffffff);
      uVar5 = FUN_0064c8a0(0,0);
      local_9c = uVar5;
      FUN_005dcb00(param_2,uVar5);
      FUN_005d6050(uVar5);
      goto LAB_00598fdc;
    }
    if (local_41 != '\0') {
      local_a4 = FUN_0064c8a0(0,0);
      local_4c = local_a4;
      local_ac = FUN_0064c8a0(0,0);
      local_5c = local_ac;
      local_b4 = FUN_0064c8a0(0,0);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x10 + local_18 * 4) + 0x48 + param_2 * 0x20);
      local_4c._0_4_ = *puVar4;
      local_4c._4_4_ = puVar4[1];
      iVar2 = *(int *)(param_1 + 0x10 + local_18 * 4) + 0x48 + param_2 * 0x20;
      local_5c._0_4_ = *(undefined4 *)(iVar2 + 8);
      local_5c._4_4_ = *(undefined4 *)(iVar2 + 0xc);
      local_54 = local_b4;
      puVar4 = (undefined4 *)FUN_0064c5c0(local_bc,(undefined4)local_5c,local_5c._4_4_);
      local_54._0_4_ = *puVar4;
      local_54._4_4_ = puVar4[1];
      (**(code **)(**(int **)(param_1 + 0x10 + local_18 * 4) + 0xb8))
                ((undefined4)local_54,local_54._4_4_,param_2,0);
      uVar5 = FUN_0064c8a0(0,0);
      (**(code **)(**(int **)(param_1 + 0x10 + local_18 * 4) + 0xb8))(uVar5,param_2,1);
    }
  }
  if ((*(int *)(param_1 + 0x124) == *(int *)(param_1 + 0x128)) || (*(int *)(param_1 + 0x128) != 0))
  {
    local_100 = '\0';
  }
  else {
    local_100 = '\x01';
  }
  local_5 = local_100;
  if (local_100 != '\0') {
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
LAB_00598fdc:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

