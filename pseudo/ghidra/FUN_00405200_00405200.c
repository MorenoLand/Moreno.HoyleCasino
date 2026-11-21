// FUN_00405200  00405200

undefined4 * __fastcall FUN_00405200(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d768;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = BaccaratRoom::vftable;
  FUN_005f1ad0(0x311280);
  DAT_007902f0 = 0;
  DAT_007902f4 = 0;
  DAT_007902f8 = 0;
  DAT_007902fc = 0;
  DAT_007902ec = param_1;
  param_1[0x20] = 0;
  ExceptionList = local_10;
  return param_1;
}

