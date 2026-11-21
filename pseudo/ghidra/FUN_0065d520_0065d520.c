// FUN_0065d520  0065d520

undefined4 * __thiscall FUN_0065d520(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac816;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = WhichFaceVersionDialog::vftable;
  FUN_005f83d0(0x30d4f2,0);
  FUN_005f7340(0,0);
  param_1[0x6f] = param_2;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  DAT_016306ac = param_1;
  ExceptionList = local_10;
  return param_1;
}

