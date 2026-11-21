// FUN_005b30a0  005b30a0

void __fastcall FUN_005b30a0(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a7e4b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = RoyalMatchState::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[0x15f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x15f])(1,uVar1);
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x160] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x160])(1);
    }
    if ((undefined4 *)param_1[local_14 + 0x18d] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x18d])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

