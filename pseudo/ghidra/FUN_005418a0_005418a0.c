// FUN_005418a0  005418a0

void __thiscall FUN_005418a0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char local_90;
  char local_88;
  char local_84;
  undefined1 local_5c [8];
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  int local_14;
  undefined4 local_10;
  int local_c;
  char local_6;
  char local_5;
  
  local_c = param_2 * 3;
  local_10 = 0xffffffff;
  local_14 = -1;
  local_5 = 0;
  uVar5 = FUN_0064c8a0(0,0);
  local_34 = uVar5;
  FUN_005dcb00(param_2,uVar5);
  FUN_005d6050(uVar5);
  FUN_005dcb00(param_2);
  iVar2 = FUN_005d52e0();
  *(int *)(param_1 + 0x108) = (int)*(char *)(iVar2 + 0x2a);
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  cVar1 = FUN_005414e0(param_2);
  if (cVar1 != '\0') {
    local_10 = FUN_005417e0(param_2);
    cVar1 = FUN_00541790();
    if (cVar1 == '\0') {
      FUN_005423a0(param_2,2,0,0);
    }
    else {
      FUN_005423a0(param_2,local_10,0,0);
    }
    local_14 = FUN_00462ba0(param_1 + 200 + param_2 * 6,3,0);
    if (((local_14 == 5) || (local_14 == 4)) || (local_14 == 9)) {
      local_84 = '\x01';
    }
    else {
      local_84 = '\0';
    }
    local_6 = local_84;
    if (local_84 != '\0') {
      FUN_005423a0(param_2,1,local_14,1);
    }
    if ((*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x10c)) || (*(int *)(param_1 + 0x10c) != 0)
       ) {
      local_88 = '\0';
    }
    else {
      local_88 = '\x01';
    }
    local_5 = local_88;
    if (local_88 != '\0') {
      uVar7 = 1000000;
      uVar6 = 1;
      FUN_005dcb00(param_2,1,1000000);
      FUN_005d70e0(uVar6,uVar7);
      piVar3 = (int *)FUN_005dcb00(param_2);
      (**(code **)(*piVar3 + 4))(0xffffffff);
      uVar5 = FUN_0064c8a0(0,0);
      local_3c = uVar5;
      FUN_005dcb00(param_2,uVar5);
      FUN_005d6050(uVar5);
      return;
    }
    cVar1 = FUN_00541790();
    if (cVar1 == '\0') {
      FUN_005423a0(param_2,1,0,0);
    }
    else {
      FUN_005423a0(param_2,local_10,0,0);
    }
    if (local_6 != '\0') {
      local_44 = FUN_0064c8a0(0,0);
      local_24 = local_44;
      local_4c = FUN_0064c8a0(0,0);
      local_2c = local_4c;
      local_54 = FUN_0064c8a0(0,0);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc + local_c * 4) + 0x48 + param_2 * 0x20);
      local_24._0_4_ = *puVar4;
      local_24._4_4_ = puVar4[1];
      iVar2 = *(int *)(param_1 + 0xc + local_c * 4) + 0x48 + param_2 * 0x20;
      local_2c._0_4_ = *(undefined4 *)(iVar2 + 8);
      local_2c._4_4_ = *(undefined4 *)(iVar2 + 0xc);
      local_1c = local_54;
      puVar4 = (undefined4 *)FUN_0064c5c0(local_5c,(undefined4)local_2c,local_2c._4_4_);
      local_1c._0_4_ = *puVar4;
      local_1c._4_4_ = puVar4[1];
      (**(code **)(**(int **)(param_1 + 0xc + local_c * 4) + 0xb8))
                ((undefined4)local_1c,local_1c._4_4_,param_2,0);
      uVar5 = FUN_0064c8a0(0,0);
      (**(code **)(**(int **)(param_1 + 0xc + local_c * 4) + 0xb8))(uVar5,param_2,1);
    }
  }
  if ((*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x10c)) || (*(int *)(param_1 + 0x10c) != 0))
  {
    local_90 = '\0';
  }
  else {
    local_90 = '\x01';
  }
  local_5 = local_90;
  if (local_90 == '\0') {
    cVar1 = FUN_00541510(param_2);
    if (cVar1 != '\0') {
      local_14 = FUN_00462ba0(param_1 + 200 + param_2 * 6,3,0);
      if (local_14 < 2) {
        FUN_005423a0(param_2,0,local_14,0);
      }
      else {
        FUN_005423a0(param_2,1,local_14,0);
      }
    }
  }
  else {
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
  return;
}

