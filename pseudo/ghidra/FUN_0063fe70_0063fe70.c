// FUN_0063fe70  0063fe70

undefined4 * __thiscall FUN_0063fe70(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abcb3;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = AIBiographyDialog::vftable;
  FUN_0063a0c0(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_005f83d0(0x30d4f2,0);
  param_1[0x15a] = param_2;
  ExceptionList = local_10;
  return param_1;
}

