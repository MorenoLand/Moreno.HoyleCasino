// FUN_0064ec80  0064ec80

void FUN_0064ec80(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  uint uVar1;
  void *pvVar2;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac05b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_016306b0 == (int *)0x0) {
    pvVar2 = operator_new(0x1ec);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_0065dbd0(param_1,param_2,param_3,param_4,param_5);
    }
    local_8 = 0xffffffff;
    DAT_016306b0 = local_20;
    (**(code **)(*local_20 + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_0065e770(uVar1);
  ExceptionList = local_10;
  return;
}

