// FUN_00672a50  00672a50

undefined4 * __fastcall FUN_00672a50(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad29b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = LegendDialog::vftable;
  param_1[0x6f] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  FUN_005f83d0(0x36ee81,0);
  FUN_005f7340(0,0);
  ExceptionList = local_10;
  return param_1;
}

