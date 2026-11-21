// FUN_005ac050  005ac050

void __fastcall FUN_005ac050(undefined4 *param_1)

{
  uint uVar1;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a7c25;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = RoyalMatchPlayerDisplay::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 0x16; local_18 = local_18 + 1) {
      if ((undefined4 *)param_1[local_14 * 0x16 + local_18 + 10] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 * 0x16 + local_18 + 10])(1);
      }
    }
  }
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    if ((undefined4 *)param_1[local_1c + 2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_1c + 2])(1);
    }
    if ((undefined4 *)param_1[local_1c + 6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_1c + 6])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1);
  ExceptionList = local_10;
  return;
}

