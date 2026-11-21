// FUN_00671200  00671200

void __fastcall FUN_00671200(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ad123;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = RewardsTriggerTextBox::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x5e] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x5e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x5e])(1);
      }
      param_1[local_14 + 0x5e] = 0;
    }
  }
  local_8 = 0xffffffff;
  FUN_005eac00(uVar1);
  ExceptionList = local_10;
  return;
}

