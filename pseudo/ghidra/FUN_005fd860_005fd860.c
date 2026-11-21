// FUN_005fd860  005fd860

undefined4 * __thiscall
FUN_005fd860(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa683;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f7670(param_3,param_4,0x280,0x1e0);
  local_8 = 0;
  *param_1 = sciMenu::vftable;
  FUN_005f89d0(0xffffffff);
  param_1[0x6d] = param_2;
  param_1[0x6e] = 0xffffffff;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0xffffffff;
  for (local_14 = 0; local_14 < 100; local_14 = local_14 + 1) {
    param_1[local_14 + 0x72] = 0xffffffff;
  }
  ExceptionList = local_10;
  return param_1;
}

