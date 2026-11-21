// FUN_004d2aa0  004d2aa0

uint __fastcall FUN_004d2aa0(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x16c) / 2;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x16c);
  }
  return uVar1;
}

