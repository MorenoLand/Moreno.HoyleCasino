// FUN_0060fd70  0060fd70

undefined4 * __thiscall FUN_0060fd70(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  DWORD DVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aae97;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = sciOdometerScript::vftable;
  param_1[8] = param_2;
  param_1[0xd] = param_3;
  param_1[9] = 1;
  DVar2 = GetTickCount();
  param_1[0xb] = DVar2;
  local_14 = param_2;
  param_1[10] = 0;
  for (; local_14 != 0; local_14 = local_14 / 10) {
    param_1[10] = param_1[10] + 1;
  }
  if ((int)param_1[10] < 1) {
    param_1[10] = 1;
  }
  if ((int)param_1[8] < *(int *)(param_1[0xd] + 0x188)) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    FUN_00610980(param_1[0xd] + 0x1b0,uVar1);
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 1;
    FUN_00610980(param_1[0xd] + 400,uVar1);
  }
  ExceptionList = local_10;
  return param_1;
}

