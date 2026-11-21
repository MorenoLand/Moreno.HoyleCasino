// FUN_00654740  00654740

undefined4 * __fastcall FUN_00654740(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac4f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00629ab0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = StatisticsPlayersListBoxItem::vftable;
  uVar1 = (**(code **)(*DAT_0162ee84 + 0xec))();
  pvVar2 = operator_new(uVar1);
  param_1[9] = pvVar2;
  local_14 = 0;
  while( true ) {
    iVar3 = (**(code **)(*DAT_0162ee84 + 0xec))();
    if (iVar3 <= local_14) break;
    *(undefined1 *)(param_1[9] + local_14) = 0;
    local_14 = local_14 + 1;
  }
  memset(param_1 + 5,0,0xd);
  ExceptionList = local_10;
  return param_1;
}

