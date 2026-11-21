// FUN_00521ce0  00521ce0

void __fastcall FUN_00521ce0(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a3ef6;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = RouletteDisplay::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1,uVar1);
  }
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0xc1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0xc1])(1);
    }
  }
  for (local_14 = 0; local_14 < 0x1a; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 6])(1);
    }
  }
  for (local_14 = 0; local_14 < 0xa1; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x20] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x20])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

