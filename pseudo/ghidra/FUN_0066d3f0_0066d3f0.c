// FUN_0066d3f0  0066d3f0

void __fastcall FUN_0066d3f0(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006acf48;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = HighScoresDialog::vftable;
  local_8 = 0;
  if (param_1[0x83] != 0) {
    if ((undefined4 *)param_1[0x83] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x83])(1,uVar1);
    }
    param_1[0x83] = 0;
  }
  if (param_1[0x7d] != 0) {
    if ((undefined4 *)param_1[0x7d] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x7d])(1);
    }
    param_1[0x7d] = 0;
  }
  if (param_1[0x7f] != 0) {
    if ((undefined4 *)param_1[0x7f] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x7f])(1);
    }
    param_1[0x7f] = 0;
  }
  if (param_1[0x80] != 0) {
    if ((undefined4 *)param_1[0x80] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x80])(1);
    }
    param_1[0x80] = 0;
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x5e] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x5e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x5e])(1);
      }
      param_1[local_14 + 0x5e] = 0;
    }
    if (param_1[local_14 + 0x68] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x68] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x68])(1);
      }
      param_1[local_14 + 0x68] = 0;
    }
    if (param_1[local_14 + 0x72] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x72] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x72])(1);
      }
      param_1[local_14 + 0x72] = 0;
    }
  }
  if (param_1[0x7c] != 0) {
    if ((undefined4 *)param_1[0x7c] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x7c])(1);
    }
    param_1[0x7c] = 0;
  }
  if (param_1[0x7e] != 0) {
    if ((undefined4 *)param_1[0x7e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x7e])(1);
    }
    param_1[0x7e] = 0;
  }
  if (param_1[0x81] != 0) {
    if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x81])(1);
    }
    param_1[0x81] = 0;
  }
  if (param_1[0x82] != 0) {
    if ((undefined4 *)param_1[0x82] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x82])(1);
    }
    param_1[0x82] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005eac00();
  ExceptionList = local_10;
  return;
}

