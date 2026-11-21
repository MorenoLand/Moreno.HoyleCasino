// FUN_00601a80  00601a80

undefined4 * __fastcall FUN_00601a80(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa888;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5f50(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciButton::vftable;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  FUN_00602420();
  *(undefined1 *)(param_1 + 0x6a) = 1;
  *(undefined1 *)((int)param_1 + 0x1a9) = 0;
  *(undefined1 *)((int)param_1 + 0x1aa) = 0;
  *(undefined1 *)((int)param_1 + 0x1ab) = 0;
  param_1[0x72] = 2;
  param_1[0x73] = 2;
  param_1[0x74] = 2;
  param_1[0x75] = 2;
  param_1[0x6b] = 0xffffffff;
  param_1[0x6c] = 0xffffffff;
  param_1[0x76] = 0x30;
  *(undefined1 *)((int)param_1 + 0x1b5) = 0;
  FUN_00602f40(1);
  ExceptionList = local_10;
  return param_1;
}

