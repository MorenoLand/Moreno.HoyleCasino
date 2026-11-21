// FUN_0058d350  0058d350

void __fastcall FUN_0058d350(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a6f33;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = KenoNumberCheckBox::vftable;
  local_8 = 0;
  if (param_1[0x82] != 0) {
    if ((undefined4 *)param_1[0x82] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x82])(1,uVar1);
    }
    param_1[0x82] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005ffd40();
  ExceptionList = local_10;
  return;
}

