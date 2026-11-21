// FUN_00677690  00677690

undefined4 * __fastcall FUN_00677690(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad6c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = CardsDialog::vftable;
  FUN_005f83d0(0x30d4f6,0);
  param_1[0x6f] = 0;
  ExceptionList = local_10;
  return param_1;
}

