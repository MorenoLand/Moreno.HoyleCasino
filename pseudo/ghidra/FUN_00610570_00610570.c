// FUN_00610570  00610570

undefined4 __thiscall FUN_00610570(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_19;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aaf11;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = &local_19;
  FUN_005bbd80(0);
  local_8 = 0;
  FUN_00610650(param_2);
  ExceptionList = local_10;
  return param_1;
}

