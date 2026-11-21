// FUN_00434150  00434150

void __fastcall FUN_00434150(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0069e7d8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CrapsState::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 0x4c; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1);
  ExceptionList = local_10;
  return;
}

