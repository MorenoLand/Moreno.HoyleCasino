// FUN_004d2ae0  004d2ae0

short __thiscall FUN_004d2ae0(int param_1,short param_2)

{
  short sVar1;
  short sVar2;
  short local_c;
  short local_8;
  
  if (param_2 < 1) {
    FUN_005e9f20("shMagnitude>=1","..\\Casino\\PokerPlayer.cpp",0x107c);
  }
  if (3 < param_2) {
    FUN_005e9f20("shMagnitude<=3","..\\Casino\\PokerPlayer.cpp",0x107d);
  }
  if (*(short *)(param_1 + 100) == 0) {
    if (param_2 == 1) {
      local_c = *(short *)(param_1 + 0x158);
    }
    else if (param_2 == 2) {
      local_c = *(short *)(param_1 + 0x156);
    }
    else {
      local_c = *(short *)(param_1 + 0x154);
    }
  }
  else if (*(short *)(param_1 + 100) == 1) {
    if (param_2 == 1) {
      sVar1 = *(short *)(param_1 + 0x158);
      sVar2 = FUN_0062fbf0(8);
      local_c = FUN_0062fbf0(8);
      local_c = sVar1 + sVar2 + local_c;
    }
    else if (param_2 == 2) {
      sVar1 = *(short *)(param_1 + 0x156);
      sVar2 = FUN_0062fbf0(8);
      local_c = FUN_0062fbf0(8);
      local_c = sVar1 + sVar2 + local_c;
    }
    else {
      sVar1 = *(short *)(param_1 + 0x154);
      sVar2 = FUN_0062fbf0(8);
      local_c = FUN_0062fbf0(8);
      local_c = sVar1 + sVar2 + local_c;
    }
  }
  else if (*(short *)(param_1 + 100) == 2) {
    if (param_2 == 1) {
      sVar1 = *(short *)(param_1 + 0x158);
      sVar2 = FUN_0062fbf0(3);
      local_8 = FUN_0062fbf0(3);
      local_8 = (sVar1 - sVar2) - local_8;
    }
    else if (param_2 == 2) {
      sVar1 = *(short *)(param_1 + 0x156);
      sVar2 = FUN_0062fbf0(3);
      local_8 = FUN_0062fbf0(3);
      local_8 = (sVar1 - sVar2) - local_8;
    }
    else {
      sVar1 = *(short *)(param_1 + 0x154);
      sVar2 = FUN_0062fbf0(3);
      local_8 = FUN_0062fbf0(3);
      local_8 = (sVar1 - sVar2) - local_8;
    }
    local_c = local_8;
    if (local_8 < 1) {
      local_c = 1;
    }
  }
  else if (*(short *)(param_1 + 100) == 3) {
    if (param_2 == 1) {
      sVar1 = *(short *)(param_1 + 0x158);
      sVar2 = FUN_0062fbf0(6);
      local_c = FUN_0062fbf0(6);
      local_c = (sVar1 - sVar2) - local_c;
    }
    else if (param_2 == 2) {
      sVar1 = *(short *)(param_1 + 0x156);
      sVar2 = FUN_0062fbf0(6);
      local_c = FUN_0062fbf0(6);
      local_c = (sVar1 - sVar2) - local_c;
    }
    else {
      sVar1 = *(short *)(param_1 + 0x154);
      sVar2 = FUN_0062fbf0(6);
      local_c = FUN_0062fbf0(6);
      local_c = (sVar1 - sVar2) - local_c;
    }
    if (local_c < 1) {
      local_c = 1;
    }
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x10ae);
    local_c = 100;
  }
  return local_c;
}

