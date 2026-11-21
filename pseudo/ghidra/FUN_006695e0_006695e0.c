// FUN_006695e0  006695e0

undefined4 * __fastcall FUN_006695e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acc68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064cbe0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = SyncViewerRoom::vftable;
  FUN_005f1ad0(0x231864);
  ExceptionList = local_10;
  return param_1;
}

