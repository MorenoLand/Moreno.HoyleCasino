// FUN_0043f430  0043f430

void __fastcall FUN_0043f430(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0069e8ab;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = HorseRacingDisplay::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1,uVar1);
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
    }
    if ((undefined4 *)param_1[local_14 + 8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 8])(1);
    }
    if ((undefined4 *)param_1[local_14 + 0x1c] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x1c])(1);
    }
    if ((undefined4 *)param_1[local_14 + 0x21] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x21])(1);
    }
    if ((undefined4 *)param_1[local_14 + 0x32] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x32])(1);
    }
  }
  for (local_14 = 0; local_14 < 0xf; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0xd] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0xd])(1);
    }
  }
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
  }
  if ((undefined4 *)param_1[0x27] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x27])(1);
  }
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x28])(1);
  }
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x29])(1);
  }
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a])(1);
  }
  if ((undefined4 *)param_1[0x2b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2b])(1);
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x2d] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x2d])(1);
    }
    if ((undefined4 *)param_1[local_14 + 0x37] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x37])(1);
    }
    if ((undefined4 *)param_1[local_14 + 0x3c] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x3c])(1);
    }
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x41] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x41])(1);
    }
  }
  if ((undefined4 *)param_1[0x44] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x44])(1);
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x45] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x45])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

