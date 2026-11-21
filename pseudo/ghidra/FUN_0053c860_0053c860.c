// FUN_0053c860  0053c860

undefined4 * __thiscall FUN_0053c860(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4c89;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(param_3);
  local_8 = 0;
  *param_1 = ThreeCardPokerDealToScript::vftable;
  param_1[8] = param_2;
  FUN_005eaf00(*(undefined4 *)(&DAT_00737220 + param_2 * 4));
  FUN_005eaf00(*(undefined4 *)(&DAT_0073720c + param_2 * 4));
  (**(code **)(**(int **)(DAT_007933f4 + 0x98) + 0xb0))(0,uVar1);
  (**(code **)(**(int **)(DAT_007933f4 + 0x94) + 0xb0))(0);
  ExceptionList = local_10;
  return param_1;
}

