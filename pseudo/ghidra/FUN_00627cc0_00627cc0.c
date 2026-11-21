// FUN_00627cc0  00627cc0

void __fastcall FUN_00627cc0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab4db;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciStroke::vftable;
  local_8 = 0;
  if (param_1[0x18] != 0) {
    operator_delete((void *)param_1[0x18]);
  }
  local_8 = 0xffffffff;
  FID_conflict__ctype<char>(uVar1);
  ExceptionList = local_10;
  return;
}

