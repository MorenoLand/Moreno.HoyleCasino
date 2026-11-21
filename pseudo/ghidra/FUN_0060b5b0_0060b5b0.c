// FUN_0060b5b0  0060b5b0

void __fastcall FUN_0060b5b0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aacdb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciEditBox::vftable;
  local_8 = 0;
  if ((param_1[0x79] != 0) && ((undefined4 *)param_1[0x79] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x79])(1,uVar1);
  }
  if ((param_1[0x77] != 0) && ((undefined4 *)param_1[0x77] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x77])(1);
  }
  if ((param_1[0x78] != 0) && ((undefined4 *)param_1[0x78] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x78])(1);
  }
  local_8 = 0xffffffff;
  FUN_005ec760();
  ExceptionList = local_10;
  return;
}

