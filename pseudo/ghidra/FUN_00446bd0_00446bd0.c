// FUN_00446bd0  00446bd0

void __fastcall FUN_00446bd0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0069eba8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = LetItRideDisplay::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
    }
    if ((undefined4 *)param_1[local_14 + 0x15] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x15])(1);
    }
  }
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 5] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 5])(1);
    }
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x11] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x11])(1);
    }
  }
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13])(1,uVar1);
  }
  if ((undefined4 *)param_1[0x19] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  if ((undefined4 *)param_1[0x1a] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  if ((undefined4 *)param_1[0x1b] == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x1b])(1);
  }
  if ((undefined4 *)param_1[0x14] == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1,uVar5,uVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

