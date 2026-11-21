// FUN_0059d8d0  0059d8d0

undefined4 * __fastcall FUN_0059d8d0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = BigRaiseDealScript::vftable;
  iVar1 = FUN_00637810(4);
  *(bool *)(param_1 + 9) = iVar1 < 2;
  *(undefined1 *)(DAT_007935d0 + 0x118) = 0;
  *(undefined4 *)(DAT_007935d0 + 0x11c) = 2;
  ExceptionList = local_10;
  return param_1;
}

