// FUN_005e61f0  005e61f0

void FUN_005e61f0(void)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a992d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d8230(DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f9ce0(0,0x311b18,0x311b18,0,0,1,0,0xff,0);
  FUN_005f9ce0(0,0x311b19,0x311b19,0,0,1000,0,0xff,0);
  FUN_005f9de0(0,0x311b1a,0x311b1a,0,0,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0
              );
  FUN_005f9de0(0,0x311b1b,0x311b1b,0,0,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0
              );
  pvVar1 = operator_new(0x24);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_005e6420();
  }
  local_8 = 0xffffffff;
  FUN_005f1b70(local_20);
  ExceptionList = local_10;
  return;
}

