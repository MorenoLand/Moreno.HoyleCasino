// FUN_00606e60  00606e60

undefined4 * __thiscall
FUN_00606e60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aac3b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006069b0(param_2);
  local_8 = 0;
  *param_1 = sciMotionTo::vftable;
  FUN_00606bc0(param_3,param_4);
  *(undefined1 *)((int)param_1 + 0xd) = param_5;
  ExceptionList = local_10;
  return param_1;
}

