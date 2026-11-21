// FUN_004012b0  004012b0

undefined4 * __fastcall FUN_004012b0(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = BaccaratDisplay::vftable;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    param_1[local_8 + 8] = 0;
  }
  param_1[0x14] = 0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0x17] = 0;
  }
  param_1[0x1a] = 0;
  return param_1;
}

