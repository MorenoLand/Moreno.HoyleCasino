// FUN_00676650  00676650

undefined4 * __thiscall FUN_00676650(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad5f8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = SetupWizardDialog::vftable;
  FUN_005f83d0(0x30d4f1,0);
  param_1[0x6f] = 0;
  if (param_2 == 0) {
    uVar2 = FUN_006375b0(uVar1);
    param_1[0x70] = uVar2;
  }
  else {
    param_1[0x70] = param_2;
  }
  ExceptionList = local_10;
  return param_1;
}

