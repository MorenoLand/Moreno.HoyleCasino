// FUN_00630950  00630950

void FUN_00630950(undefined4 param_1,char param_2,char param_3,char param_4)

{
  char cVar1;
  undefined1 local_34 [4];
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab881;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006101f0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if ((param_2 < '\0') || ('\x1a' < param_2)) {
    local_18 = 0;
  }
  else {
    local_18 = 2;
  }
  cVar1 = FUN_005e9e60();
  if (cVar1 != '\0') {
    local_18 = local_18 | 2;
  }
  cVar1 = FUN_005e9e80();
  if (cVar1 != '\0') {
    local_18 = local_18 | 1;
  }
  cVar1 = FUN_005e9ec0();
  if (cVar1 != '\0') {
    local_18 = local_18 | 4;
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = FUN_00624e70(param_2);
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_1c = 4;
    }
    else {
      local_1c = 0x16;
    }
  }
  else {
    local_1c = 0x15;
  }
  local_14 = FUN_005f4070(local_2c,local_28,param_1);
  if (local_14 != 0) {
    (**(code **)(*DAT_0162ee84 + 0xc))(local_34);
  }
  local_8 = 0xffffffff;
  FUN_00610250();
  ExceptionList = local_10;
  return;
}

