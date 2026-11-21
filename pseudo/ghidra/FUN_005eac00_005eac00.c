// FUN_005eac00  005eac00

void __fastcall FUN_005eac00(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a9c2b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciView::vftable;
  local_8 = 0;
  FUN_005eac80(uVar1);
  if (param_1[0x5d] != 0) {
    FUN_006041d0(param_1[0x5d]);
  }
  local_8 = 0xffffffff;
  FUN_005f4ad0();
  ExceptionList = local_10;
  return;
}

