// FUN_0057c640  0057c640

void __fastcall FUN_0057c640(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a67b3;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CasinoTutorialInfoBox::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x6e] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x6e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x6e])(1);
      }
      param_1[local_14 + 0x6e] = 0;
    }
  }
  if (param_1[0x74] != 0) {
    if ((undefined4 *)param_1[0x74] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x74])(1,uVar1);
    }
    param_1[0x74] = 0;
  }
  if (param_1[0x75] != 0) {
    if ((undefined4 *)param_1[0x75] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x75])(1);
    }
    param_1[0x75] = 0;
  }
  if (param_1[0x76] != 0) {
    if ((undefined4 *)param_1[0x76] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x76])(1);
    }
    param_1[0x76] = 0;
  }
  *(undefined4 *)(DAT_00793578 + 0x19e0) = 0;
  local_8 = 0xffffffff;
  FUN_005f79f0();
  ExceptionList = local_10;
  return;
}

