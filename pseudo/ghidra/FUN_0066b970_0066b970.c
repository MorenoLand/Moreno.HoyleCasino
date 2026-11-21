// FUN_0066b970  0066b970

void __fastcall FUN_0066b970(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ace1b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = MainScreenRoom::vftable;
  local_8 = 0;
  DAT_016306c0 = 0;
  if (param_1[0x18] != 0) {
    if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x18])(1,uVar1);
    }
    param_1[0x18] = 0;
  }
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
  }
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1c])(1);
  }
  operator_delete((void *)param_1[0x17]);
  if (param_1[0x1d] != 0) {
    (**(code **)(*(int *)param_1[0x1d] + 0x70))();
    if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1d])(1);
    }
    param_1[0x1d] = 0;
  }
  local_8 = 0xffffffff;
  FUN_0064cc80();
  ExceptionList = local_10;
  return;
}

