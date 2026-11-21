// FUN_005c8140  005c8140

void __fastcall FUN_005c8140(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a8948;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = MLVSlotRoom::vftable;
  local_8 = 0;
  if ((param_1[0x20] != 0) && ((undefined4 *)param_1[0x20] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x20])(1,uVar1);
  }
  param_1[0x20] = 0;
  local_8 = 0xffffffff;
  FUN_005d7bd0();
  ExceptionList = local_10;
  return;
}

