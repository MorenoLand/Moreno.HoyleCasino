// FUN_00563e30  00563e30

void __fastcall FUN_00563e30(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a5aba;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = VPMultiExtraHandsDisplay::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 0x31; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
    }
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      if ((undefined4 *)param_1[local_14 * 5 + local_18 + 0x32] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 * 5 + local_18 + 0x32])(1);
      }
    }
    pvVar1 = (void *)param_1[local_14 + 0x127];
    if (pvVar1 != (void *)0x0) {
      FUN_00565630();
      operator_delete(pvVar1);
    }
  }
  if ((undefined4 *)param_1[0x158] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x158])(1,uVar2);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar2,uVar3);
  ExceptionList = local_10;
  return;
}

