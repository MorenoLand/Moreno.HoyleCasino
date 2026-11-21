// FUN_005dbe50  005dbe50

void FUN_005dbe50(void)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9381;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_007947c0 == (int *)0x0) {
    pvVar3 = operator_new(0x1bc);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_005ceb60();
    }
    local_8 = 0xffffffff;
    DAT_007947c0 = local_20;
    (**(code **)(*local_20 + 0x3c))();
    FUN_005f7320(0,0);
  }
  FUN_005cec40(uVar2);
  cVar1 = FUN_005f88f0();
  if (cVar1 != '\0') {
    FUN_005f85d0();
  }
  ExceptionList = local_10;
  return;
}

