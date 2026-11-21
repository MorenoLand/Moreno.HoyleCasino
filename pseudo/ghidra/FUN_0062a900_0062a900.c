// FUN_0062a900  0062a900

void __fastcall FUN_0062a900(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab6eb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = List::vftable;
  local_8 = 0;
  FUN_0062ad70(uVar1);
  if (param_1[4] != 0) {
    operator_delete((void *)param_1[3]);
  }
  local_8 = 0xffffffff;
  FUN_0062aef0();
  ExceptionList = local_10;
  return;
}

