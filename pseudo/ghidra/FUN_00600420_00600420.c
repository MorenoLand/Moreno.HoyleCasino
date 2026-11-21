// FUN_00600420  00600420

undefined4 * __thiscall FUN_00600420(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa818;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciCycle::vftable;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[5] = 0;
  param_1[3] = 0;
  uVar1 = FUN_005f3e50();
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  ExceptionList = local_10;
  return param_1;
}

