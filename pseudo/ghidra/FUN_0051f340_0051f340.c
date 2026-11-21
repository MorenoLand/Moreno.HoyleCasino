// FUN_0051f340  0051f340

void __fastcall FUN_0051f340(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a3deb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = PokerTournamentRoom::vftable;
  local_8 = 0;
  DAT_00793160 = 0;
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x25] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x25] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x25])(1);
      }
      param_1[local_14 + 0x25] = 0;
    }
  }
  local_8 = 0xffffffff;
  FUN_005d7bd0(uVar1);
  ExceptionList = local_10;
  return;
}

