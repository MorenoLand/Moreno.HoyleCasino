// FUN_005d0500  005d0500

undefined4 * __fastcall FUN_005d0500(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8d95;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = RepayLoanDialog::vftable;
  FUN_005f83d0(0x4de,0);
  *(undefined1 *)((int)param_1 + 0x1ee) = 0;
  ExceptionList = local_10;
  return param_1;
}

