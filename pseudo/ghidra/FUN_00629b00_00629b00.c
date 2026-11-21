// FUN_00629b00  00629b00

void __fastcall FUN_00629b00(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab607;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciListBoxItem::vftable;
  local_8 = 0;
  if (param_1[1] != 0) {
    operator_delete((void *)param_1[1]);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1);
  ExceptionList = local_10;
  return;
}

