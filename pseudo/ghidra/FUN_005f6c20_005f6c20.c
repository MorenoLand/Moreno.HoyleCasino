// FUN_005f6c20  005f6c20

undefined4 * __fastcall FUN_005f6c20(undefined4 *param_1)

{
  int local_8;
  
  FUN_005f49d0();
  *param_1 = FourSidedRect::vftable;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 0x12] = 0;
  }
  return param_1;
}

