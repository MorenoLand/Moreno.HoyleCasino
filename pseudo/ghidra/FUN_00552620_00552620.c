// FUN_00552620  00552620

undefined4 FUN_00552620(void)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_30;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5396;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f14)) {
  case 0:
  case 4:
  case 7:
  case 10:
    pvVar2 = operator_new(0x9c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
      local_30 = local_2c;
    }
    else {
      local_30 = FUN_00552720();
    }
    break;
  default:
    pvVar2 = operator_new(0xbc);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_00552c60(uVar1);
    }
  }
  ExceptionList = local_10;
  return local_30;
}

