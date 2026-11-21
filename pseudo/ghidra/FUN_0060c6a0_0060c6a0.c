// FUN_0060c6a0  0060c6a0

void __fastcall FUN_0060c6a0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aadab;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciList::vftable;
  local_8 = 0;
  FUN_0060ca10(uVar1);
  if (param_1[2] != 0) {
    operator_delete((void *)param_1[3]);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

