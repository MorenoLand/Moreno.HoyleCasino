// FUN_0053c3e0  0053c3e0

undefined4 * __fastcall FUN_0053c3e0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4c35;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = ThreeCardPokerDealScript::vftable;
  iVar1 = FUN_00637810(4);
  *(bool *)(param_1 + 9) = iVar1 < 2;
  ExceptionList = local_10;
  return param_1;
}

