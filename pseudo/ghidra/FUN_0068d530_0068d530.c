// FUN_0068d530  0068d530

void FUN_0068d530(undefined4 param_1)

{
  uint uStack_dc;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ae120;
  local_10 = ExceptionList;
  uStack_dc = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_dc;
  ExceptionList = &local_10;
  local_20 = &local_33;
  local_28 = &local_32;
  local_30 = &local_31;
  FUN_0068eae0();
  local_8 = 0;
  FUN_0068e9d0(param_1);
  FUN_0068d5bb();
  return;
}

