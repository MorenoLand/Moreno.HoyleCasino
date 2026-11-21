// FUN_005d6980  005d6980

void __thiscall FUN_005d6980(int param_1,int *param_2)

{
  char cVar1;
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a90b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(param_1 + 0x49c) == 0) ||
     (cVar1 = FUN_005f54c0(DAT_00781870 ^ (uint)&stack0xfffffffc), cVar1 != '\0')) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x1c))(0);
    }
  }
  else {
    local_20 = operator_new(0x20);
    local_8 = 0;
    if (local_20 == (undefined4 *)0x0) {
      local_20 = (undefined4 *)0x0;
    }
    else {
      FUN_006010a0(param_2);
      *local_20 = CasinoHideNetPlaqueCycle::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_20);
  }
  ExceptionList = local_10;
  return;
}

