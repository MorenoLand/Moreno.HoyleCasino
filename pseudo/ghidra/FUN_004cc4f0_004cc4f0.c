// FUN_004cc4f0  004cc4f0

uint __fastcall FUN_004cc4f0(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x13c) / 2;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x13c);
  }
  return uVar1;
}

