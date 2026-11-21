// FUN_004f7050  004f7050

void __thiscall FUN_004f7050(int param_1,short param_2,undefined4 param_3)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a2649;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x361,uVar1);
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_005e9f20("bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x362,uVar1);
  }
  if (param_2 < 0) {
    FUN_005e9f20("shShowdownPlayer >= 0","..\\Casino\\PokerPot.cpp",0x363,uVar1);
  }
  if (*(short *)(param_1 + 6) <= param_2) {
    FUN_005e9f20("shShowdownPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0x364,uVar1);
  }
  if (*(char *)(*(int *)(param_1 + 0x30) + (int)param_2) != '\0') {
    FUN_005e9f20("!pbFolded[shShowdownPlayer]","..\\Casino\\PokerPot.cpp",0x365,uVar1);
  }
  if (*(char *)(*(int *)(param_1 + 0x3c) + (int)param_2) != '\0') {
    FUN_005e9f20("!pbInShowdownYet[shShowdownPlayer]","..\\Casino\\PokerPot.cpp",0x366);
  }
  if (*(int *)(*(int *)(param_1 + 0x68) + param_2 * 4) != *(int *)(param_1 + 0x24)) {
    FUN_005e9f20("plChipsInPot[shShowdownPlayer] == lCurrentShowdownLevel",
                 "..\\Casino\\PokerPot.cpp",0x367);
  }
  if (*(int *)(*(int *)(param_1 + 0x6c) + param_2 * 4) != *(int *)(param_1 + 0x28)) {
    FUN_005e9f20("plBonusChipInterest[shShowdownPlayer] == lCurrentShowdownBonusLevel",
                 "..\\Casino\\PokerPot.cpp",0x368);
  }
  *(undefined1 *)((int)param_2 + *(int *)(param_1 + 0x3c)) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + param_2 * 4) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x80) + param_2 * 4) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x84) + param_2 * 4) = 0;
  local_8 = 0xffffffff;
  FUN_004a20f0();
  ExceptionList = local_10;
  return;
}

