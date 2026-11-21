// FUN_00459860  00459860

undefined4 * __thiscall FUN_00459860(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f0c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00643ce0(param_2,param_3);
  local_8 = 0;
  *param_1 = PaiGowCardDisplay::vftable;
  *(undefined1 *)((int)param_1 + 10) = 0;
  FUN_005eb700(1);
  ExceptionList = local_10;
  return param_1;
}

