// FUN_005d0980  005d0980

undefined4 * __fastcall FUN_005d0980(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8db8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CasinoMachineState::vftable;
  FUN_005d0a20(0);
  param_1[2] = 0;
  FUN_005d0a80(1);
  ExceptionList = local_10;
  return param_1;
}

