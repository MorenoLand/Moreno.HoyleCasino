// FUN_00546da0  00546da0

undefined4 * __fastcall FUN_00546da0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a517a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = VideoBlackjackDealerShowHoleCardScript::vftable;
  iVar1 = FUN_00637810(4);
  param_1[8] = iVar1 * 3;
  ExceptionList = local_10;
  return param_1;
}

