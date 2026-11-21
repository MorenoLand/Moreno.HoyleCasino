// FUN_00447e90  00447e90

void __fastcall FUN_00447e90(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0069ec67;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = LetItRidePlayerDisplay::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 2])(1);
    }
  }
  if ((undefined4 *)param_1[7] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[7])(1,uVar1);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1,uVar2);
  ExceptionList = local_10;
  return;
}

