// FUN_005a8f40  005a8f40

undefined4 * __fastcall FUN_005a8f40(undefined4 *param_1)

{
  int local_c;
  int local_8;
  
  FUN_005cc1d0();
  *param_1 = RoyalMatchBetArea::vftable;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 0x1e; local_c = local_c + 1) {
      param_1[local_8 * 0x1e + local_c + 0x2b8] = 0;
    }
  }
  return param_1;
}

