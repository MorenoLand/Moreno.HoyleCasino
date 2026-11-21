// FUN_0057ded0  0057ded0

void __fastcall FUN_0057ded0(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a68d2;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = KenoAnimator::vftable;
  local_8 = 0;
  if (param_1[0x79] != 0) {
    (**(code **)(*(int *)param_1[0x79] + 0x70))(uVar2);
    if ((undefined4 *)param_1[0x79] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x79])(1);
    }
    param_1[0x79] = 0;
  }
  if (param_1[0x7e] != 0) {
    (**(code **)(*(int *)param_1[0x7e] + 0x70))();
    if ((undefined4 *)param_1[0x7e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x7e])(1);
    }
    param_1[0x7e] = 0;
  }
  if (param_1[0x7f] != 0) {
    (**(code **)(*(int *)param_1[0x7f] + 0x70))();
    if ((undefined4 *)param_1[0x7f] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x7f])(1);
    }
    param_1[0x7f] = 0;
  }
  if (param_1[0x80] != 0) {
    FUN_0057f660();
    pvVar1 = (void *)param_1[0x80];
    if (pvVar1 != (void *)0x0) {
      FUN_0057f460();
      operator_delete(pvVar1);
    }
    param_1[0x80] = 0;
  }
  for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x65] != 0) {
      (**(code **)(*(int *)param_1[local_14 + 0x65] + 0x70))();
      if ((undefined4 *)param_1[local_14 + 0x65] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x65])(1);
      }
      param_1[local_14 + 0x65] = 0;
    }
  }
  if (param_1[0x61] != 0) {
    (**(code **)(*(int *)param_1[0x61] + 0x70))();
    if ((undefined4 *)param_1[0x61] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x61])(1);
    }
    param_1[0x61] = 0;
  }
  if (param_1[0x62] != 0) {
    (**(code **)(*(int *)param_1[0x62] + 0x70))();
    if ((undefined4 *)param_1[0x62] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x62])(1);
    }
    param_1[0x62] = 0;
  }
  if (param_1[99] != 0) {
    (**(code **)(*(int *)param_1[99] + 0x70))();
    if ((undefined4 *)param_1[99] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[99])(1);
    }
    param_1[99] = 0;
  }
  if (param_1[100] != 0) {
    (**(code **)(*(int *)param_1[100] + 0x70))();
    if ((undefined4 *)param_1[100] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[100])(1);
    }
    param_1[100] = 0;
  }
  if (param_1[0x81] != 0) {
    (**(code **)(*(int *)param_1[0x81] + 0x70))();
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
  FUN_005f5c40();
  ExceptionList = local_10;
  return;
}

