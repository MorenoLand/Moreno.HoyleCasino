// FUN_005e44a0  005e44a0

void FUN_005e44a0(void)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a981b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  pvVar1 = operator_new(0x1e8);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_5c = 0;
  }
  else {
    local_5c = FUN_00603120(0x311a50,0x311a51,0x311a51);
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_5c,0x311a51,0x311a51,0,0,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  pvVar1 = operator_new(0x1e8);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_00603120(0x311a50,0x311a52,0x311a52);
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_60,0x311a52,0x311a52,0,0,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  pvVar1 = operator_new(0x1e8);
  local_8 = 2;
  if (pvVar1 == (void *)0x0) {
    local_64 = 0;
  }
  else {
    local_64 = FUN_00603120(0x311a50,0x311a53,0x311a53);
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_64,0x311a53,0x311a53,0,0,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  pvVar1 = operator_new(0x1e8);
  local_8 = 3;
  if (pvVar1 == (void *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_00603120(0x311a50,0x311a54,0x311a54);
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_68,0x311a54,0x311a54,0,0,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  pvVar1 = operator_new(0x1e8);
  local_8 = 4;
  if (pvVar1 == (void *)0x0) {
    local_6c = 0;
  }
  else {
    local_6c = FUN_00603120(0x311a50,0x311a54,0x311a54);
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_6c,0x311a55,0x311a55,0,0,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  piVar2 = (int *)FUN_005f9ce0(0,0x311a58,0x311a57,0,0,3,0,0xff,0);
  uVar3 = FUN_005eb240();
  uVar3 = FUN_0062fc30(0,uVar3);
  (**(code **)(*piVar2 + 0xb0))(uVar3);
  piVar2 = (int *)FUN_005f9ce0(0,0x311a59,0x311a57,0,0,2,0,0xff,0);
  (**(code **)(*piVar2 + 0x70))();
  pvVar1 = operator_new(0x1e8);
  local_8 = 5;
  if (pvVar1 == (void *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_00603120(0x311a50,0x311a54,0x311a54);
  }
  local_8 = 0xffffffff;
  FUN_005f9de0(local_70,0x311a56,0x311a56,0,0,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  if (DAT_00794908 == '\0') {
    DAT_00794908 = '\x01';
    pvVar1 = operator_new(0x20);
    local_8 = 6;
    if (pvVar1 == (void *)0x0) {
      local_74 = 0;
    }
    else {
      local_74 = FUN_005e4a00();
    }
    local_8 = 0xffffffff;
    FUN_005f1b70(local_74);
  }
  else {
    pvVar1 = operator_new(0x20);
    local_8 = 7;
    if (pvVar1 == (void *)0x0) {
      local_78 = 0;
    }
    else {
      local_78 = FUN_005e5840();
    }
    local_8 = 0xffffffff;
    FUN_005f1b70(local_78);
  }
  ExceptionList = local_10;
  return;
}

