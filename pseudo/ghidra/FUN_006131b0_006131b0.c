// FUN_006131b0  006131b0

undefined4 * __fastcall FUN_006131b0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab048;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062aea0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = VWindow::vftable;
  FUN_0062a870();
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  memset(param_1 + 2,0,0x10);
  memset(param_1 + 6,0,0x10);
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 1;
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  ExceptionList = local_10;
  return param_1;
}

