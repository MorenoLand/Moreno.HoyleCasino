// FUN_005ab7f0  005ab7f0

undefined4 * __thiscall FUN_005ab7f0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7bab;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(param_2);
  local_8 = 0;
  *param_1 = RoyalMatchHitScript::vftable;
  iVar2 = FUN_00637810(4);
  *(bool *)(param_1 + 8) = iVar2 < 2;
  iVar2 = FUN_005b4f00(uVar1);
  if (iVar2 == -1) {
    local_18 = 4;
  }
  else {
    local_18 = FUN_005b4f00(uVar1);
  }
  param_1[9] = local_18;
  ExceptionList = local_10;
  return param_1;
}

