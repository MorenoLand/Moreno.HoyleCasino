// FUN_00643ce0  00643ce0

undefined4 * __thiscall FUN_00643ce0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abd28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5f50(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CardDisplay::vftable;
  param_1[0x65] = param_2;
  *(undefined2 *)(param_1 + 100) = 0xffff;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)((int)param_1 + 10) = 1;
  if (param_3 == 0) {
    local_18 = *(int *)(DAT_0162ee84 + 0x14);
  }
  else {
    local_18 = param_3;
  }
  param_1[1] = local_18;
  FUN_005f5cc0();
  ExceptionList = local_10;
  return param_1;
}

