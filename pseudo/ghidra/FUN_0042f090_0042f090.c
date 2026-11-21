// FUN_0042f090  0042f090

undefined4 * __fastcall FUN_0042f090(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e698;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CrapsGame::vftable;
  FUN_0057ae30();
  ExceptionList = local_10;
  return param_1;
}

