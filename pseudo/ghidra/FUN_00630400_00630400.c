// FUN_00630400  00630400

void FUN_00630400(int param_1,int param_2)

{
  char cVar1;
  undefined1 local_34 [4];
  undefined1 local_30;
  int local_2c;
  int local_28;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab818;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006101f0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if ((DAT_0162ee84 == (int *)0x0) || (DAT_0162ee80 == 0)) {
    local_8 = 0xffffffff;
    FUN_00610250();
  }
  else {
    local_1c = 3;
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
    local_14 = FUN_005f4070(param_1,param_2,0);
    if (local_14 != 0) {
      local_2c = FUN_005f84d0();
      local_2c = param_1 - local_2c;
      local_28 = FUN_005f84f0();
      local_28 = param_2 - local_28;
      if ((local_2c != DAT_00762104) || (local_28 != DAT_00762100)) {
        DAT_00762104 = local_2c;
        DAT_00762100 = local_28;
        (**(code **)(*DAT_0162ee84 + 0xc))(local_34);
      }
    }
    local_8 = 0xffffffff;
    FUN_00610250();
  }
  ExceptionList = local_10;
  return;
}

