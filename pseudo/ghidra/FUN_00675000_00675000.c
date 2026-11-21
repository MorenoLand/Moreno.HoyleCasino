// FUN_00675000  00675000

void __fastcall FUN_00675000(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006ad502;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = FMResourceManager::vftable;
  local_8 = 10;
  FUN_00676430(uVar1);
  local_8._0_1_ = 9;
  FUN_00676430();
  local_8._0_1_ = 8;
  FUN_00676430();
  local_8._0_1_ = 7;
  FUN_00676430();
  local_8._0_1_ = 6;
  FUN_00676430();
  local_8._0_1_ = 5;
  FUN_00676430();
  local_8._0_1_ = 4;
  FUN_00676430();
  local_8._0_1_ = 3;
  FUN_00676430();
  local_8._0_1_ = 2;
  FUN_00676430();
  local_8._0_1_ = 1;
  FUN_00676430();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00676430();
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

