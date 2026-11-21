// FUN_004d9140  004d9140

uint __fastcall FUN_004d9140(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x20c) / 2;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x20c);
  }
  return uVar1;
}

