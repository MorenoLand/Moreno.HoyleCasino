// FUN_0057a840  0057a840

void __fastcall FUN_0057a840(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a66d8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CasinoTutorialDialog::vftable;
  local_8 = 0;
  FUN_0057ae30(uVar1);
  if (param_1[0x678] != 0) {
    if ((undefined4 *)param_1[0x678] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x678])(1);
    }
    param_1[0x678] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005f7260();
  ExceptionList = local_10;
  return;
}

