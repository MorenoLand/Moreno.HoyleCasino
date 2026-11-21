// FUN_00532b90  00532b90

undefined4 * __fastcall FUN_00532b90(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4838;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = SlotMachineRoom::vftable;
  DAT_0079338c = 0;
  DAT_00793390 = 0;
  DAT_00793394 = 0;
  DAT_00793388 = param_1;
  FUN_005f1ad0(0x30ef59);
  ExceptionList = local_10;
  return param_1;
}

