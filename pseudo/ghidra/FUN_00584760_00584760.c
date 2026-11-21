// FUN_00584760  00584760

void __fastcall FUN_00584760(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a6cbc;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = KenoScrollBox::vftable;
  local_8 = 0;
  if (param_1[0x17] != 0) {
    if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x17])(1,uVar1);
    }
    param_1[0x17] = 0;
  }
  if (param_1[0x18] != 0) {
    if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x18])(1);
    }
    param_1[0x18] = 0;
  }
  if (param_1[0x19] != 0) {
    if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x19])(1);
    }
    param_1[0x19] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005f61b0();
  ExceptionList = local_10;
  return;
}

