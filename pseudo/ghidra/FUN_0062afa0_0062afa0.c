// FUN_0062afa0  0062afa0

void __fastcall FUN_0062afa0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab718;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = PRF::vftable;
  local_8 = 0;
  if (param_1[3] != 0) {
    fclose((FILE *)param_1[3]);
  }
  if (param_1[4] != 0) {
    operator_delete((void *)param_1[4]);
  }
  if (param_1[5] != 0) {
    operator_delete((void *)param_1[5]);
  }
  local_8 = 0xffffffff;
  FUN_0062aef0(uVar1);
  ExceptionList = local_10;
  return;
}

