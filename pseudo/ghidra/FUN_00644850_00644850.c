// FUN_00644850  00644850

undefined4 * __thiscall FUN_00644850(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_8;
  
  FUN_005f5f50();
  *param_1 = StockDisplay::vftable;
  for (local_8 = 0; local_8 < 0x400; local_8 = local_8 + 1) {
    param_1[local_8 + 0x65] = 0;
    param_1[local_8 + 0x465] = 0;
  }
  param_1[100] = param_3;
  return param_1;
}

