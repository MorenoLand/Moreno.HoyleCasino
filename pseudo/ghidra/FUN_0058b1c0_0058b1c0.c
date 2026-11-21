// FUN_0058b1c0  0058b1c0

void __fastcall FUN_0058b1c0(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a6ead;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = KenoPayoutDisplay::vftable;
  local_8 = 0;
  if (param_1[0x5e] != 0) {
    if ((undefined4 *)param_1[0x5e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x5e])(1,uVar1);
    }
    param_1[0x5e] = 0;
  }
  if (param_1[0x89] != 0) {
    if ((undefined4 *)param_1[0x89] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x89])(1);
    }
    param_1[0x89] = 0;
  }
  for (local_14 = 0; local_14 < 0x15; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x5f] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x5f] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x5f])(1);
      }
      param_1[local_14 + 0x5f] = 0;
    }
    if (param_1[local_14 + 0x74] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x74] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x74])(1);
      }
      param_1[local_14 + 0x74] = 0;
    }
  }
  local_8 = 0xffffffff;
  FUN_005eac00();
  ExceptionList = local_10;
  return;
}

