// FUN_005e69d0  005e69d0

void __fastcall FUN_005e69d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a997b;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CasinoHallOfFameDialog::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x70] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x70] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x70])(1);
      }
      param_1[local_14 + 0x70] = 0;
    }
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    FUN_0063a2a0();
    puVar1 = *(undefined4 **)(param_1[0x8e] + local_14 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  if (param_1[0x8e] != 0) {
    operator_delete((void *)param_1[0x8e]);
  }
  local_8 = 0xffffffff;
  FUN_005f7260(uVar2);
  ExceptionList = local_10;
  return;
}

