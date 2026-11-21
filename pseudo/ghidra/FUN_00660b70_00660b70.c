// FUN_00660b70  00660b70

undefined4 * __fastcall FUN_00660b70(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac95b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = NewPlayerDialog::vftable;
  FUN_005f83d0(0x30d4f3,0);
  ExceptionList = local_10;
  return param_1;
}

