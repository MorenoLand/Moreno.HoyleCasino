// FUN_006640c0  006640c0

undefined4 * __fastcall FUN_006640c0(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = FaceMakerFace::vftable;
  for (local_8 = 0; local_8 < 0x1b; local_8 = local_8 + 1) {
    param_1[local_8 + 0x17] = 0;
  }
  memset(param_1 + 4,0,0x4c);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 10;
  return param_1;
}

