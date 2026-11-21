// FUN_00630830  00630830

void FUN_00630830(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 local_34 [4];
  undefined1 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab85e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006101f0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  local_1c = 0x18;
  local_24 = param_4;
  local_18 = 0;
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
  local_14 = FUN_005f4070(param_2,param_3,param_1);
  if ((local_14 != 0) && (*(int *)(local_14 + 0x1a8) == param_1)) {
    local_2c = FUN_005f84d0();
    local_2c = param_2 - local_2c;
    local_28 = FUN_005f84f0();
    local_28 = param_3 - local_28;
    (**(code **)(*DAT_0162ee84 + 0xc))(local_34);
  }
  local_8 = 0xffffffff;
  FUN_00610250();
  ExceptionList = local_10;
  return;
}

