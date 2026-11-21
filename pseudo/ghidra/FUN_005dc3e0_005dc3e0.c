// FUN_005dc3e0  005dc3e0

void FUN_005dc3e0(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a943f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((DAT_00795f95 == '\0') && (DAT_016306a0 == 0)) && (DAT_0163068c == 0)) {
    iVar1 = FUN_005d52e0(DAT_00781870 ^ (uint)&stack0xfffffffc);
    if (*(char *)(iVar1 + 0x2a) == '\x06') {
      FUN_005d70e0(1,1000000);
    }
    else if (DAT_007947d4 == 0) {
      pvVar2 = operator_new(0x204);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_005cfe70();
      }
      local_8 = 0xffffffff;
      DAT_007947d4 = local_24;
      FUN_005cff20(param_1);
      FUN_005f7340(0,0);
      FUN_005d0140();
    }
  }
  ExceptionList = local_10;
  return;
}

