// FUN_0051a6b0  0051a6b0

undefined4 * __fastcall FUN_0051a6b0(undefined4 *param_1)

{
  int local_8;
  
  FUN_005f71f0(1,0);
  *param_1 = PokerTournamentWinnerDialog::vftable;
  param_1[0x6f] = 0;
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    param_1[local_8 + 0x70] = 0;
  }
  param_1[0x78] = 0;
  return param_1;
}

