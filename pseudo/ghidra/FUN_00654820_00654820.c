// FUN_00654820  00654820

void __fastcall FUN_00654820(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ac515;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = StatisticsPlayersListBoxItem::vftable;
  local_8 = 0;
  if (param_1[9] != 0) {
    operator_delete((void *)param_1[9]);
  }
  local_8 = 0xffffffff;
  FUN_00629b00(uVar1);
  ExceptionList = local_10;
  return;
}

