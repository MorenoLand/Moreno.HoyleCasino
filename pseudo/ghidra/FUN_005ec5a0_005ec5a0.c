// FUN_005ec5a0  005ec5a0

undefined4 * __fastcall FUN_005ec5a0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9c58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f6130(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciText::vftable;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0;
  memset(param_1 + 0x23,0,0xc);
  param_1[0x26] = 0;
  param_1[0x17] = 0;
  param_1[0x21] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  *(undefined1 *)((int)param_1 + 0x8a) = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0xff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  FUN_005ef310(5);
  *(undefined1 *)((int)param_1 + 0x9f) = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0xa5) = 0;
  param_1[0x2b] = 0;
  FUN_005f0bb0();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  ExceptionList = local_10;
  return param_1;
}

