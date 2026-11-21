// FUN_0064ef70  0064ef70

void FUN_0064ef70(undefined1 param_1)

{
  uint uVar1;
  void *pvVar2;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac0cd;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_016306d0 == 0) {
    pvVar2 = operator_new(0x1c8);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00672fe0();
    }
    local_8 = 0xffffffff;
    DAT_016306d0 = local_20;
    FUN_00673130(param_1);
    FUN_005f7340(0,0);
  }
  FUN_006738e0(uVar1);
  ExceptionList = local_10;
  return;
}

