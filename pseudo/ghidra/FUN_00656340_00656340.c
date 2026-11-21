// FUN_00656340  00656340

undefined4 * __thiscall FUN_00656340(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac5f4;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = FaceMakerDialog::vftable;
  FUN_005eaaf0(uVar1);
  local_8._0_1_ = 1;
  FUN_005ec5a0();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_005f83d0(0x1e8491,0);
  *(undefined1 *)(param_1 + 0x6e) = 1;
  param_1[399] = param_2;
  if (param_3 == (char *)0x0) {
    strcpy((char *)(param_1 + 0x6f),(char *)&PTR_006b27f8);
  }
  else {
    strcpy((char *)(param_1 + 0x6f),param_3);
  }
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    param_1[local_14 + 0xa1] = 0;
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    param_1[local_14 + 0xa3] = 0;
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    param_1[local_14 + 0x105] = 0;
  }
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x17f] = 0;
  param_1[0x182] = 0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    param_1[local_14 + 0x183] = 0;
  }
  ExceptionList = local_10;
  return param_1;
}

