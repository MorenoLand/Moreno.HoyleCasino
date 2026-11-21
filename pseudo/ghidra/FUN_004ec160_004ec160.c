// FUN_004ec160  004ec160

uint __fastcall FUN_004ec160(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x36c) / 2;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x36c);
  }
  return uVar1;
}

