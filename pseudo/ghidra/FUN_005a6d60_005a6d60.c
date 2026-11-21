// FUN_005a6d60  005a6d60

void __fastcall FUN_005a6d60(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a78e8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = RoyalMatchDisplay::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
    }
  }
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    if ((undefined4 *)param_1[local_18 + 6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_18 + 6])(1);
    }
    if ((undefined4 *)param_1[local_18 + 0x12] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_18 + 0x12])(1);
    }
    if ((undefined4 *)param_1[local_18 + 0x16] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_18 + 0x16])(1);
    }
  }
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1,uVar1);
  }
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
  }
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf])(1);
  }
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  if ((undefined4 *)param_1[0x11] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x11])(1);
  }
  if ((undefined4 *)param_1[0xc] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  if ((undefined4 *)param_1[0xd] == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(code *)**(undefined4 **)param_1[0xd])(1);
  }
  if ((undefined4 *)param_1[0xe] == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(code *)**(undefined4 **)param_1[0xe])(1);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1,uVar5,uVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

