// FUN_005ff370  005ff370

void __fastcall FUN_005ff370(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aa798;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciTab::vftable;
  local_8 = 0;
  if (param_1[0x84] != 0) {
    FUN_0060ca10(uVar1);
    if ((undefined4 *)param_1[0x84] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x84])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_006060e0();
  ExceptionList = local_10;
  return;
}

