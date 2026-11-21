// FUN_00401380  00401380

void __fastcall FUN_00401380(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0069d598;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = BaccaratDisplay::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
    }
  }
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1,uVar1);
  }
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[7])(1);
  }
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 8])(1);
    }
  }
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x17] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x17])(1);
    }
  }
  if ((undefined4 *)param_1[0x1a] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1,uVar2);
  ExceptionList = local_10;
  return;
}

