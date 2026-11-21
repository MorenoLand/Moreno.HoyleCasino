// FUN_00600630  00600630

undefined4 * __thiscall FUN_00600630(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa83b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00600420(param_3);
  local_8 = 0;
  *param_1 = sciCycleSync::vftable;
  param_1[7] = param_2;
  uVar2 = FUN_00603c50(0x20534443,param_1[7],0);
  param_1[8] = uVar2;
  if ((param_1[8] != 0) && (iVar3 = (**(code **)(*(int *)param_1[8] + 4))(uVar1), iVar3 != 0)) {
    param_1[9] = 0;
    iVar3 = FUN_005f3e50();
    iVar4 = (**(code **)(*(int *)param_1[8] + 4))();
    param_1[10] = iVar3 + (uint)*(byte *)(iVar4 + 1 + param_1[9] * 2);
    ExceptionList = local_10;
    return param_1;
  }
  param_1[9] = 0xffffffff;
  ExceptionList = local_10;
  return param_1;
}

