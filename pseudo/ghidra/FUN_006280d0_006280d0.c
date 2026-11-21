// FUN_006280d0  006280d0

undefined4 * __fastcall FUN_006280d0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab513;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00614810(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciListBox::vftable;
  FUN_0060c5f0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0060c5f0();
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 5;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0xb5) = 0;
  *(undefined1 *)((int)param_1 + 0xb6) = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  ExceptionList = local_10;
  return param_1;
}

