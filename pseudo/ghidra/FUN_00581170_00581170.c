// FUN_00581170  00581170

void __fastcall FUN_00581170(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a6aa4;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = KenoTicketHand::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x10c8] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x10c8] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x10c8])(1);
      }
      param_1[local_14 + 0x10c8] = 0;
    }
  }
  if (param_1[0x1020] != 0) {
    if ((undefined4 *)param_1[0x1020] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1020])(1,uVar1);
    }
    param_1[0x1020] = 0;
  }
  if (param_1[0x1021] != 0) {
    if ((undefined4 *)param_1[0x1021] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1021])(1);
    }
    param_1[0x1021] = 0;
  }
  if (param_1[0x1022] != 0) {
    if ((undefined4 *)param_1[0x1022] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1022])(1);
    }
    param_1[0x1022] = 0;
  }
  if (param_1[0x1023] != 0) {
    if ((undefined4 *)param_1[0x1023] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1023])(1);
    }
    param_1[0x1023] = 0;
  }
  if (param_1[0x1024] != 0) {
    if ((undefined4 *)param_1[0x1024] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1024])(1);
    }
    param_1[0x1024] = 0;
  }
  if (param_1[0x1025] != 0) {
    if ((undefined4 *)param_1[0x1025] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1025])(1);
    }
    param_1[0x1025] = 0;
  }
  if (param_1[0x10c6] != 0) {
    if ((undefined4 *)param_1[0x10c6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x10c6])(1);
    }
    param_1[0x10c6] = 0;
  }
  if (param_1[0x10c7] != 0) {
    if ((undefined4 *)param_1[0x10c7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x10c7])(1);
    }
    param_1[0x10c7] = 0;
  }
  for (local_14 = 0; local_14 < 0x50; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x1026] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x1026] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x1026])(1);
      }
      param_1[local_14 + 0x1026] = 0;
    }
    if (param_1[local_14 + 0x1076] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x1076] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x1076])(1);
      }
      param_1[local_14 + 0x1076] = 0;
    }
  }
  local_8 = 0xffffffff;
  FUN_005eac00();
  ExceptionList = local_10;
  return;
}

