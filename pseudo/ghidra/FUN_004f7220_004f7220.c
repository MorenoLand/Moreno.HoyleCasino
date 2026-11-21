// FUN_004f7220  004f7220

void __thiscall
FUN_004f7220(int param_1,short param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006a2674;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x377,uVar1);
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_005e9f20("bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x378,uVar1);
  }
  if (param_2 < 0) {
    FUN_005e9f20("shShowdownPlayer >= 0","..\\Casino\\PokerPot.cpp",0x379,uVar1);
  }
  if (*(short *)(param_1 + 6) <= param_2) {
    FUN_005e9f20("shShowdownPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0x37a,uVar1);
  }
  if (*(char *)(*(int *)(param_1 + 0x30) + (int)param_2) != '\0') {
    FUN_005e9f20("!pbFolded[shShowdownPlayer]","..\\Casino\\PokerPot.cpp",0x37b,uVar1);
  }
  if (*(char *)(*(int *)(param_1 + 0x3c) + (int)param_2) != '\0') {
    FUN_005e9f20("!pbInShowdownYet[shShowdownPlayer]","..\\Casino\\PokerPot.cpp",0x37c);
  }
  if (*(int *)(*(int *)(param_1 + 0x68) + param_2 * 4) != *(int *)(param_1 + 0x24)) {
    FUN_005e9f20("plChipsInPot[shShowdownPlayer] == lCurrentShowdownLevel",
                 "..\\Casino\\PokerPot.cpp",0x37d);
  }
  *(undefined1 *)((int)param_2 + *(int *)(param_1 + 0x3c)) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + param_2 * 4) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x80) + param_2 * 4) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x84) + param_2 * 4) = param_5;
  local_8 = local_8 & 0xffffff00;
  FUN_004a20f0();
  local_8 = 0xffffffff;
  FUN_004a20f0();
  ExceptionList = local_10;
  return;
}

