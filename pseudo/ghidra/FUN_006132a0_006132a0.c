// FUN_006132a0  006132a0

void __fastcall FUN_006132a0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006ab076;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = VWindow::vftable;
  local_8 = 1;
  FUN_00613da0(uVar1);
  if ((undefined4 *)param_1[0x14] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  operator_delete((void *)param_1[0x21]);
  local_8 = local_8 & 0xffffff00;
  FUN_0062a900(uVar1,uVar2);
  local_8 = 0xffffffff;
  FUN_0062aef0();
  ExceptionList = local_10;
  return;
}

