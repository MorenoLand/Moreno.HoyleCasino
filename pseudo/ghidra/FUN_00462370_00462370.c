// FUN_00462370  00462370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00462370(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 local_54 [8];
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  int local_2c;
  int local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_c = param_1[param_2 * 8 + 0x12];
  local_8 = param_1[param_2 * 8 + 0x13];
  local_34 = FUN_0064c8a0(0,0);
  local_1c = local_34;
  local_3c = FUN_0064c8a0(0,0);
  local_14 = local_3c;
  local_44 = FUN_0064c8a0(0,0);
  local_24 = local_44;
  FUN_005dcb00();
  iVar1 = FUN_005d5a50();
  if (iVar1 < 1000000000) {
    if (param_3 == 0) {
      (**(code **)(**(int **)(DAT_00790740 + 0x18 + param_2 * 4) + 0xc4))();
      iVar1 = FUN_005dcb00();
      if (0 < *(int *)(iVar1 + 0x4a8)) {
        iVar1 = FUN_005dcb00();
        *(undefined4 *)(iVar1 + 0x4a8) = 0;
      }
      iVar1 = FUN_005dcb00();
      *(int *)(iVar1 + 0x4a8) = *(int *)(iVar1 + 0x4a8) + -1;
      if (*(int *)(DAT_00790738 + 0x10c) != 4) {
        local_24._0_4_ = local_c;
        local_24._4_4_ = local_8;
        FUN_0064c560(_DAT_006b3730);
        uVar3 = CONCAT44(local_24._4_4_,(int)local_24);
        FUN_005dcb00(*(undefined4 *)(DAT_00790738 + 0x10c),(int)local_24,local_24._4_4_);
        FUN_005d5fb0(uVar3);
        uVar3 = CONCAT44(local_24._4_4_,(int)local_24);
        FUN_005dcb00(*(undefined4 *)(DAT_00790738 + 0x10c),(int)local_24,local_24._4_4_);
        FUN_005d5cf0(uVar3);
      }
      local_1c._0_4_ = -local_c;
      local_1c._4_4_ = -local_8;
      uVar3 = CONCAT44(local_1c._4_4_,(int)local_1c);
      FUN_005dcb00(param_2,(int)local_1c,local_1c._4_4_);
      FUN_005d5fb0(uVar3);
      local_4c = FUN_0064c8a0(0,0);
      (**(code **)(*param_1 + 0xb8))(local_4c,param_2,0);
    }
    else if (param_3 == 1) {
      iVar1 = FUN_005dcb00();
      if (*(int *)(iVar1 + 0x4a8) < 0) {
        iVar1 = FUN_005dcb00();
        *(undefined4 *)(iVar1 + 0x4a8) = 0;
      }
      FUN_005dcb00();
      FUN_005d7540();
      local_1c._0_4_ = local_c;
      local_1c._4_4_ = local_8;
      FUN_0064c560(_DAT_006b3730);
      if (*(int *)(DAT_00790738 + 0x10c) != 4) {
        local_2c = -local_c;
        local_28 = -local_8;
        uVar3 = CONCAT44(local_28,local_2c);
        FUN_005dcb00(*(undefined4 *)(DAT_00790738 + 0x10c),local_2c,local_28);
        FUN_005d5fb0(uVar3);
        uVar3 = CONCAT44(local_28,local_2c);
        FUN_005dcb00(*(undefined4 *)(DAT_00790738 + 0x10c),local_2c,local_28);
        FUN_005d5cf0(uVar3);
      }
      piVar2 = (int *)FUN_0064c5c0(local_54,local_c,local_8);
      local_14._0_4_ = *piVar2;
      local_14._4_4_ = piVar2[1];
      uVar3 = *(undefined8 *)piVar2;
      if (999999999 < (int)local_14) {
        uVar3 = FUN_0064c8a0(1000000000,0);
      }
      local_14 = uVar3;
      FUN_005dcb00(param_2,uVar3);
      FUN_005d5cf0(uVar3);
      uVar3 = CONCAT44(local_1c._4_4_,(int)local_1c);
      FUN_005dcb00(param_2,(int)local_1c,local_1c._4_4_);
      FUN_005d5fb0(uVar3);
      (**(code **)(*param_1 + 0xb8))(local_14,param_2,0);
    }
    else if (param_3 == 2) {
      uVar3 = CONCAT44(local_8,local_c);
      FUN_005dcb00(param_2,local_c,local_8);
      FUN_005d5cf0(uVar3);
    }
  }
  return;
}

