// FUN_00656540  00656540

void __fastcall FUN_00656540(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006ac633;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = FaceMakerDialog::vftable;
  local_8 = 2;
  if (param_1[0x182] != 0) {
    FUN_00606830(uVar1);
    if ((undefined4 *)param_1[0x182] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x182])(1);
    }
    param_1[0x182] = 0;
  }
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x183] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x183] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x183])(1);
      }
      param_1[local_14 + 0x183] = 0;
    }
  }
  if ((param_1[399] != 0) && ((undefined4 *)param_1[399] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[399])(1);
  }
  if (param_1[0x76] != 0) {
    if ((undefined4 *)param_1[0x76] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x76])(1);
    }
    param_1[0x76] = 0;
  }
  local_8._0_1_ = 1;
  FUN_005ec760();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_005eac00();
  local_8 = 0xffffffff;
  FUN_005f7260();
  ExceptionList = local_10;
  return;
}

