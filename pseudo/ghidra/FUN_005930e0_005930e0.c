// FUN_005930e0  005930e0

undefined4 * __thiscall FUN_005930e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  void *local_38 [11];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a71eb;
  local_38[10] = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = local_38 + 10;
  FUN_005fc0d0(param_3);
  local_8 = 0;
  *param_1 = FourCardPokerDealToScript::vftable;
  param_1[8] = param_2;
  local_38[0] = (void *)0x310eb0;
  local_38[1] = (void *)0x310eae;
  local_38[2] = (void *)0x310eb2;
  local_38[3] = (void *)0x310eac;
  local_38[4] = (void *)0x310eb4;
  local_38[5] = (void *)0x310eaf;
  local_38[6] = (void *)0x310ead;
  local_38[7] = (void *)0x310eb1;
  local_38[8] = (void *)0x310eab;
  local_38[9] = (void *)0x310eb3;
  FUN_005eaf00(local_38[param_2]);
  FUN_005eaf00(local_38[param_2 + 5]);
  (**(code **)(**(int **)(DAT_0079359c + 0x98) + 0xb0))(0,uVar1);
  (**(code **)(**(int **)(DAT_0079359c + 0x94) + 0xb0))(0);
  ExceptionList = local_38[10];
  return param_1;
}

