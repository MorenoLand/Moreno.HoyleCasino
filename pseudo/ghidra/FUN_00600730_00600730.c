// FUN_00600730  00600730

void __fastcall FUN_00600730(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aa85e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciCycleSync::vftable;
  local_8 = 0;
  if (param_1[8] != 0) {
    FUN_006041d0(param_1[8]);
    param_1[8] = 0;
  }
  local_8 = 0xffffffff;
  FUN_006004c0(uVar1);
  ExceptionList = local_10;
  return;
}

