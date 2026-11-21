// FUN_00448ca0  00448ca0

undefined4 * __thiscall FUN_00448ca0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0069ed71;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(param_3);
  local_8 = 0;
  *param_1 = LetItRideDealToScript::vftable;
  param_1[8] = param_2;
  FUN_005eaf00(*(undefined4 *)(&DAT_00713c3c + param_2 * 4));
  FUN_005eaf00(*(undefined4 *)(&DAT_00713c28 + param_2 * 4));
  (**(code **)(**(int **)(DAT_00790718 + 0x68) + 0xb0))(0,uVar1);
  (**(code **)(**(int **)(DAT_00790718 + 100) + 0xb0))(0);
  ExceptionList = local_10;
  return param_1;
}

