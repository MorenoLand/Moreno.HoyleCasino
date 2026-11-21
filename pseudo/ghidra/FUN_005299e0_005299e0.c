// FUN_005299e0  005299e0

void __thiscall
FUN_005299e0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 local_3c [8];
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  double local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_c = param_1[param_2 * 8 + param_3 * 2 + 0x12];
  local_8 = param_1[param_2 * 8 + param_3 * 2 + 0x13];
  local_2c = FUN_0064c8a0(0,0);
  local_24 = local_2c;
  local_34 = FUN_0064c8a0(0,0);
  local_1c = (double)param_5 / (double)param_6;
  local_14 = local_34;
  FUN_005dcb00();
  iVar1 = FUN_005d5a50();
  if (iVar1 < 1000000000) {
    if (param_4 == 0) {
      local_24._0_4_ = -local_c;
      local_24._4_4_ = -local_8;
      uVar3 = CONCAT44(local_24._4_4_,(int)local_24);
      FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
      FUN_005d5fb0(uVar3);
      param_1[0x3c] = 0;
    }
    else if (param_4 == 1) {
      local_24._0_4_ = local_c;
      local_24._4_4_ = local_8;
      FUN_0064c560(local_1c);
      if (1000000000 < (int)local_24) {
        local_24._0_4_ = 1000000000;
      }
      piVar2 = (int *)FUN_0064c5c0(local_3c,local_c,local_8);
      local_14._0_4_ = *piVar2;
      local_14._4_4_ = piVar2[1];
      uVar3 = *(undefined8 *)piVar2;
      if (999999999 < (int)local_14) {
        uVar3 = FUN_0064c8a0(1000000000,0);
      }
      local_14 = uVar3;
      FUN_005dcb00(param_2,uVar3);
      FUN_005d5cf0(uVar3);
      uVar3 = CONCAT44(local_24._4_4_,(int)local_24);
      FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
      FUN_005d5fb0(uVar3);
      (**(code **)(*param_1 + 0xb8))(local_14,param_2,param_3);
      param_1[0x3c] = 1;
    }
  }
  return;
}

