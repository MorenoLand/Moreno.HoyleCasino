// FUN_005caea0  005caea0

void FUN_005caea0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_2c [8];
  int local_24;
  int local_20;
  undefined8 local_1c;
  int local_14;
  int local_10;
  int local_c;
  CPane *local_8;
  
  local_8 = (CPane *)(**(code **)(*DAT_007947e4 + 0x25c))();
  CPane::GetMinSize(local_8,(CSize *)&local_14);
  FUN_005d5ac0(&local_24);
  local_c = (**(code **)(*DAT_007947e4 + 0x2b4))();
  if ((((local_14 != local_c) || (*param_1 < 0)) || (param_1[1] < 0)) &&
     (((local_14 != local_24 || (local_10 != local_20)) || ((*param_1 < 0 || (param_1[1] < 0)))))) {
    piVar1 = (int *)FUN_0064c5c0(local_2c,*param_1,param_1[1]);
    local_1c._0_4_ = *piVar1;
    local_1c._4_4_ = piVar1[1];
    if (local_c < (int)local_1c) {
      local_1c._0_4_ = local_c;
    }
    if (((int)local_1c == local_c) && (0 < local_1c._4_4_)) {
      local_1c._4_4_ = 0;
    }
    if ((local_24 < (int)local_1c) || (((int)local_1c == local_24 && (local_20 < local_1c._4_4_))))
    {
      local_1c = CONCAT44(local_20,local_24);
    }
    else if (((int)local_1c < 0) || (local_1c._4_4_ < 0)) {
      local_1c = FUN_0064c8a0(0,0);
    }
    FUN_005d5e10(local_1c);
    FUN_005ca8b0();
    piVar1 = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    if (iVar2 == 1) {
      (**(code **)(*(int *)local_8 + 0xc))(*(int *)(local_8 + 0x4bc),*(int *)(local_8 + 0x4c0),0);
    }
  }
  return;
}

