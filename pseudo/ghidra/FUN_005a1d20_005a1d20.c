// FUN_005a1d20  005a1d20

void __fastcall FUN_005a1d20(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a7888;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = BigRaiseState::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1,uVar1);
  }
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 2])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

