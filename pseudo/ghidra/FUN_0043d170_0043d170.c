// FUN_0043d170  0043d170

undefined4 * __fastcall FUN_0043d170(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e883;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = HorseAnnouncer::vftable;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  FUN_0043da90();
  FUN_005f5cc0();
  FUN_005eb570();
  pvVar1 = operator_new(0x48);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_0043e2c0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_005f5df0(local_20);
  (**(code **)(*(int *)param_1[0x5f] + 8))(0,0);
  ExceptionList = local_10;
  return param_1;
}

