// FUN_005b9020  005b9020

undefined4 * __fastcall FUN_005b9020(undefined4 *param_1)

{
  undefined1 local_19;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7eb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = InfoScreenController::vftable;
  local_18 = &local_19;
  FUN_005bbce0(0);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  ExceptionList = local_10;
  return param_1;
}

