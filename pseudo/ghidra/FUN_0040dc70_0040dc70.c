// FUN_0040dc70  0040dc70

undefined4 * __fastcall FUN_0040dc70(undefined4 *param_1)

{
  int local_c;
  int local_8;
  
  FUN_005e9e20();
  *param_1 = BlackjackPlayerDisplay::vftable;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 0x16; local_c = local_c + 1) {
      param_1[local_8 * 0x16 + local_c + 10] = 0;
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 2] = 0;
    param_1[local_8 + 6] = 0;
  }
  return param_1;
}

