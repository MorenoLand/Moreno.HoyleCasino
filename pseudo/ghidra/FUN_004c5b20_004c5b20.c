// FUN_004c5b20  004c5b20

void __fastcall FUN_004c5b20(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a21b9;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = PokerPlayer::vftable;
  local_8 = 0;
  if (param_1[2] != 0) {
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[2])(1,uVar2);
    }
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[3])(1);
    }
    param_1[3] = 0;
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
  if (param_1[10] != 0) {
    if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[10])(1);
    }
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xb])(1);
    }
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xc])(1);
    }
    param_1[0xc] = 0;
  }
  if (param_1[0xd] != 0) {
    if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xd])(1);
    }
    param_1[0xd] = 0;
  }
  if (param_1[0xe] != 0) {
    if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xe])(1);
    }
    param_1[0xe] = 0;
  }
  if (param_1[0x11] != 0) {
    if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x11])(1);
    }
    param_1[0x11] = 0;
  }
  if (param_1[0xf] != 0) {
    if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xf])(1);
    }
    param_1[0xf] = 0;
  }
  if (param_1[0x10] != 0) {
    if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x10])(1);
    }
    param_1[0x10] = 0;
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x12] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x12] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x12])(1);
      }
      param_1[local_14 + 0x12] = 0;
    }
    if (param_1[local_14 + 0x14] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x14] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x14])(1);
      }
      param_1[local_14 + 0x14] = 0;
    }
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x16] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x16] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x16])(1);
      }
      param_1[local_14 + 0x16] = 0;
    }
  }
  if (param_1[0x10a] != 0) {
    pvVar1 = (void *)param_1[0x10a];
    if (pvVar1 != (void *)0x0) {
      FUN_004c5740();
      operator_delete(pvVar1);
    }
    param_1[0x10a] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

