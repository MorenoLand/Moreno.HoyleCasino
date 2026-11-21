// FUN_0055fb10  0055fb10

void __fastcall FUN_0055fb10(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a57db;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = VPMultiDisplay::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 2])(1);
    }
    if ((undefined4 *)param_1[local_14 + 7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 7])(1);
    }
    if ((undefined4 *)param_1[local_14 + 0x13] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x13])(1);
    }
  }
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2e])(1,uVar1);
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x18] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x18])(1);
    }
  }
  pvVar5 = (void *)param_1[1];
  if (pvVar5 != (void *)0x0) {
    FUN_00566720();
    operator_delete(pvVar5);
  }
  if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1d])(1);
  }
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1e])(1);
  }
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1f])(1);
  }
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x20])(1);
  }
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x21])(1);
  }
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
  }
  for (local_14 = 0; local_14 < 0xb; local_14 = local_14 + 1) {
    pvVar5 = (void *)param_1[local_14 + 0x23];
    if (pvVar5 != (void *)0x0) {
      FUN_00562b10();
      operator_delete(pvVar5);
    }
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x2f] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x2f])(1);
    }
  }
  if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x32])(1);
  }
  pvVar5 = (void *)param_1[0x33];
  if (pvVar5 != (void *)0x0) {
    FUN_00565630();
    operator_delete(pvVar5);
  }
  if ((undefined4 *)param_1[0x34] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x34])(1);
  }
  pvVar5 = (void *)param_1[0x35];
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    FUN_00565630();
    operator_delete(pvVar5);
  }
  if ((undefined4 *)param_1[0x36] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x36])(1);
  }
  pvVar4 = (void *)param_1[0x37];
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    FUN_00565630();
    operator_delete(pvVar4);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1,pvVar4,uVar3,pvVar5,uVar2);
  ExceptionList = local_10;
  return;
}

