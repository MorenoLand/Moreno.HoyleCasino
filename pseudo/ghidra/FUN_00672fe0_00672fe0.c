// FUN_00672fe0  00672fe0

undefined4 * __fastcall FUN_00672fe0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad2c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = SaveRestoreDialog::vftable;
  FUN_005f83d0(0x30d4f5,0);
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  ExceptionList = local_10;
  return param_1;
}

