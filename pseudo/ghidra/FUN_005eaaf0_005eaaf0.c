// FUN_005eaaf0  005eaaf0

undefined4 * __fastcall FUN_005eaaf0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9c08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f49d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciView::vftable;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x59] = 0;
  param_1[0x57] = 0;
  param_1[0x5d] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0xff;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  FUN_005eb700(0);
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)((int)param_1 + 0x16e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x16f) = 0;
  param_1[0x5c] = 4;
  param_1[0x12] = *(undefined4 *)(DAT_007960d8 + 0x18);
  ExceptionList = local_10;
  return param_1;
}

