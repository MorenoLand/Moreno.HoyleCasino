// FUN_004f0870  004f0870

uint __thiscall FUN_004f0870(int param_1,short param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  ushort local_8;
  
  if (param_2 < 1) {
    FUN_005e9f20("shMagnitude>=1","..\\Casino\\PokerPlayer.cpp",0x2e5c);
  }
  if (3 < param_2) {
    FUN_005e9f20("shMagnitude<=3","..\\Casino\\PokerPlayer.cpp",0x2e5d);
  }
  local_8 = 0;
  if (*(short *)(param_1 + 100) == 0) {
    if (param_2 == 1) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x3be);
    }
    else if (param_2 == 2) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x3bc);
    }
    else {
      uVar3 = (uint)*(ushort *)(param_1 + 0x3ba);
    }
  }
  else if (*(short *)(param_1 + 100) == 1) {
    if (param_2 == 1) {
      uVar3 = (int)*(short *)(param_1 + 0x3be) / 2;
    }
    else if (param_2 == 2) {
      uVar3 = (int)*(short *)(param_1 + 0x3bc) / 2;
    }
    else {
      uVar3 = (int)*(short *)(param_1 + 0x3ba) / 2;
    }
  }
  else {
    if (*(short *)(param_1 + 100) == 2) {
      if (param_2 == 1) {
        sVar1 = *(short *)(param_1 + 0x3be);
        sVar2 = FUN_0062fbf0(0x14);
        local_8 = sVar1 + sVar2;
      }
      else if (param_2 == 2) {
        sVar1 = *(short *)(param_1 + 0x3bc);
        sVar2 = FUN_0062fbf0(0x14);
        local_8 = sVar1 + sVar2;
      }
      else {
        sVar1 = *(short *)(param_1 + 0x3ba);
        sVar2 = FUN_0062fbf0(0x14);
        local_8 = sVar1 + sVar2;
      }
    }
    else if (*(short *)(param_1 + 100) == 3) {
      if (param_2 == 1) {
        sVar1 = *(short *)(param_1 + 0x3be);
        sVar2 = FUN_0062fbf0(0x28);
        local_8 = sVar1 + sVar2;
      }
      else if (param_2 == 2) {
        sVar1 = *(short *)(param_1 + 0x3bc);
        sVar2 = FUN_0062fbf0(0x28);
        local_8 = sVar1 + sVar2;
      }
      else {
        sVar1 = *(short *)(param_1 + 0x3ba);
        sVar2 = FUN_0062fbf0(0x28);
        local_8 = sVar1 + sVar2;
      }
    }
    if (0x60 < (short)local_8) {
      local_8 = 0x60;
    }
    uVar3 = (uint)local_8;
  }
  return uVar3;
}

