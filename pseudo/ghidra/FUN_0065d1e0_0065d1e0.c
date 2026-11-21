// FUN_0065d1e0  0065d1e0

undefined4 * __fastcall FUN_0065d1e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac7f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0065ba70(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = LoadFaceDialog::vftable;
  FUN_005f83d0(0x30d4f2,0);
  FUN_005f7340(0,0);
  DAT_016306a8 = param_1;
  ExceptionList = local_10;
  return param_1;
}

