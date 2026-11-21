// FUN_004e9390  004e9390

short __fastcall FUN_004e9390(int param_1)

{
  short sVar1;
  short local_8;
  
  if (*(short *)(param_1 + 100) == 0) {
    local_8 = *(short *)(param_1 + 0x288);
  }
  else if (*(short *)(param_1 + 100) == 1) {
    local_8 = *(short *)(param_1 + 0x288);
    sVar1 = FUN_0062fbf0(5);
    local_8 = local_8 - sVar1;
    if (local_8 < 0) {
      local_8 = 0;
    }
  }
  else if (*(short *)(param_1 + 100) == 2) {
    local_8 = *(short *)(param_1 + 0x288);
    sVar1 = FUN_0062fbf0(3);
    local_8 = local_8 + sVar1;
  }
  else if (*(short *)(param_1 + 100) == 3) {
    local_8 = *(short *)(param_1 + 0x288);
    sVar1 = FUN_0062fbf0(6);
    local_8 = local_8 + sVar1;
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x25d6);
    local_8 = 0;
  }
  return local_8;
}

