// FUN_005db7d0  005db7d0

void FUN_005db7d0(undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a92c3;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_007947ac == (int *)0x0) {
    pvVar2 = operator_new(0x1bc);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_005cdad0();
    }
    local_8 = 0xffffffff;
    DAT_007947ac = local_20;
    (**(code **)(*local_20 + 0x3c))();
    FUN_005f7340(CONCAT22(extraout_var_00,param_1),CONCAT22(extraout_var,param_2));
  }
  FUN_005f85d0(uVar1);
  ExceptionList = local_10;
  return;
}

