// FUN_00463ca0  00463ca0

void __fastcall FUN_00463ca0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0069f3fe;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Card::vftable;
  local_8 = 0;
  if (param_1[2] != 0) {
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[2])(1,uVar1);
    }
    param_1[2] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

