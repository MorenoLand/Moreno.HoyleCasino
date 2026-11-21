// FUN_00552840  00552840

void __fastcall FUN_00552840(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a53bc;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = VideoPokerDisplay::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
    }
    if ((undefined4 *)param_1[local_14 + 6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 6])(1);
    }
    if ((param_1[local_14 + 0x13] != 0) &&
       ((undefined4 *)param_1[local_14 + 0x13] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x13])(1);
    }
  }
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1,uVar1);
  }
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
  }
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1c])(1);
  }
  if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1d])(1);
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x1e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x1e])(1);
    }
  }
  if ((param_1[0x21] != 0) && ((undefined4 *)param_1[0x21] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x21])(1);
  }
  if ((param_1[0x22] != 0) && ((undefined4 *)param_1[0x22] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
  }
  if ((param_1[0x23] != 0) && ((undefined4 *)param_1[0x23] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x23])(1);
  }
  if ((param_1[0x24] != 0) && ((undefined4 *)param_1[0x24] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x24])(1);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

