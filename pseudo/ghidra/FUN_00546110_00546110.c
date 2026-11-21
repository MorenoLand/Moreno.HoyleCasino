// FUN_00546110  00546110

undefined4 * __fastcall FUN_00546110(undefined4 *param_1)

{
  int local_8;
  
  *param_1 = 0;
  param_1[0xf] = 0;
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
  }
  return param_1;
}

