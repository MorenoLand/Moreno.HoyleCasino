// FUN_004f8c30  004f8c30

uint __thiscall FUN_004f8c30(int param_1,char param_2)

{
  uint uVar1;
  ushort local_10;
  ushort local_c;
  short local_8;
  
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x555);
  }
  if (*(char *)(param_1 + 3) == '\0') {
    FUN_005e9f20("bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x556);
  }
  if (*(char *)(param_1 + 5) == '\0') {
    FUN_005e9f20("bHaveShowdownResult","..\\Casino\\PokerPot.cpp",0x557);
  }
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_005e9f20("bHighLowShowdownInProgress","..\\Casino\\PokerPot.cpp",0x558);
  }
  local_8 = 0;
  local_10 = 0xffff;
  for (local_c = 0; (short)local_c < *(short *)(param_1 + 6); local_c = local_c + 1) {
    if (((*(char *)(*(int *)(param_1 + 0x30) + (int)(short)local_c) == '\0') &&
        (*(char *)(*(int *)(param_1 + 0x3c) + (int)(short)local_c) != '\0')) &&
       (((param_2 != '\0' && (*(char *)(*(int *)(param_1 + 0x44) + (int)(short)local_c) != '\0')) ||
        ((param_2 == '\0' && (*(char *)(*(int *)(param_1 + 0x48) + (int)(short)local_c) != '\0')))))
       ) {
      local_8 = local_8 + 1;
      local_10 = local_c;
    }
  }
  if (local_8 == 0) {
    uVar1 = 0xfffb;
  }
  else if (local_8 == 1) {
    uVar1 = (uint)local_10;
  }
  else {
    uVar1 = CONCAT22(local_8 >> 0xf,0xfffc);
  }
  return uVar1;
}

