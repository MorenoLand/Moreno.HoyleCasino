// FUN_00525d20  00525d20

undefined4 * __fastcall FUN_00525d20(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a40d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = RouletteRoom::vftable;
  FUN_005f1ad0(0x1adbe);
  DAT_00793370 = param_1;
  DAT_00793374 = 0;
  DAT_00793378 = 0;
  DAT_0079337c = 0;
  DAT_00793380 = 0;
  ExceptionList = local_10;
  return param_1;
}

