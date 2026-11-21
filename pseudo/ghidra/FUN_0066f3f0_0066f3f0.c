// FUN_0066f3f0  0066f3f0

undefined4 * __fastcall FUN_0066f3f0(undefined4 *param_1)

{
  FUN_005ec5a0();
  *param_1 = HighScoresTag::vftable;
  strcpy((char *)(param_1 + 0x74),(char *)&PTR_006b27f8);
  param_1[0x8d] = 0xffffffff;
  param_1[0x8e] = 0;
  return param_1;
}

