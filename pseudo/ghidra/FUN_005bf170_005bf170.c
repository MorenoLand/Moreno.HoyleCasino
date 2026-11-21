// FUN_005bf170  005bf170

undefined4 FUN_005bf170(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a82ab;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  if ((0x3158d0 < param_1) && (param_1 < 0x3158d6)) {
    pvVar2 = operator_new(0x2c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_005bf340(uVar1);
    }
    local_14 = local_24;
  }
  ExceptionList = local_10;
  return local_14;
}

