// FUN_0062e2d0  0062e2d0

void __fastcall FUN_0062e2d0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab79b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Bitmap::vftable;
  local_8 = 0;
  operator_delete((void *)param_1[0x102]);
  local_8 = 0xffffffff;
  FUN_0062aef0(uVar1);
  ExceptionList = local_10;
  return;
}

