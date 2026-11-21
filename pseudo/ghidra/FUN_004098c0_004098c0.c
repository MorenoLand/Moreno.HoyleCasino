// FUN_004098c0  004098c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004098c0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_6c [8];
  undefined8 local_64;
  undefined1 local_5c [8];
  undefined8 local_54;
  undefined1 local_4c [8];
  undefined8 local_44;
  undefined1 local_3c [8];
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_c = param_1[param_2 * 8 + 0x12];
  local_8 = (param_1 + param_2 * 8 + 0x12)[1];
  local_2c = FUN_0064c8a0(0,0);
  local_24 = local_2c;
  local_34 = FUN_0064c8a0(0,0);
  local_1c = 0x3ff0000000000000;
  param_1[0x3c] = -1;
  local_14 = local_34;
  FUN_005dcb00();
  iVar1 = FUN_005d5a50();
  if ((iVar1 < 1000000000) && ((local_c != 0 || (local_8 != 0)))) {
    switch(param_3) {
    case 0:
      iVar1 = FUN_005dcb00();
      if (0 < *(int *)(iVar1 + 0x4a8)) {
        iVar1 = FUN_005dcb00();
        *(undefined4 *)(iVar1 + 0x4a8) = 0;
      }
      iVar1 = FUN_005dcb00();
      *(undefined4 *)(iVar1 + 0x4a8) = 0;
      local_24._0_4_ = -local_c;
      local_24._4_4_ = -local_8;
      uVar4 = CONCAT44(local_24._4_4_,(int)local_24);
      FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
      FUN_005d5fb0(uVar4);
      param_1[0x3c] = 0;
      break;
    case 1:
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
      }
      piVar2 = (int *)FUN_0064c5c0(local_3c,local_c,local_8);
      local_14._0_4_ = *piVar2;
      local_14._4_4_ = piVar2[1];
      uVar4 = *(undefined8 *)piVar2;
      if (999999999 < (int)local_14) {
        local_44 = FUN_0064c8a0(1000000000,0);
        uVar4 = local_44;
      }
      local_14 = uVar4;
      FUN_005dcb00(param_2,uVar4);
      FUN_005d5cf0(uVar4);
      (**(code **)(*param_1 + 0xb8))(local_14,param_2,0);
      uVar4 = CONCAT44(local_24._4_4_,(int)local_24);
      FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
      FUN_005d5fb0(uVar4);
      param_1[0x3c] = 1;
      break;
    case 2:
      iVar1 = FUN_005dcb00();
      if (*(int *)(iVar1 + 0x4a8) < 0) {
        iVar1 = FUN_005dcb00();
        *(undefined4 *)(iVar1 + 0x4a8) = 0;
      }
      local_24._0_4_ = 0;
      local_24._4_4_ = 0;
      piVar2 = (int *)FUN_0064c5c0(local_6c,local_c,local_8);
      local_14._0_4_ = *piVar2;
      local_14._4_4_ = piVar2[1];
      uVar4 = *(undefined8 *)piVar2;
      if (999999999 < (int)local_14) {
        uVar4 = FUN_0064c8a0(1000000000,0);
      }
      local_14 = uVar4;
      FUN_005dcb00(param_2,uVar4);
      FUN_005d5cf0(uVar4);
      (**(code **)(*param_1 + 0xb8))(local_14,param_2,0);
      uVar4 = CONCAT44(local_24._4_4_,(int)local_24);
      FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
      FUN_005d5fb0(uVar4);
      param_1[0x3c] = 2;
      break;
    case 8:
      iVar1 = FUN_005dcb00();
      if (*(int *)(iVar1 + 0x4a8) < 0) {
        iVar1 = FUN_005dcb00();
        *(undefined4 *)(iVar1 + 0x4a8) = 0;
      }
      FUN_005dcb00();
      FUN_005d7540();
      local_24._0_4_ = local_c;
      local_24._4_4_ = local_8;
      FUN_0064c560(_DAT_006b3730);
      if (1000000000 < (int)local_24) {
        local_24._0_4_ = 1000000000;
        local_24._4_4_ = 0;
      }
      piVar2 = (int *)FUN_0064c5c0(local_4c,local_c,local_8);
      local_14._0_4_ = *piVar2;
      local_14._4_4_ = piVar2[1];
      uVar4 = *(undefined8 *)piVar2;
      if (999999999 < (int)local_14) {
        local_54 = FUN_0064c8a0(1000000000,0);
        uVar4 = local_54;
      }
      local_14 = uVar4;
      FUN_005dcb00(param_2,uVar4);
      FUN_005d5cf0(uVar4);
      (**(code **)(*param_1 + 0xb8))(local_14,param_2,0);
      uVar4 = CONCAT44(local_24._4_4_,(int)local_24);
      FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
      FUN_005d5fb0(uVar4);
      param_1[0x3c] = 1;
      break;
    case 9:
      local_1c = _DAT_006b3728;
      iVar1 = FUN_005dcb00();
      if (*(int *)(iVar1 + 0x4a8) < 0) {
        iVar1 = FUN_005dcb00();
        *(undefined4 *)(iVar1 + 0x4a8) = 0;
      }
      local_24._0_4_ = local_c;
      local_24._4_4_ = local_8;
      FUN_0064c560(local_1c);
      if (1000000000 < (int)local_24) {
        local_24._0_4_ = 1000000000;
        local_24._4_4_ = 0;
      }
      piVar2 = (int *)FUN_0064c5c0(local_5c,local_c,local_8);
      local_14._0_4_ = *piVar2;
      local_14._4_4_ = piVar2[1];
      uVar4 = *(undefined8 *)piVar2;
      if (999999999 < (int)local_14) {
        local_64 = FUN_0064c8a0(1000000000,0);
        uVar4 = local_64;
      }
      local_14 = uVar4;
      FUN_005dcb00(param_2,uVar4);
      FUN_005d5cf0(uVar4);
      (**(code **)(*param_1 + 0xb8))(local_14,param_2,0);
      uVar4 = CONCAT44(local_24._4_4_,(int)local_24);
      FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
      FUN_005d5fb0(uVar4);
      param_1[0x3c] = 9;
    }
    if (DAT_007902f8 != 0) {
      uVar3 = FUN_005f5400();
      uVar4 = CONCAT44(param_3,uVar3);
      FUN_00408de0(param_1);
      FUN_00402da0(param_2,uVar4);
    }
  }
  return;
}

