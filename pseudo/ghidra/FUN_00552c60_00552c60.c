// FUN_00552c60  00552c60

undefined4 * __fastcall FUN_00552c60(undefined4 *param_1)

{
  int local_8;
  
  FUN_00552720();
  *param_1 = VideoPokerDisplayLegacy::vftable;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 0x27] = 0;
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  return param_1;
}

