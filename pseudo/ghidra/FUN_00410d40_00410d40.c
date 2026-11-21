// FUN_00410d40  00410d40

undefined4 * __thiscall FUN_00410d40(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dc58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005fc0d0(param_2);
  local_8 = 0;
  *param_1 = BlackjackHitScript::vftable;
  iVar1 = FUN_00637810(4);
  *(bool *)(param_1 + 8) = iVar1 < 2;
  if (*(int *)(DAT_00790324 + 0x4d0) == -1) {
    local_20 = 4;
  }
  else {
    local_20 = *(undefined4 *)(DAT_00790324 + 0x4d0);
  }
  param_1[9] = local_20;
  ExceptionList = local_10;
  return param_1;
}

