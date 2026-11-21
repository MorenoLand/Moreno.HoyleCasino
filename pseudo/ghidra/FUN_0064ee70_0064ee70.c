// FUN_0064ee70  0064ee70

void FUN_0064ee70(undefined4 param_1)

{
  void *pvVar1;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac0a7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0163068c == (int *)0x0) {
    pvVar1 = operator_new(0x1ec);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_0063b600();
    }
    local_8 = 0xffffffff;
    DAT_0163068c = local_20;
    (**(code **)(*local_20 + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_0063d610(param_1);
  ExceptionList = local_10;
  return;
}

