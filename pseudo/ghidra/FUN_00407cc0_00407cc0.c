// FUN_00407cc0  00407cc0

uint FUN_00407cc0(void)

{
  uint uVar1;
  
  uVar1 = FUN_004094b0(0);
  if (uVar1 == 0) {
    uVar1 = FUN_004094b0(4);
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = uVar1 & 0xffffff00;
    }
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

