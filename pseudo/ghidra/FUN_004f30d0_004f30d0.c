// FUN_004f30d0  004f30d0

uint __fastcall FUN_004f30d0(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x3f8) / 2;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x3f8);
  }
  return uVar1;
}

