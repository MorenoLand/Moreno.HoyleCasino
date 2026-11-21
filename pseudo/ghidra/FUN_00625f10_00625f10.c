// FUN_00625f10  00625f10

undefined4 * __fastcall FUN_00625f10(undefined4 *param_1)

{
  FUN_005f49d0();
  *param_1 = sciGroupBox::vftable;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x12) = DAT_0075f494;
  *(undefined1 *)((int)param_1 + 0x49) = DAT_0075f495;
  *(undefined1 *)((int)param_1 + 0x4a) = DAT_0075f496;
  *(undefined1 *)((int)param_1 + 0x4b) = (undefined1)DAT_0075f498;
  *(undefined1 *)(param_1 + 0x13) = DAT_0075f498._1_1_;
  *(undefined1 *)((int)param_1 + 0x4d) = DAT_0075f49a;
  *(undefined1 *)((int)param_1 + 0x4e) = (undefined1)DAT_0075f49c;
  *(undefined1 *)((int)param_1 + 0x4f) = DAT_0075f49c._1_1_;
  *(undefined1 *)(param_1 + 0x14) = DAT_0075f49e;
  return param_1;
}

