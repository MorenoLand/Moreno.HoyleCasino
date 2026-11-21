// FUN_005cfe70  005cfe70

undefined4 * __fastcall FUN_005cfe70(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8d26;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = CreditCardDialog::vftable;
  FUN_005f83d0(0x442,0);
  *(undefined1 *)(param_1 + 0x80) = 0;
  param_1[0x7f] = 0;
  ExceptionList = local_10;
  return param_1;
}

