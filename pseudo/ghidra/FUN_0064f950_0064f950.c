// FUN_0064f950  0064f950

void FUN_0064f950(undefined1 param_1,undefined4 param_2)

{
  void *pvVar1;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac241;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_016306c4 == (int *)0x0) {
    pvVar1 = operator_new(0x800);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_0066d310();
    }
    local_8 = 0xffffffff;
    DAT_016306c4 = local_20;
    FUN_0066d7f0();
    if (DAT_016306c4 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    DAT_016306c4[1] = *(int *)(DAT_0162ee84 + 0x14);
    (**(code **)(*DAT_016306c4 + 0x88))(0,0);
  }
  FUN_0066e9e0(param_1,param_2);
  ExceptionList = local_10;
  return;
}

