// FUN_0051cad0  0051cad0

undefined4 * __fastcall FUN_0051cad0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3d9c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(0,0);
  local_8 = 0;
  *param_1 = PokerTournamentStatusDialog::vftable;
  FUN_005f83d0(0x30e7f9,0);
  ExceptionList = local_10;
  return param_1;
}

