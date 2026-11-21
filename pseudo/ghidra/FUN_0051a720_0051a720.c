// FUN_0051a720  0051a720

void __fastcall FUN_0051a720(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a3d48;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = PokerTournamentWinnerDialog::vftable;
  local_8 = 0;
  if (param_1[0x6f] != 0) {
    if ((undefined4 *)param_1[0x6f] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x6f])(1,uVar1);
    }
    param_1[0x6f] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005f7260();
  ExceptionList = local_10;
  return;
}

