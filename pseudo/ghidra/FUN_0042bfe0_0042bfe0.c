// FUN_0042bfe0  0042bfe0

void __fastcall FUN_0042bfe0(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0069e542;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CrapsBetArea::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[0x2b9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2b9])(1,uVar1);
  }
  if ((undefined4 *)param_1[0x2ba] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2ba])(1);
  }
  if ((undefined4 *)param_1[0x2b8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2b8])(1);
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 699] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 699])(1);
    }
    if ((undefined4 *)param_1[local_14 + 0x2bf] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x2bf])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_005cc230();
  ExceptionList = local_10;
  return;
}

