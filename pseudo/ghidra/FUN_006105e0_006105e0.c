// FUN_006105e0  006105e0

undefined4 __thiscall FUN_006105e0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_19;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aaf37;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = &local_19;
  FUN_005bbd80(0);
  local_8 = 0;
  FUN_006106f0(param_2);
  ExceptionList = local_10;
  return param_1;
}

