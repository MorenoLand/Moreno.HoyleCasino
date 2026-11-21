// FUN_0042d300  0042d300

undefined4 * __fastcall FUN_0042d300(undefined4 *param_1)

{
  FUN_005f5bf0();
  *param_1 = CrapsHand::vftable;
  param_1[0x61] = 5;
  *(undefined1 *)((int)param_1 + 0x18d) = 0;
  return param_1;
}

