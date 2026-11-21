// FUN_005423a0  005423a0

void __thiscall FUN_005423a0(int *param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [10];
  undefined8 local_20;
  int local_18;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_c = param_1[param_2 * 8 + 0x12];
  local_8 = param_1[param_2 * 8 + 0x13];
  local_50 = FUN_0064c8a0(0,0);
  local_20 = local_50;
  local_58 = FUN_0064c8a0(0,0);
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 1;
  local_48[3] = 0;
  local_48[4] = 0x1e;
  local_48[5] = 6;
  local_48[6] = 4;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0x28;
  local_18 = 0;
  local_14 = local_58;
  iVar1 = FUN_005f5400();
  *(int *)(DAT_007933ec + 0x98 + iVar1 * 4) = param_3;
  FUN_005dcb00();
  iVar1 = FUN_005d52e0();
  *(int *)(DAT_007933ec + 0x10c) = (int)*(char *)(iVar1 + 0x2a);
  if ((*(int *)(DAT_007933ec + 0x108) == *(int *)(DAT_007933ec + 0x10c)) ||
     (*(int *)(DAT_007933ec + 0x10c) != 0)) {
    FUN_005dcb00();
    iVar1 = FUN_005d5a50();
    if (iVar1 < 1000000000) {
      if (param_5 == '\0') {
        if (param_3 == 0) {
          iVar1 = FUN_005f5400();
          (**(code **)(**(int **)(DAT_007933f4 + 0x18 + iVar1 * 4) + 0xc4))();
          iVar1 = FUN_005dcb00();
          if (0 < *(int *)(iVar1 + 0x4a8)) {
            iVar1 = FUN_005dcb00();
            *(undefined4 *)(iVar1 + 0x4a8) = 0;
          }
          iVar1 = FUN_005dcb00();
          *(int *)(iVar1 + 0x4a8) = *(int *)(iVar1 + 0x4a8) + -1;
          local_20._0_4_ = -local_c;
          local_20._4_4_ = -local_8;
          uVar3 = CONCAT44(local_20._4_4_,(int)local_20);
          FUN_005dcb00(param_2,(int)local_20,local_20._4_4_);
          FUN_005d5fb0(uVar3);
          local_60 = FUN_0064c8a0(0,0);
          (**(code **)(*param_1 + 0xb8))(local_60,param_2,0);
        }
        else {
          if (param_3 == 1) {
            iVar1 = FUN_005dcb00();
            if (*(int *)(iVar1 + 0x4a8) < 0) {
              iVar1 = FUN_005dcb00();
              if (*(int *)(iVar1 + 0x4a8) < -4) {
                *(undefined1 *)(DAT_007933ec + param_2 + 0xfb) = 1;
              }
              iVar1 = FUN_005dcb00();
              *(undefined4 *)(iVar1 + 0x4a8) = 0;
            }
            FUN_005dcb00();
            FUN_005d7540();
          }
          uVar3 = local_20;
          if (param_3 == 1) {
            local_20._0_4_ = local_c;
            local_20._4_4_ = local_8;
            iVar1 = FUN_005f5400();
            uVar3 = CONCAT44(local_20._4_4_,(int)local_20);
            if (iVar1 % 3 == 2) {
              FUN_0064c560((double)local_48[param_4]);
              uVar3 = CONCAT44(local_20._4_4_,(int)local_20);
            }
          }
          local_20._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          local_20._0_4_ = (int)uVar3;
          if (1000000000 < (int)local_20) {
            local_20._0_4_ = 1000000000;
          }
          piVar2 = (int *)FUN_0064c5c0(local_68,param_1[param_2 * 8 + 0x12],
                                       param_1[param_2 * 8 + 0x13]);
          local_14._0_4_ = *piVar2;
          local_14._4_4_ = piVar2[1];
          uVar3 = *(undefined8 *)piVar2;
          if (999999999 < (int)local_14) {
            uVar3 = FUN_0064c8a0(1000000000,0);
          }
          local_14 = uVar3;
          FUN_005dcb00(param_2,uVar3);
          FUN_005d5cf0(uVar3);
          uVar3 = CONCAT44(local_20._4_4_,(int)local_20);
          FUN_005dcb00(param_2,(int)local_20,local_20._4_4_);
          FUN_005d5fb0(uVar3);
          (**(code **)(*param_1 + 0xb8))(local_14,param_2,0);
        }
      }
      else {
        if (param_4 == 5) {
          local_18 = 1;
        }
        if (param_4 == 4) {
          local_18 = 4;
        }
        if (param_4 == 9) {
          local_18 = 5;
        }
        local_20._0_4_ = local_c;
        local_20._4_4_ = local_8;
        FUN_0064c560((double)local_18);
        if (1000000000 < (int)local_20) {
          local_20._0_4_ = 1000000000;
        }
        uVar3 = CONCAT44(local_20._4_4_,(int)local_20);
        FUN_005dcb00(param_2,(int)local_20,local_20._4_4_);
        FUN_005d5cf0(uVar3);
        uVar3 = CONCAT44(local_20._4_4_,(int)local_20);
        FUN_005dcb00(param_2,(int)local_20,local_20._4_4_);
        FUN_005d5fb0(uVar3);
        local_14._0_4_ = (int)local_20;
        local_14._4_4_ = local_20._4_4_;
        (**(code **)(*param_1 + 0xb8))((int)local_20,local_20._4_4_,param_2,1);
      }
    }
  }
  return;
}

