// FUN_0043b5e0  0043b5e0

int FUN_0043b5e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint3 uVar5;
  int iVar4;
  int local_30;
  int local_2c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_14 = FUN_0064c8a0(0,0);
  local_c = (**(code **)(*DAT_007906d0 + 0x2b0))();
  (**(code **)(*DAT_007906d0 + 0x27c))(param_1,&local_14);
  iVar4 = (int)local_14;
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    if (local_c * 10 < 500) {
      local_30 = 500;
    }
    else {
      local_30 = local_c * 10;
    }
    local_8 = local_30;
  }
  else {
    iVar2 = FUN_005da8c0();
    iVar3 = FUN_005da8a0();
    if ((iVar3 - iVar2) * local_c < 400) {
      local_2c = 400;
    }
    else {
      iVar3 = FUN_005da8a0();
      local_2c = (iVar3 - iVar2) * local_c;
    }
    local_8 = local_2c;
  }
  FUN_005dcb00(param_1);
  iVar2 = FUN_005d5a50();
  uVar5 = (uint3)((uint)(iVar2 + iVar4) >> 8);
  if (iVar2 + iVar4 < local_8) {
    iVar4 = CONCAT31(uVar5,1);
  }
  else {
    iVar4 = (uint)uVar5 << 8;
  }
  return iVar4;
}

