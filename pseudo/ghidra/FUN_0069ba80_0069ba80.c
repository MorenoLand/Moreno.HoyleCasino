// FUN_0069ba80  0069ba80

uint FUN_0069ba80(void)

{
  uint uVar1;
  
  uVar1 = ftol();
  if (0x3ff < (int)uVar1) {
    return 0x3ff;
  }
  return uVar1 & ((int)uVar1 < 0) - 1;
}

