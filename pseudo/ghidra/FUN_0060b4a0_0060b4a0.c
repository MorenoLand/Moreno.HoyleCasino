// FUN_0060b4a0  0060b4a0

undefined4 * __fastcall FUN_0060b4a0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aacb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005ec5a0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciEditBox::vftable;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x74) = 1;
  FUN_005f5300(1000);
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x7b] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0x3c;
  *(undefined1 *)((int)param_1 + 0x1f9) = 0x78;
  *(undefined1 *)((int)param_1 + 0x1fa) = 200;
  ExceptionList = local_10;
  return param_1;
}

