// FUN_005320f0  005320f0

void __fastcall FUN_005320f0(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a4808;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = SlotMachineReaderBoard::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[0x75] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x75])(1,uVar1);
  }
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x65] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x65])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_005f5c40();
  ExceptionList = local_10;
  return;
}

