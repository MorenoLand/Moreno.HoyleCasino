// FUN_00465190  00465190

undefined4 * __fastcall FUN_00465190(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 local_28;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f43e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0060c5f0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = Deck::vftable;
  FUN_0060c5f0();
  local_8 = CONCAT31(local_8._1_3_,1);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 0xd; local_18 = local_18 + 1) {
      pvVar1 = operator_new(0x18);
      local_8._0_1_ = 2;
      if (pvVar1 == (void *)0x0) {
        local_28 = 0;
      }
      else {
        local_28 = FUN_00463c70();
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0060c7d0(local_28);
    }
  }
  FUN_00465650();
  ExceptionList = local_10;
  return param_1;
}

