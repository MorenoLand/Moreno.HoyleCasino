// FUN_004f9c90  004f9c90

int FUN_004f9c90(void)

{
  uint3 uVar2;
  int iVar1;
  
  uVar2 = (uint3)((uint)DAT_007947e0 >> 8);
  if (*(char *)(DAT_007947e0 + 0x4ee9) == '\0') {
    iVar1 = CONCAT31(uVar2,1);
  }
  else {
    iVar1 = (uint)uVar2 << 8;
  }
  return iVar1;
}

