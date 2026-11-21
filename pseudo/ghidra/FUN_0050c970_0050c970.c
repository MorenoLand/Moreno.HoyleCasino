// FUN_0050c970  0050c970

uint FUN_0050c970(undefined4 param_1)

{
  uint uVar1;
  
  DAT_007926f8 = FUN_0047e390(param_1);
  uVar1 = FUN_0062fbf0(2);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

