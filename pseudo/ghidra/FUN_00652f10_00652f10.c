// FUN_00652f10  00652f10

void __fastcall FUN_00652f10(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ac420;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = TutorialButton::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((param_1[local_14 + 0x78] != 0) &&
       ((undefined4 *)param_1[local_14 + 0x78] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x78])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_00601ba0(uVar1);
  ExceptionList = local_10;
  return;
}

