// FUN_005f5c40  005f5c40

void __fastcall FUN_005f5c40(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a9f38;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciProp::vftable;
  local_8 = 0;
  if (param_1[1] != 0) {
    FUN_005f8e60(param_1);
  }
  FUN_005f5df0(0);
  FUN_005f5d50(0);
  local_8 = 0xffffffff;
  FUN_005eac00(uVar1);
  ExceptionList = local_10;
  return;
}

