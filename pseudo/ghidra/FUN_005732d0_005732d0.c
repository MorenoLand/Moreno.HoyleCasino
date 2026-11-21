// FUN_005732d0  005732d0

void __fastcall FUN_005732d0(undefined4 *param_1)

{
  uint uVar1;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a61bb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = SultanSlot::vftable;
  local_8 = 0;
  if (param_1[2] != 0) {
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[2])(1,uVar1);
    }
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[3])(1);
    }
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[4])(1);
    }
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[5])(1);
    }
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[6])(1);
    }
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[7])(1);
    }
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])(1);
    }
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[9])(1);
    }
    param_1[9] = 0;
  }
  if (param_1[0xd] != 0) {
    if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xd])(1);
    }
    param_1[0xd] = 0;
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if (param_1[local_14 + 10] != 0) {
      if ((undefined4 *)param_1[local_14 + 10] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 10])(1);
      }
      param_1[local_14 + 10] = 0;
    }
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x11] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x11] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x11])(1);
      }
      param_1[local_14 + 0x11] = 0;
    }
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0xe] != 0) {
      if ((undefined4 *)param_1[local_14 + 0xe] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0xe])(1);
      }
      param_1[local_14 + 0xe] = 0;
    }
  }
  if (param_1[0x16] != 0) {
    if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x16])(1);
    }
    param_1[0x16] = 0;
  }
  if (param_1[0x17] != 0) {
    if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x17])(1);
    }
    param_1[0x17] = 0;
  }
  if (param_1[0x18] != 0) {
    if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x18])(1);
    }
    param_1[0x18] = 0;
  }
  if (param_1[0x19] != 0) {
    if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x19])(1);
    }
    param_1[0x19] = 0;
  }
  if (param_1[1] != 0) {
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
    }
    param_1[1] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

