// FUN_00653690  00653690

void __fastcall FUN_00653690(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ac479;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = StatisticsDialog::vftable;
  local_8 = 0;
  FUN_0063a120(uVar1);
  local_8 = 0xffffffff;
  FUN_005f7260();
  ExceptionList = local_10;
  return;
}

