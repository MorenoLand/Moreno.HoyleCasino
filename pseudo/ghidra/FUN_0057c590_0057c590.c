// FUN_0057c590  0057c590

undefined4 * __fastcall FUN_0057c590(undefined4 *param_1)

{
  int local_8;
  
  FUN_005f7670(0,*(undefined4 *)(DAT_015e55e8 + 0x14),0x280,0x1e0);
  *param_1 = CasinoTutorialInfoBox::vftable;
  param_1[0x6d] = 0xffffffff;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    param_1[local_8 + 0x6e] = 0;
  }
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  return param_1;
}

