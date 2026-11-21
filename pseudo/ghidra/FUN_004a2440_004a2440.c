// FUN_004a2440  004a2440

uint __thiscall FUN_004a2440(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    FUN_005e9f20("ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x1cf);
  }
  if (*param_2 == 0) {
    FUN_005e9f20("phRHS.ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x1d0);
  }
  pbVar1 = (byte *)(uint)*param_2;
  if ((pbVar1 < (byte *)(uint)*param_1) ||
     ((pbVar1 = param_2, *param_1 == *param_2 &&
      (pbVar1 = (byte *)(uint)*(ushort *)(param_1 + 2),
      (byte *)(uint)*(ushort *)(param_2 + 2) < pbVar1)))) {
    uVar2 = CONCAT31((int3)((uint)pbVar1 >> 8),1);
  }
  else {
    uVar2 = (uint)pbVar1 & 0xffffff00;
  }
  return uVar2;
}

