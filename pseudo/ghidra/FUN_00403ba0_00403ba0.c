// FUN_00403ba0  00403ba0

undefined4 * __fastcall FUN_00403ba0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d714;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = BaccaratDealScript::vftable;
  *(undefined1 *)(param_1 + 9) = 1;
  iVar1 = FUN_00637810(4);
  param_1[10] = iVar1 << 1;
  ExceptionList = local_10;
  return param_1;
}

