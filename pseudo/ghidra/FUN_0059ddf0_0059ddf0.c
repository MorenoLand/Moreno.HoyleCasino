// FUN_0059ddf0  0059ddf0

undefined4 * __thiscall FUN_0059ddf0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  void *local_40 [13];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7684;
  local_40[0xc] = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = local_40 + 0xc;
  FUN_005fc0d0(param_3);
  local_8 = 0;
  *param_1 = BigRaiseDealToScript::vftable;
  param_1[8] = param_2;
  local_40[0] = (void *)0x310eb0;
  local_40[1] = (void *)0x310eae;
  local_40[2] = (void *)0x310eb2;
  local_40[3] = (void *)0x310eac;
  local_40[4] = (void *)0x310eb4;
  local_40[5] = (void *)0x310eb4;
  local_40[6] = (void *)0x310eaf;
  local_40[7] = (void *)0x310ead;
  local_40[8] = (void *)0x310eb1;
  local_40[9] = (void *)0x310eab;
  local_40[10] = (void *)0x310eb3;
  local_40[0xb] = (void *)0x310eb3;
  FUN_005eaf00(local_40[param_2]);
  FUN_005eaf00(local_40[param_2 + 6]);
  (**(code **)(**(int **)(DAT_007935c4 + 0xa0) + 0xb0))(0,uVar1);
  (**(code **)(**(int **)(DAT_007935c4 + 0x9c) + 0xb0))(0);
  ExceptionList = local_40[0xc];
  return param_1;
}

