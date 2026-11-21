// FUN_005714a0  005714a0

undefined4 * __thiscall
FUN_005714a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6071;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00600a70(0);
  local_8 = 0;
  *param_1 = RoadKillSlotAccelerateCycle::vftable;
  param_1[7] = param_2;
  param_1[8] = param_3;
  param_1[9] = param_4;
  uVar2 = FUN_005f3e50(uVar1);
  param_1[10] = uVar2;
  ExceptionList = local_10;
  return param_1;
}

