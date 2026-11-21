// FUN_005e4410  005e4410

undefined4 * __fastcall FUN_005e4410(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a97a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CasinoDemoNavigationRoom::vftable;
  FUN_005f1ad0(0x311a50);
  ExceptionList = local_10;
  return param_1;
}

