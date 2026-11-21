// FUN_005e5db0  005e5db0

undefined4 * __fastcall FUN_005e5db0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a98e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = CasinoDemoChooseSlot::vftable;
  FUN_005f83d0(0x442,0);
  FUN_005f7340(0,0);
  ExceptionList = local_10;
  return param_1;
}

