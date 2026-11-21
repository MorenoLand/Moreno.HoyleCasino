// FUN_00601ba0  00601ba0

void __fastcall FUN_00601ba0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aa8ab;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciButton::vftable;
  local_8 = 0;
  if (param_1[100] != 0) {
    if ((undefined4 *)param_1[100] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[100])(1,uVar1);
    }
    param_1[100] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005f5fa0();
  ExceptionList = local_10;
  return;
}

