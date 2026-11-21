// FUN_004d56d0  004d56d0

uint __fastcall FUN_004d56d0(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x1a6) / 2;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x1a6);
  }
  return uVar1;
}

