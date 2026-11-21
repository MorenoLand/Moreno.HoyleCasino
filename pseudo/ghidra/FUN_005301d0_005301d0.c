// FUN_005301d0  005301d0

undefined4 * __thiscall FUN_005301d0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a472a;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = ShakeReelScript::vftable;
  param_1[8] = param_2;
  param_1[9] = *(undefined4 *)(param_2 + 0x1a4);
  param_1[10] = *(undefined4 *)(param_2 + 0x1a8);
  uVar2 = FUN_0062fbf0(0x18,uVar1);
  param_1[0xb] = uVar2;
  ExceptionList = local_10;
  return param_1;
}

