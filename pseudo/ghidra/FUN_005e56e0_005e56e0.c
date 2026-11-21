// FUN_005e56e0  005e56e0

undefined4 __thiscall FUN_005e56e0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 local_30;
  undefined4 local_2c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006a989e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_005fb210(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_3 == '\0') {
      pvVar3 = operator_new(0x1c);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_00600a70(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_30);
    }
    else {
      pvVar3 = operator_new(0x1c);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_2c = 0;
      }
      else {
        local_2c = FUN_00600b60(param_1);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_2c);
    }
    *(undefined4 *)(iVar1 + 0x178) = 10;
    uVar2 = 1;
  }
  ExceptionList = local_10;
  return uVar2;
}

