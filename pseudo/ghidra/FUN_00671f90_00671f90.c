// FUN_00671f90  00671f90

undefined4 * __thiscall FUN_00671f90(undefined4 *param_1,undefined1 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad278;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = GettingStartedDialog::vftable;
  FUN_005f83d0(0x30d4f6,0);
  *(undefined1 *)(param_1 + 0x6f) = param_2;
  ExceptionList = local_10;
  return param_1;
}

