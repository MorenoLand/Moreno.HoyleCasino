// FUN_004f9110  004f9110

undefined4 __fastcall FUN_004f9110(int param_1)

{
  short local_c;
  short local_8;
  
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x5ca);
  }
  local_c = 0;
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_8) == '\0') &&
       (*(char *)(*(int *)(param_1 + 0x34) + (int)local_8) == '\0')) {
      local_c = local_c + 1;
    }
  }
  return CONCAT22(*(short *)(param_1 + 6) >> 0xf,local_c);
}

