// FUN_005a4390  005a4390

void __thiscall FUN_005a4390(int *param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_c = param_1[param_2 * 8 + 0x12];
  local_8 = param_1[param_2 * 8 + 0x13];
  local_28 = FUN_0064c8a0(0,0);
  local_18 = 0;
  local_20 = local_28;
  iVar1 = FUN_005f5400();
  *(int *)(DAT_007935d0 + 0x98 + iVar1 * 4) = param_3;
  if (param_3 == 3) {
    uVar4 = CONCAT44(local_8,local_c);
    FUN_005dcb00(param_2,local_c,local_8);
    FUN_005d5cf0(uVar4);
    iVar1 = FUN_005f5400();
    (**(code **)(**(int **)(DAT_007935d0 + 8 + iVar1 * 4) + 0xbc))(param_2,0);
  }
  else {
    FUN_005dcb00();
    iVar1 = FUN_005d52e0();
    *(int *)(DAT_007935d0 + 0x114) = (int)*(char *)(iVar1 + 0x2a);
    if ((*(int *)(DAT_007935d0 + 0x110) == *(int *)(DAT_007935d0 + 0x114)) ||
       (*(int *)(DAT_007935d0 + 0x114) != 0)) {
      FUN_005dcb00();
      iVar1 = FUN_005d5a50();
      if (iVar1 < 1000000000) {
        if (param_5 == '\0') {
          if (param_3 == 0) {
            iVar1 = FUN_005f5400();
            (**(code **)(**(int **)(DAT_007935c4 + 0x1c + iVar1 * 4) + 0xc4))();
            iVar1 = FUN_005dcb00();
            if (0 < *(int *)(iVar1 + 0x4a8)) {
              iVar1 = FUN_005dcb00();
              *(undefined4 *)(iVar1 + 0x4a8) = 0;
            }
            iVar1 = FUN_005dcb00();
            *(int *)(iVar1 + 0x4a8) = *(int *)(iVar1 + 0x4a8) + -1;
            local_20._0_4_ = -local_c;
            local_20._4_4_ = -local_8;
            uVar4 = CONCAT44(local_20._4_4_,(int)local_20);
            FUN_005dcb00(param_2,(int)local_20,local_20._4_4_);
            FUN_005d5fb0(uVar4);
            uVar4 = FUN_0064c8a0(0,0);
            (**(code **)(*param_1 + 0xb8))(uVar4,param_2,0);
          }
          else {
            uVar4 = local_20;
            if (param_3 == 1) {
              iVar1 = FUN_005dcb00();
              if (*(int *)(iVar1 + 0x4a8) < 0) {
                iVar1 = FUN_005dcb00();
                if (*(int *)(iVar1 + 0x4a8) < -4) {
                  *(undefined1 *)(DAT_007935d0 + param_2 + 0x104) = 1;
                }
                iVar1 = FUN_005dcb00();
                *(undefined4 *)(iVar1 + 0x4a8) = 0;
              }
              FUN_005dcb00();
              FUN_005d7540();
              uVar4 = CONCAT44(local_8,local_c);
            }
            local_20._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
            local_20._0_4_ = (int)uVar4;
            if (1000000000 < (int)local_20) {
              local_20._0_4_ = 1000000000;
            }
            FUN_0064c5c0(&local_14,param_1[param_2 * 8 + 0x12],param_1[param_2 * 8 + 0x13]);
            uVar4 = CONCAT44(local_14._4_4_,(int)local_14);
            if (999999999 < (int)local_14) {
              uVar4 = FUN_0064c8a0(1000000000,0);
            }
            local_14 = uVar4;
            FUN_005dcb00(param_2,uVar4);
            FUN_005d5cf0(uVar4);
            uVar4 = CONCAT44(local_20._4_4_,(int)local_20);
            FUN_005dcb00(param_2,(int)local_20,local_20._4_4_);
            FUN_005d5fb0(uVar4);
            (**(code **)(*param_1 + 0xb8))(local_14,param_2,0);
          }
        }
        else {
          if (param_4 == 10) {
            local_18 = 0x32;
          }
          else if (param_4 == 9) {
            local_18 = 0x28;
          }
          else if (param_4 == 8) {
            local_18 = 0x1e;
          }
          else if (param_4 == 7) {
            local_18 = 0x14;
          }
          else if (param_4 == 6) {
            local_18 = 0xf;
          }
          else if (param_4 == 5) {
            local_18 = 10;
          }
          else if (param_4 == 4) {
            local_18 = 7;
          }
          else if (param_4 == 3) {
            local_18 = 3;
          }
          else {
            local_18 = 1;
          }
          local_20._0_4_ = local_c;
          local_20._4_4_ = local_8;
          FUN_0064c560((double)local_18);
          piVar2 = (int *)FUN_0064c5c0(local_30,local_c,local_8);
          local_20._0_4_ = *piVar2;
          local_20._4_4_ = piVar2[1];
          if (1000000000 < (int)local_20) {
            local_20._0_4_ = 1000000000;
          }
          uVar4 = CONCAT44(local_20._4_4_,(int)local_20);
          FUN_005dcb00(param_2,(int)local_20,local_20._4_4_);
          FUN_005d5cf0(uVar4);
          uVar4 = CONCAT44(local_20._4_4_,(int)local_20);
          FUN_005dcb00(param_2,(int)local_20,local_20._4_4_);
          FUN_005d5fb0(uVar4);
          puVar3 = (undefined4 *)FUN_0064c630(local_38,local_c,local_8);
          local_20._0_4_ = *puVar3;
          local_20._4_4_ = puVar3[1];
          (**(code **)(*param_1 + 0xb8))((int)local_20,local_20._4_4_,param_2,1);
        }
      }
    }
  }
  return;
}

