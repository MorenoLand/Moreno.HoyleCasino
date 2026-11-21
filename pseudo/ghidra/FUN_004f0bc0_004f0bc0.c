// FUN_004f0bc0  004f0bc0

uint __fastcall FUN_004f0bc0(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x3c8) / 2;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x3c8);
  }
  return uVar1;
}

