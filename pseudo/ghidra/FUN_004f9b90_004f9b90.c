// FUN_004f9b90  004f9b90

undefined4 * __fastcall FUN_004f9b90(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a26f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = PokerRoom::vftable;
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    uVar2 = FUN_004fa1a0();
    FUN_005f38b0(uVar2);
  }
  else {
    uVar2 = FUN_00630f40("SID_POKERTOURNAMENT");
    FUN_005f38b0(uVar2);
  }
  FUN_005f1ad0(0x186a3);
  DAT_00791eb8 = param_1;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_004fc210();
  ExceptionList = local_10;
  return param_1;
}

