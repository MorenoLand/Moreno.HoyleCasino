// FUN_004f7ae0  004f7ae0

short __fastcall FUN_004f7ae0(int param_1)

{
  short local_8;
  
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x40a);
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_005e9f20("bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x40b);
  }
  if (*(char *)(param_1 + 5) == '\0') {
    FUN_005e9f20("bHaveShowdownResult","..\\Casino\\PokerPot.cpp",0x40c);
  }
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_005e9f20("!bHighLowShowdownInProgress","..\\Casino\\PokerPot.cpp",0x40d);
  }
  local_8 = 0;
  while( true ) {
    if (*(short *)(param_1 + 6) <= local_8) {
      return -1;
    }
    if (*(char *)(*(int *)(param_1 + 0x40) + (int)local_8) == '\0') break;
    local_8 = local_8 + 1;
  }
  *(undefined1 *)((int)local_8 + *(int *)(param_1 + 0x40)) = 1;
  return local_8;
}

