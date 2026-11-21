// FUN_00431c70  00431c70

undefined4 * __fastcall FUN_00431c70(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e6c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CrapsRoom::vftable;
  FUN_005f1ad0(0xfa5);
  DAT_007906d0 = param_1;
  DAT_007906d4 = 0;
  DAT_007906d8 = 0;
  DAT_007906dc = 0;
  DAT_007906e0 = 0;
  ExceptionList = local_10;
  return param_1;
}

