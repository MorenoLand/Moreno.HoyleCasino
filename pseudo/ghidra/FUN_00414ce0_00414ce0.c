// FUN_00414ce0  00414ce0

undefined4 * __fastcall FUN_00414ce0(undefined4 *param_1)

{
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dd78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = BlackjackRoom::vftable;
  FUN_005f1ad0(0x138d);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    FUN_006044b0(0x20584554,local_14 + 0x1389,0);
  }
  for (local_14 = 0; local_14 < 0xd; local_14 = local_14 + 1) {
    FUN_006044b0(0x20584554,local_14 + 0x13a2,0);
  }
  DAT_00790320 = param_1;
  DAT_00790324 = 0;
  DAT_00790328 = 0;
  DAT_0079032c = 0;
  DAT_00790330 = 0;
  ExceptionList = local_10;
  return param_1;
}

