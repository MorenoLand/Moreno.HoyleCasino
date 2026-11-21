// FUN_00568250  00568250

undefined4 FUN_00568250(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x31222e) {
    uVar1 = 0;
  }
  else if (param_1 == 0x312233) {
    uVar1 = 5;
  }
  else if (param_1 == 0x312234) {
    uVar1 = 10;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

