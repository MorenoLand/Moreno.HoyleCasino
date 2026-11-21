// FUN_005ffbb0  005ffbb0

undefined4 * __fastcall FUN_005ffbb0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa7e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00601a80(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciCheckBox::vftable;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x66] = param_1[0x7c];
  param_1[0x67] = param_1[0x7d];
  param_1[0x68] = param_1[0x7e];
  param_1[0x69] = param_1[0x7f];
  param_1[0x66] = param_1[0x78];
  param_1[0x67] = param_1[0x79];
  param_1[0x68] = param_1[0x7a];
  param_1[0x69] = param_1[0x7b];
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x76] = 0x11;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  FUN_00600010();
  FUN_00600330();
  ExceptionList = local_10;
  return param_1;
}

