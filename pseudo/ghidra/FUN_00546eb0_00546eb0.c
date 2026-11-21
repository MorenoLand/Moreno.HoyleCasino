// FUN_00546eb0  00546eb0

undefined4 * __fastcall FUN_00546eb0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a519d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = VideoBlackjackSplitScript::vftable;
  iVar1 = FUN_00637810(4);
  param_1[8] = iVar1 << 1;
  ExceptionList = local_10;
  return param_1;
}

