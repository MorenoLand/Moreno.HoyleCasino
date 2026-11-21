// FUN_0058d790  0058d790

void __fastcall FUN_0058d790(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a6f7c;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = KenoItemScroller::vftable;
  local_8 = 0;
  if (param_1[0x22] != 0) {
    if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x22])(1,uVar1);
    }
    param_1[0x22] = 0;
  }
  local_8 = 0xffffffff;
  FUN_00584760();
  ExceptionList = local_10;
  return;
}

