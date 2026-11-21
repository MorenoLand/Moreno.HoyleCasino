// FUN_0060b7a0  0060b7a0

undefined4 FUN_0060b7a0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x14) == '\x16') || ((*(uint *)(param_1 + 0x1c) & 2) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

