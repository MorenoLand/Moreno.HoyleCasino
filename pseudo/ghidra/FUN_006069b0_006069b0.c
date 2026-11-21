// FUN_006069b0  006069b0

undefined4 * __thiscall FUN_006069b0(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aac18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciMotion::vftable;
  param_1[1] = 0;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  FUN_00606bc0(0,0);
  ExceptionList = local_10;
  return param_1;
}

