// FUN_0052f7f0  0052f7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0052f7f0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a46ab;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00600a70(param_2);
  local_8 = 0;
  *param_1 = CycleCashOut::vftable;
  (**(code **)(*DAT_0162ee84 + 0x80))(0x18a88,0,0,5,1,0x3f800000,_DAT_006b3654,0,uVar1);
  ExceptionList = local_10;
  return param_1;
}

