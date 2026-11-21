// FUN_005b8ab0  005b8ab0

void __thiscall
FUN_005b8ab0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_5c [8];
  undefined8 local_54;
  undefined8 local_4c;
  undefined1 local_44 [8];
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  double local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  FUN_005dcb00();
  iVar1 = FUN_005d5a50();
  if (iVar1 < 1000000000) {
    local_2c = FUN_0064c8a0(0,0);
    local_24 = local_2c;
    local_34 = FUN_0064c8a0(0,0);
    local_1c = (double)param_5 / (double)param_6;
    local_14 = local_34;
    if (param_1 == *(int **)(DAT_00793604 + 0x580 + param_2 * 4)) {
      local_c = param_1[param_2 * 8 + param_3 * 2 + 0x12];
      local_8 = param_1[param_2 * 8 + param_3 * 2 + 0x13];
      if (param_4 == 0) {
        (**(code **)(**(int **)(DAT_007935f8 + 0x18 + param_2 * 4) + 0xc0))(param_2,param_3);
        iVar1 = FUN_005dcb00(param_2);
        if (0 < *(int *)(iVar1 + 0x4a8)) {
          iVar1 = FUN_005dcb00(param_2);
          *(undefined4 *)(iVar1 + 0x4a8) = 0;
        }
        iVar1 = FUN_005dcb00(param_2);
        *(int *)(iVar1 + 0x4a8) = *(int *)(iVar1 + 0x4a8) + -1;
        iVar1 = -local_c;
        iVar3 = -local_8;
        local_24._0_4_ = iVar1;
        local_24._4_4_ = iVar3;
        FUN_005dcb00(param_2,iVar1,iVar3);
        FUN_005d5fb0(iVar1,iVar3);
        local_3c = FUN_0064c8a0(0,0);
        (**(code **)(*param_1 + 0xb8))(local_3c,param_2,param_3);
      }
      else if (param_4 == 1) {
        iVar1 = FUN_005dcb00();
        if (*(int *)(iVar1 + 0x4a8) < 0) {
          iVar1 = FUN_005dcb00();
          *(undefined4 *)(iVar1 + 0x4a8) = 0;
        }
        FUN_005dcb00();
        FUN_005d7540();
        local_24._0_4_ = local_c;
        local_24._4_4_ = local_8;
        FUN_0064c560(local_1c);
        if (1000000000 < (int)local_24) {
          local_24._0_4_ = 1000000000;
          local_24._4_4_ = 0;
        }
        piVar2 = (int *)FUN_0064c5c0(local_44,param_1[param_2 * 8 + param_3 * 2 + 0x12],
                                     param_1[param_2 * 8 + param_3 * 2 + 0x13]);
        local_14._0_4_ = *piVar2;
        local_14._4_4_ = piVar2[1];
        uVar4 = *(undefined8 *)piVar2;
        if (999999999 < (int)local_14) {
          local_4c = FUN_0064c8a0(1000000000,0);
          uVar4 = local_4c;
        }
        local_14 = uVar4;
        FUN_005dcb00(param_2,uVar4);
        FUN_005d5cf0(uVar4);
        uVar4 = CONCAT44(local_24._4_4_,(int)local_24);
        FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
        FUN_005d5fb0(uVar4);
        (**(code **)(*param_1 + 0xb8))(local_14,param_2,param_3);
      }
      else if (param_4 == 2) {
        uVar4 = CONCAT44(local_8,local_c);
        FUN_005dcb00(param_2,local_c,local_8);
        FUN_005d5cf0(uVar4);
      }
      else {
        FUN_005e9f20("false","..\\Casino\\royalmatchstate.cpp",0x9ba);
      }
    }
    else if (param_1 == *(int **)(DAT_00793604 + 0x634 + param_2 * 4)) {
      local_c = param_1[param_2 * 8 + param_3 * 2 + 0x12];
      local_8 = param_1[param_2 * 8 + param_3 * 2 + 0x13];
      if (param_4 == 0) {
        (**(code **)(**(int **)(DAT_007935f8 + 0x48 + param_2 * 4) + 0xc0))(param_2,param_3);
        iVar1 = -local_c;
        iVar3 = -local_8;
        local_24._0_4_ = iVar1;
        local_24._4_4_ = iVar3;
        FUN_005dcb00(param_2,iVar1,iVar3);
        FUN_005d5fb0(iVar1,iVar3);
        local_54 = FUN_0064c8a0(0,0);
        (**(code **)(*param_1 + 0xb8))(local_54,param_2,param_3);
      }
      else if (param_4 == 1) {
        local_24._0_4_ = local_c;
        local_24._4_4_ = local_8;
        FUN_0064c560(local_1c);
        if (1000000000 < (int)local_24) {
          local_24._0_4_ = 1000000000;
          local_24._4_4_ = 0;
        }
        piVar2 = (int *)FUN_0064c5c0(local_5c,param_1[param_2 * 8 + param_3 * 2 + 0x12],
                                     param_1[param_2 * 8 + param_3 * 2 + 0x13]);
        local_14._0_4_ = *piVar2;
        local_14._4_4_ = piVar2[1];
        uVar4 = *(undefined8 *)piVar2;
        if (999999999 < (int)local_14) {
          uVar4 = FUN_0064c8a0(1000000000,0);
        }
        local_14 = uVar4;
        FUN_005dcb00(param_2,uVar4);
        FUN_005d5cf0(uVar4);
        uVar4 = CONCAT44(local_24._4_4_,(int)local_24);
        FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
        FUN_005d5fb0(uVar4);
        (**(code **)(*param_1 + 0xb8))(local_14,param_2,param_3);
      }
      else {
        FUN_005e9f20("false","..\\Casino\\royalmatchstate.cpp",0x9dc);
      }
    }
    else {
      FUN_005e9f20("false","..\\Casino\\royalmatchstate.cpp",0x9e2);
    }
  }
  return;
}

