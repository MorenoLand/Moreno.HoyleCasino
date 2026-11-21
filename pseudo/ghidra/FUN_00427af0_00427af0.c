// FUN_00427af0  00427af0

void __thiscall FUN_00427af0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 local_74 [8];
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  double local_54;
  int local_48 [11];
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_48[0] = 0;
  local_48[1] = 1;
  local_48[2] = 1;
  local_48[3] = 2;
  local_48[4] = 3;
  local_48[5] = 4;
  local_48[6] = 5;
  local_48[7] = 7;
  local_48[8] = 0x14;
  local_48[9] = 0x32;
  local_48[10] = 100;
  local_c = param_1[param_2 * 8 + 0x12];
  local_8 = param_1[param_2 * 8 + 0x13];
  local_5c = FUN_0064c8a0(0,0);
  local_1c = local_5c;
  local_64 = FUN_0064c8a0(0,0);
  local_14 = local_64;
  FUN_005dcb00();
  iVar1 = FUN_005d5a50();
  if (iVar1 < 1000000000) {
    if (param_3 == 0) {
      iVar1 = FUN_005f5400();
      (**(code **)(**(int **)(DAT_00790360 + 0x18 + iVar1 * 4) + 0xc4))();
      iVar1 = FUN_005dcb00();
      if (0 < *(int *)(iVar1 + 0x4a8)) {
        iVar1 = FUN_005dcb00();
        *(undefined4 *)(iVar1 + 0x4a8) = 0;
      }
      iVar1 = FUN_005dcb00();
      *(int *)(iVar1 + 0x4a8) = *(int *)(iVar1 + 0x4a8) + -1;
      local_1c._0_4_ = -local_c;
      local_1c._4_4_ = -local_8;
      uVar4 = CONCAT44(local_1c._4_4_,(int)local_1c);
      FUN_005dcb00(param_2,(int)local_1c,local_1c._4_4_);
      FUN_005d5fb0(uVar4);
      local_6c = FUN_0064c8a0(0,0);
      (**(code **)(*param_1 + 0xb8))(local_6c,param_2,0);
    }
    else {
      if (param_3 == 1) {
        iVar1 = FUN_005dcb00();
        if (*(int *)(iVar1 + 0x4a8) < 0) {
          iVar1 = FUN_005dcb00();
          if (*(int *)(iVar1 + 0x4a8) < -3) {
            *(undefined1 *)(DAT_00790358 + param_2 + 0xd0) = 1;
          }
          iVar1 = FUN_005dcb00();
          *(undefined4 *)(iVar1 + 0x4a8) = 0;
        }
        FUN_005dcb00();
        FUN_005d7540();
      }
      if (param_3 == 1) {
        uVar2 = FUN_005f5400();
        uVar2 = uVar2 & 0x80000001;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
        }
        if (uVar2 == 1) {
          iVar1 = FUN_00462ba0(DAT_00790358 + 0x6c + param_2 * 10,5,0);
          local_54 = (double)local_48[iVar1];
          local_1c._0_4_ = local_c;
          local_1c._4_4_ = local_8;
          FUN_0064c560(local_54);
        }
        else {
          local_1c = CONCAT44(local_8,local_c);
        }
      }
      if (1000000000 < (int)local_1c) {
        local_1c = 1000000000;
      }
      piVar3 = (int *)FUN_0064c5c0(local_74,param_1[param_2 * 8 + 0x12],param_1[param_2 * 8 + 0x13])
      ;
      local_14._0_4_ = *piVar3;
      local_14._4_4_ = piVar3[1];
      uVar4 = *(undefined8 *)piVar3;
      if (999999999 < (int)local_14) {
        uVar4 = FUN_0064c8a0(1000000000,0);
      }
      local_14 = uVar4;
      FUN_005dcb00(param_2,uVar4);
      FUN_005d5cf0(uVar4);
      uVar4 = local_1c;
      FUN_005dcb00(param_2,local_1c);
      FUN_005d5fb0(uVar4);
      (**(code **)(*param_1 + 0xb8))(local_14,param_2,0);
    }
  }
  return;
}

