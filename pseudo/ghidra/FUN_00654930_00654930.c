// FUN_00654930  00654930

undefined4 * __fastcall FUN_00654930(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac538;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = EnvironmentDialog::vftable;
  FUN_005f83d0(0x30d4d7,0);
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 1;
  ExceptionList = local_10;
  return param_1;
}

