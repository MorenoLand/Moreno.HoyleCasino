// FUN_00564fe0  00564fe0

uint FUN_00564fe0(void)

{
  uint uVar1;
  
  uVar1 = DAT_0079343c;
  if ((*(int *)(DAT_0079343c + 0x14) == 1) &&
     (uVar1 = *(uint *)(DAT_00793438 + 4), *(int *)(uVar1 + 4) == 0)) {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

