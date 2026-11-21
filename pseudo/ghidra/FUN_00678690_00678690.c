// FUN_00678690  00678690

undefined4 * __thiscall FUN_00678690(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad768;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = HighScoresAttractModeScript::vftable;
  uVar3 = FUN_005f3bf0(uVar2);
  piVar4 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(uVar3);
  uVar1 = (**(code **)(*piVar4 + 0xb0))();
  *(undefined1 *)(param_1 + 8) = uVar1;
  if (param_2 == 0) {
    param_1[10] = 0x3c;
  }
  else {
    param_1[10] = param_2;
  }
  ExceptionList = local_10;
  return param_1;
}

