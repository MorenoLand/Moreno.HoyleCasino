// FUN_006535f0  006535f0

undefined4 * __fastcall FUN_006535f0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac456;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = StatisticsDialog::vftable;
  FUN_0063a0c0(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_005f83d0(0x30d4d7,0);
  param_1[0x15b] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 1;
  param_1[0x15c] = 0;
  ExceptionList = local_10;
  return param_1;
}

