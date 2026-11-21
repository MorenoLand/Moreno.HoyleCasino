// FUN_0043cd40  0043cd40

void __thiscall FUN_0043cd40(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 local_3c [8];
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  double local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_c = param_1[param_2 * 8 + 0x12];
  local_8 = (param_1 + param_2 * 8 + 0x12)[1];
  local_2c = FUN_0064c8a0(0,0);
  local_24 = local_2c;
  local_34 = FUN_0064c8a0(0,0);
  local_14 = local_34;
  FUN_005f5400();
  iVar2 = FUN_0043adc0();
  FUN_005f5400();
  iVar3 = FUN_0043aff0();
  local_1c = (double)iVar2 / (double)iVar3;
  FUN_005dcb00();
  iVar2 = FUN_005d5a50();
  if (iVar2 < 2000000000) {
    iVar2 = FUN_005f5400();
    if ((iVar2 == 0x12) && (param_3 == 1)) {
      local_c = (int)(local_c + (local_c >> 0x1f & 3U)) >> 2;
    }
    param_1[0x44] = -1;
    if (local_c < 1) {
      FUN_005e9f20("originalBet.dollars > 0","..\\Casino\\crapsstate.cpp",0xb80);
    }
    if (param_3 == 0) {
      iVar2 = FUN_005dcb00();
      if (0 < *(int *)(iVar2 + 0x4a8)) {
        iVar2 = FUN_005dcb00();
        *(undefined4 *)(iVar2 + 0x4a8) = 0;
      }
      iVar2 = FUN_005dcb00();
      *(int *)(iVar2 + 0x4a8) = *(int *)(iVar2 + 0x4a8) + -1;
      local_24._0_4_ = -local_c;
      local_24._4_4_ = -local_8;
      uVar5 = CONCAT44(local_24._4_4_,(int)local_24);
      FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
      FUN_005d5fb0(uVar5);
      param_1[0x44] = 0;
    }
    else if (param_3 == 1) {
      iVar2 = FUN_005dcb00();
      if (*(int *)(iVar2 + 0x4a8) < 0) {
        iVar2 = FUN_005dcb00();
        *(undefined4 *)(iVar2 + 0x4a8) = 0;
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
      piVar4 = (int *)FUN_0064c5c0(local_3c,local_c,local_8);
      local_14._0_4_ = *piVar4;
      local_14._4_4_ = piVar4[1];
      uVar5 = *(undefined8 *)piVar4;
      if (999999999 < (int)local_14) {
        uVar5 = FUN_0064c8a0(1000000000,0);
      }
      local_14 = uVar5;
      FUN_005f5400();
      cVar1 = FUN_00438870();
      if (cVar1 == '\0') {
        uVar5 = local_14;
        FUN_005dcb00(param_2,local_14);
        FUN_005d5cf0(uVar5);
        (**(code **)(*param_1 + 0xb8))(local_14,param_2,0);
      }
      else {
        uVar5 = CONCAT44(local_24._4_4_,(int)local_24);
        FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
        FUN_005d5cf0(uVar5);
        (**(code **)(*param_1 + 0xb8))(local_c,local_8,param_2,0);
      }
      uVar5 = CONCAT44(local_24._4_4_,(int)local_24);
      FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
      FUN_005d5fb0(uVar5);
      param_1[0x44] = 1;
    }
    else if (param_3 == 3) {
      uVar5 = CONCAT44(local_8,local_c);
      FUN_005dcb00(param_2,local_c,local_8);
      FUN_005d5cf0(uVar5);
      param_1[0x44] = 3;
    }
    uVar5 = CONCAT44(param_3,param_2);
    FUN_00434820(param_1);
    FUN_0042c5f0(uVar5);
  }
  return;
}

