// FUN_004ee660  004ee660

uint __fastcall FUN_004ee660(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x39a) / 2;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x39a);
  }
  return uVar1;
}

