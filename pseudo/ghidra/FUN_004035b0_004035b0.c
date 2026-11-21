// FUN_004035b0  004035b0

undefined4 __fastcall FUN_004035b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_007902f0 + *(int *)(param_1 + 0x1c0) * 0x338 + 0xc4);
  if (iVar1 < 0x14) {
    uVar2 = 0;
  }
  else if (iVar1 < 0x27) {
    uVar2 = 0x13;
  }
  else if (iVar1 < 0x3a) {
    uVar2 = 0x26;
  }
  else if (iVar1 < 0x4d) {
    uVar2 = 0x39;
  }
  else if (iVar1 < 0x60) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x5f;
  }
  return uVar2;
}

