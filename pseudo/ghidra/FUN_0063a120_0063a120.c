// FUN_0063a120  0063a120

void __fastcall FUN_0063a120(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006abae8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Player::vftable;
  local_8 = 0;
  if (param_1[8] != 0) {
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])(1,uVar1);
    }
    param_1[8] = 0;
  }
  FUN_0063a2a0();
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

