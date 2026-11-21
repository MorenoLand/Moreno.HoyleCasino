// FUN_004f8d90  004f8d90

short __thiscall FUN_004f8d90(int param_1,char param_2)

{
  short local_c;
  short local_8;
  
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x573);
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_005e9f20("bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x574);
  }
  if (*(char *)(param_1 + 5) == '\0') {
    FUN_005e9f20("bHaveShowdownResult","..\\Casino\\PokerPot.cpp",0x575);
  }
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_005e9f20("bHighLowShowdownInProgress","..\\Casino\\PokerPot.cpp",0x576);
  }
  local_c = -1;
  local_8 = 0;
  do {
    if (*(short *)(param_1 + 6) <= local_8) {
LAB_004f8eae:
      if (local_8 == *(short *)(param_1 + 6)) {
        local_c = -1;
      }
      else {
        if (local_c < 0) {
          FUN_005e9f20("shFirstWinner>=0","..\\Casino\\PokerPot.cpp",0x588);
        }
        if (param_2 == '\0') {
          *(undefined1 *)((int)local_c + *(int *)(param_1 + 0x48)) = 0;
        }
        else {
          *(undefined1 *)((int)local_c + *(int *)(param_1 + 0x44)) = 0;
        }
      }
      return local_c;
    }
    if (((*(char *)(*(int *)(param_1 + 0x30) + (int)local_8) == '\0') &&
        (*(char *)(*(int *)(param_1 + 0x3c) + (int)local_8) != '\0')) &&
       (((param_2 != '\0' && (*(char *)(*(int *)(param_1 + 0x44) + (int)local_8) != '\0')) ||
        ((param_2 == '\0' && (*(char *)(*(int *)(param_1 + 0x48) + (int)local_8) != '\0')))))) {
      local_c = local_8;
      goto LAB_004f8eae;
    }
    local_8 = local_8 + 1;
  } while( true );
}

