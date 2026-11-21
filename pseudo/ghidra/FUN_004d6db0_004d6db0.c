// FUN_004d6db0  004d6db0

uint __fastcall FUN_004d6db0(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x1e0) / 2;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x1e0);
  }
  return uVar1;
}

