// FUN_00542f20  00542f20

void __fastcall FUN_00542f20(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a4e7b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = VideoBlackjackDisplay::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
      if (param_1[local_14 * 6 + local_18 + 0x11] != 0) {
        if ((undefined4 *)param_1[local_14 * 6 + local_18 + 0x11] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)param_1[local_14 * 6 + local_18 + 0x11])(1);
        }
        param_1[local_14 * 6 + local_18 + 0x11] = 0;
      }
    }
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if (param_1[local_14 + 4] != 0) {
      if ((undefined4 *)param_1[local_14 + 4] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 4])(1);
      }
      param_1[local_14 + 4] = 0;
    }
  }
  for (local_14 = 0; local_14 < 9; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x23] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x23] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x23])(1);
      }
      param_1[local_14 + 0x23] = 0;
    }
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if (param_1[local_14 + 1] != 0) {
      if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
      }
      param_1[local_14 + 1] = 0;
    }
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0xe] != 0) {
      pvVar5 = (void *)param_1[local_14 + 0xe];
      if (pvVar5 != (void *)0x0) {
        FUN_005465f0();
        operator_delete(pvVar5);
      }
      param_1[local_14 + 0xe] = 0;
    }
  }
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[7])(1);
  }
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
  }
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
  }
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
  }
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd])(1);
  }
  pvVar5 = (void *)param_1[0x2c];
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    FUN_00546160();
    operator_delete(pvVar5);
  }
  pvVar4 = (void *)param_1[0x2d];
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    FUN_00546160();
    operator_delete(pvVar4);
  }
  if ((undefined4 *)param_1[0x2e] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x2e])(1);
  }
  if ((undefined4 *)param_1[0x2f] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1,uVar3,uVar2,pvVar4,pvVar5);
  ExceptionList = local_10;
  return;
}

