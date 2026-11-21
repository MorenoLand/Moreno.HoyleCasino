// FUN_00519d40  00519d40

void FUN_00519d40(undefined1 param_1)

{
  uint uVar1;
  void *pvVar2;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3d1b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0079315c == (int *)0x0) {
    pvVar2 = operator_new(0x200);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_0051a020();
    }
    local_8 = 0xffffffff;
    DAT_0079315c = local_20;
    *(undefined1 *)(local_20 + 0x7f) = param_1;
    (**(code **)(*DAT_0079315c + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005f85d0(uVar1);
  ExceptionList = local_10;
  return;
}

