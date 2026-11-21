// FUN_005c10b0  005c10b0

void FUN_005c10b0(void)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a84e2;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x1dc);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = FUN_00601a80(uVar1);
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_50,0x5e,0x31592e,0,0,1000,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  pvVar2 = operator_new(0x1dc);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_54 = 0;
  }
  else {
    local_54 = FUN_00601a80(uVar1);
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_54,0x5f,0x31592f,0,0,1000,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  pvVar2 = operator_new(0x1dc);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = FUN_00601a80();
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_58,0x60,0x315930,0,0,1000,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  pvVar2 = operator_new(0x1dc);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_5c = 0;
  }
  else {
    local_5c = FUN_00601a80();
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_5c,0x61,0x315931,0,0,1000,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  pvVar2 = operator_new(0x1dc);
  local_8 = 4;
  if (pvVar2 == (void *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_00601a80();
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_60,0x54,0x315924,0,0,1000,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  pvVar2 = operator_new(0x1dc);
  local_8 = 5;
  if (pvVar2 == (void *)0x0) {
    local_64 = 0;
  }
  else {
    local_64 = FUN_00601a80();
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_64,0x55,0x315925,0,0,1000,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  pvVar2 = operator_new(0x1dc);
  local_8 = 6;
  if (pvVar2 == (void *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_00601a80();
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_68,0x62,0x315932,0,0,1000,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  ExceptionList = local_10;
  return;
}

