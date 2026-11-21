// FUN_00630550  00630550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00630550(undefined4 param_1,int param_2,int param_3,int param_4,char param_5)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  undefined1 local_38 [4];
  undefined1 local_34;
  int local_30;
  int local_2c;
  int local_20;
  uint local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab83b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006101f0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  local_11 = '\0';
  if (((param_5 != '\0') && (param_4 == 0)) && ((char)DAT_0162ee84[0x13] != '\0')) {
    DVar2 = GetTickCount();
    if ((DAT_0162ee7c != 0) && (DAT_0162ee7c < DVar2)) {
      DAT_0162ee7c = 0;
    }
    if (((DAT_0162ee7c == 0) &&
        (uVar6 = DVar2 - _DAT_0162ee78, uVar3 = FUN_005e9fc0(), uVar6 <= uVar3)) &&
       ((iVar4 = abs(param_2 - _DAT_0162ee74), iVar4 < 6 &&
        (iVar4 = abs(param_3 - _DAT_0162ee70), iVar4 < 6)))) {
      local_11 = '\x01';
      DVar5 = GetTickCount();
      iVar4 = FUN_005e9fc0();
      DAT_0162ee7c = DVar5 + iVar4 * 2;
    }
    _DAT_0162ee74 = param_2;
    _DAT_0162ee70 = param_3;
    _DAT_0162ee78 = DVar2;
  }
  if (param_5 == '\0') {
    if (DAT_0162ee6e != '\0') {
      param_4 = 1;
    }
    DAT_0162ee6e = false;
  }
  else {
    cVar1 = FUN_005e9e60();
    DAT_0162ee6e = cVar1 != '\0';
    if ((bool)DAT_0162ee6e) {
      param_4 = 1;
    }
  }
  local_20 = 2 - (uint)(param_5 != '\0');
  local_1c = (uint)(param_4 != 0) * 8 + 8;
  cVar1 = FUN_005e9e60();
  if (cVar1 != '\0') {
    local_1c = local_1c | 2;
  }
  cVar1 = FUN_005e9e80();
  if (cVar1 != '\0') {
    local_1c = local_1c | 1;
  }
  cVar1 = FUN_005e9ec0();
  if (cVar1 != '\0') {
    local_1c = local_1c | 4;
  }
  local_34 = 0;
  local_18 = FUN_005f4070(param_2,param_3,param_1);
  if (local_18 != 0) {
    local_30 = FUN_005f84d0();
    local_30 = param_2 - local_30;
    local_2c = FUN_005f84f0();
    local_2c = param_3 - local_2c;
    if (local_11 != '\0') {
      local_1c = local_1c | 0x20;
    }
    (**(code **)(*DAT_0162ee84 + 0xc))(local_38);
    if (local_11 != '\0') {
      FUN_00613f80();
      local_20 = 2;
      local_34 = 0;
      (**(code **)(*DAT_0162ee84 + 0xc))(local_38);
      FUN_00613f80();
      local_20 = 1;
      local_1c = 0x30;
      local_34 = 0;
      (**(code **)(*DAT_0162ee84 + 0xc))(local_38);
      FUN_00613f80();
      local_20 = 2;
      local_34 = 0;
      (**(code **)(*DAT_0162ee84 + 0xc))(local_38);
    }
  }
  local_8 = 0xffffffff;
  FUN_00610250();
  ExceptionList = local_10;
  return;
}

