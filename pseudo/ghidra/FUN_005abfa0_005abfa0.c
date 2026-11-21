// FUN_005abfa0  005abfa0

undefined4 * __fastcall FUN_005abfa0(undefined4 *param_1)

{
  int local_10;
  int local_c;
  int local_8;
  
  FUN_005e9e20();
  *param_1 = RoyalMatchPlayerDisplay::vftable;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 0x16; local_c = local_c + 1) {
      param_1[local_8 * 0x16 + local_c + 10] = 0;
    }
  }
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    param_1[local_10 + 2] = 0;
    param_1[local_10 + 6] = 0;
  }
  return param_1;
}

