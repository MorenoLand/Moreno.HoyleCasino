// FUN_005cdd90  005cdd90

undefined4 * __fastcall FUN_005cdd90(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8be8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(0,0);
  local_8 = 0;
  *param_1 = GamblerStatsDialog::vftable;
  FUN_005f83d0(0x421,0);
  ExceptionList = local_10;
  return param_1;
}

