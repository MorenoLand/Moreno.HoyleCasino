// FUN_005dca80  005dca80

undefined4 FUN_005dca80(void)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a94db;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x4f84);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = FUN_005dcb80(uVar1);
  }
  DAT_007947e0 = local_1c;
  ExceptionList = local_10;
  return local_1c;
}

