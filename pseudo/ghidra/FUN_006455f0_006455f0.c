// FUN_006455f0  006455f0

void __fastcall FUN_006455f0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006abdeb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Character::vftable;
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
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

