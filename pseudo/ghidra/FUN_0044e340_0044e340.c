// FUN_0044e340  0044e340

void __thiscall FUN_0044e340(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 local_64 [8];
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_44 = 0;
  local_40 = 1;
  local_3c = 2;
  local_38 = 3;
  local_34 = 5;
  local_30 = 8;
  local_2c = 0xb;
  local_28 = 0x32;
  local_24 = 200;
  local_20 = 1000;
  local_c = param_1[param_2 * 8 + 0x12];
  local_8 = param_1[param_2 * 8 + 0x13];
  local_4c = FUN_0064c8a0(0,0);
  local_1c = local_4c;
  local_54 = FUN_0064c8a0(0,0);
  local_14 = local_54;
  FUN_005dcb00();
  iVar1 = FUN_005d5a50();
  if (iVar1 < 1000000000) {
    if (param_3 < 2) {
      iVar1 = FUN_005f5400();
      (**(code **)(**(int **)(DAT_00790718 + 0x14 + iVar1 * 4) + 0xc4))();
      iVar1 = FUN_005dcb00();
      if (0 < *(int *)(iVar1 + 0x4a8)) {
        iVar1 = FUN_005dcb00();
        *(undefined4 *)(iVar1 + 0x4a8) = 0;
      }
      iVar1 = FUN_005dcb00();
      *(int *)(iVar1 + 0x4a8) = *(int *)(iVar1 + 0x4a8) + -1;
      local_1c._0_4_ = -local_c;
      local_1c._4_4_ = -local_8;
      uVar3 = CONCAT44(local_1c._4_4_,(int)local_1c);
      FUN_005dcb00(param_2,(int)local_1c,local_1c._4_4_);
      FUN_005d5fb0(uVar3);
      local_5c = FUN_0064c8a0(0,0);
      (**(code **)(*param_1 + 0xb8))(local_5c,param_2,0);
    }
    else {
      iVar1 = FUN_005dcb00();
      if (*(int *)(iVar1 + 0x4a8) < 0) {
        iVar1 = FUN_005dcb00();
        if (*(int *)(iVar1 + 0x4a8) < -3) {
          *(undefined1 *)(DAT_00790710 + param_2 + 0xec) = 1;
        }
        iVar1 = FUN_005dcb00();
        *(undefined4 *)(iVar1 + 0x4a8) = 0;
      }
      FUN_005dcb00();
      FUN_005d7540();
      local_1c._0_4_ = local_c;
      local_1c._4_4_ = local_8;
      FUN_0064c560((double)*(int *)((int)&local_4c + param_3 * 4 + 4));
      if (1000000000 < (int)local_1c) {
        local_1c._0_4_ = 1000000000;
      }
      piVar2 = (int *)FUN_0064c5c0(local_64,param_1[param_2 * 8 + 0x12],param_1[param_2 * 8 + 0x13])
      ;
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
  }
  return;
}

