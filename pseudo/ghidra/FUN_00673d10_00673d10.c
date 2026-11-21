// FUN_00673d10  00673d10

undefined4 * __fastcall FUN_00673d10(undefined4 *param_1)

{
  FUN_005f49d0();
  *param_1 = BitmapFeature::vftable;
  param_1[0x12] = 0;
  memset(param_1 + 0x13,0,0x21480);
  return param_1;
}

