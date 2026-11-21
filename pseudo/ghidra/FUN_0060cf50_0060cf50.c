// FUN_0060cf50  0060cf50

undefined4 * __fastcall FUN_0060cf50(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aadd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006131b0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = Window::vftable;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  param_1[0x23] = 0;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  param_1[0x2f] = 0;
  FUN_00614030(&DAT_00795738);
  param_1[0x30] = 0;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  ExceptionList = local_10;
  return param_1;
}

