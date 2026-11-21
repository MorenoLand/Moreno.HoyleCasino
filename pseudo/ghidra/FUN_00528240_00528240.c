// FUN_00528240  00528240

undefined4 FUN_00528240(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_34;
  int local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  int local_18;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_20 = FUN_0064c8a0(0,0);
  local_14 = local_20;
  local_c = (**(code **)(*DAT_00793370 + 0x2b0))();
  piVar2 = (int *)FUN_005cb880(local_28,param_1);
  local_18 = *piVar2;
  local_14._4_4_ = piVar2[1];
  local_14._0_4_ = local_18;
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    if (local_c * 10 < 500) {
      local_34 = 500;
    }
    else {
      local_34 = local_c * 10;
    }
    local_8 = local_34;
  }
  else {
    iVar3 = FUN_005da8a0();
    if ((iVar3 - *(int *)(DAT_007947e0 + 0x4ef8)) * local_c < 0xfa) {
      local_30 = 0xfa;
    }
    else {
      iVar3 = FUN_005da8a0();
      local_30 = (iVar3 - *(int *)(DAT_007947e0 + 0x4ef8)) * local_c;
    }
    local_8 = local_30;
  }
  FUN_005dcb00(param_1);
  iVar3 = FUN_005d5a50();
  return CONCAT31((int3)((uint)(iVar3 + local_18) >> 8),iVar3 + local_18 < local_8);
}

