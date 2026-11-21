// FUN_0066d310  0066d310

undefined4 * __fastcall FUN_0066d310(undefined4 *param_1)

{
  int local_8;
  
  FUN_005eaaf0();
  *param_1 = HighScoresDialog::vftable;
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    param_1[local_8 + 0x5e] = 0;
    param_1[local_8 + 0x68] = 0;
    param_1[local_8 + 0x72] = 0;
  }
  param_1[0x83] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7c] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  return param_1;
}

