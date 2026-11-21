// FUN_005ec760  005ec760

void __fastcall FUN_005ec760(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a9c7b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciText::vftable;
  local_8 = 0;
  if (param_1[0x17] != 0) {
    operator_delete((void *)param_1[0x17]);
  }
  if (param_1[0x26] != 0) {
    operator_delete((void *)param_1[0x26]);
  }
  if (param_1[0x2b] != 0) {
    operator_delete(*(void **)(param_1[0x2b] + 4));
    operator_delete((void *)param_1[0x2b]);
  }
  if (param_1[0x2c] != 0) {
    FUN_006041d0(param_1[0x2c]);
    param_1[0x2c] = 0;
  }
  if (param_1[0x2f] != 0) {
    Ordinal_66(param_1[0x2f],uVar1);
    param_1[0x2f] = 0;
  }
  if (param_1[0x2e] != 0) {
    FUN_006041d0(param_1[0x2e]);
    param_1[0x2e] = 0;
  }
  if (param_1[0x2d] != 0) {
    Ordinal_67(param_1[0x2d]);
    param_1[0x2d] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005f61b0();
  ExceptionList = local_10;
  return;
}

