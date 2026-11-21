// FUN_005cefb0  005cefb0

undefined4 * __fastcall FUN_005cefb0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8c97;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = HallOfFameDialog::vftable;
  FUN_005f83d0(0x4e6,0);
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  ExceptionList = local_10;
  return param_1;
}

